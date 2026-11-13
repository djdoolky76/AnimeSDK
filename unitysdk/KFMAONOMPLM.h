#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGAIOOGPPA;
class KFMAONOMPLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFMAONOMPLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9B1E30)
#define KFMAONOMPLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9B2100)
#define KFMAONOMPLM_CKMALEOIPPB_OFFSET UNITYSDK_OFFSET(0x1F9B1960)
#define KFMAONOMPLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9B1830)
#define KFMAONOMPLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9B1710)
#define KFMAONOMPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B1700)
#define KFMAONOMPLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9B1B20)
#define KFMAONOMPLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9B19A0)
#define KFMAONOMPLM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F9B1990)
#define KFMAONOMPLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9B1CA0)
#define KFMAONOMPLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9B16C0)
#define KFMAONOMPLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9B1F70)
#define KFMAONOMPLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9B1F00)
#define KFMAONOMPLM_MMMCFLOLOLI_OFFSET UNITYSDK_OFFSET(0x1F9B1970)
#define KFMAONOMPLM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F9B1980)
#define KFMAONOMPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9B16F0)
#define KFMAONOMPLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9B1CF0)
#define KFMAONOMPLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9B1D50)

inline static constexpr unsigned int KFMAONOMPLM_TypeDefinitionIndex = 34496;

	class KFMAONOMPLM : public ::System::Object
	{
	public:
		::DFGAIOOGPPA* GNHKDIKKFGG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>**)UnitySDK::FromName("", "KFMAONOMPLM")->GetStaticField(0xCB20);
		}

		// static const ::System::Object PKNIPBLEBAB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFMAONOMPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMAONOMPLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>*(*)())((::PBYTE)hIl2Cpp + KFMAONOMPLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFMAONOMPLM* Clone()
		{
			return ((::KFMAONOMPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CLONE_OFFSET))(this);
		}

		::DFGAIOOGPPA* CKMALEOIPPB()
		{
			return ((::DFGAIOOGPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CKMALEOIPPB_OFFSET))(this);
		}

		::System::Void MMMCFLOLOLI(::DFGAIOOGPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGAIOOGPPA*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MMMCFLOLOLI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFMAONOMPLM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFMAONOMPLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFMAONOMPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
