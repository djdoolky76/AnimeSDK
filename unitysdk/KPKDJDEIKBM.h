#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPKDJDEIKBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPKDJDEIKBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E891820)
#define KPKDJDEIKBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E891A40)
#define KPKDJDEIKBM_CDDCMGKMPDL_OFFSET UNITYSDK_OFFSET(0x1E891490)
#define KPKDJDEIKBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E891410)
#define KPKDJDEIKBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8913E0)
#define KPKDJDEIKBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8913D0)
#define KPKDJDEIKBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8915A0)
#define KPKDJDEIKBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8914A0)
#define KPKDJDEIKBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E891710)
#define KPKDJDEIKBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E891360)
#define KPKDJDEIKBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8918E0)
#define KPKDJDEIKBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8918B0)
#define KPKDJDEIKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8913C0)
#define KPKDJDEIKBM_PMPODEGJNNA_OFFSET UNITYSDK_OFFSET(0x1E891480)
#define KPKDJDEIKBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E891740)
#define KPKDJDEIKBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8917A0)

inline static constexpr unsigned int KPKDJDEIKBM_TypeDefinitionIndex = 29264;

	class KPKDJDEIKBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ILJIKCLDHIH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPKDJDEIKBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPKDJDEIKBM*>**)UnitySDK::FromName("", "KPKDJDEIKBM")->GetStaticField(0x22D80);
		}

		// static const ::System::Object AEPKKMHMCFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPKDJDEIKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPKDJDEIKBM*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPKDJDEIKBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPKDJDEIKBM*>*(*)())((::PBYTE)hIl2Cpp + KPKDJDEIKBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPKDJDEIKBM* Clone()
		{
			return ((::KPKDJDEIKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMPODEGJNNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_PMPODEGJNNA_OFFSET))(this);
		}

		::System::Void CDDCMGKMPDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CDDCMGKMPDL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPKDJDEIKBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPKDJDEIKBM*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPKDJDEIKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPKDJDEIKBM*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPKDJDEIKBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
