#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKKGKCCHHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOKKGKCCHHL_BFFPNBLKBFP_OFFSET UNITYSDK_OFFSET(0x1E5EB160)
#define HOKKGKCCHHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5EB4B0)
#define HOKKGKCCHHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB780)
#define HOKKGKCCHHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5EB100)
#define HOKKGKCCHHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5EB0D0)
#define HOKKGKCCHHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB0C0)
#define HOKKGKCCHHL_EJLDPPKHLME_OFFSET UNITYSDK_OFFSET(0x1E5EB180)
#define HOKKGKCCHHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5EB270)
#define HOKKGKCCHHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5EB190)
#define HOKKGKCCHHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5EB340)
#define HOKKGKCCHHL_HPJEOCBLCHK_OFFSET UNITYSDK_OFFSET(0x1E5EB170)
#define HOKKGKCCHHL_JHBCBOKDPFC_OFFSET UNITYSDK_OFFSET(0x1E5EB150)
#define HOKKGKCCHHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5EB080)
#define HOKKGKCCHHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5EB600)
#define HOKKGKCCHHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5EB5C0)
#define HOKKGKCCHHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB0B0)
#define HOKKGKCCHHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5EB370)
#define HOKKGKCCHHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5EB3D0)

inline static constexpr unsigned int HOKKGKCCHHL_TypeDefinitionIndex = 30482;

	class HOKKGKCCHHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNBMMJEOOBM; // 0x18
		::System::UInt32 MEOFFJNMDAG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HOKKGKCCHHL")->GetStaticField(0x4DCC0);
		}

		// static const ::System::Object JLALDPJDBNL; // 0x0
		// static const ::System::Object GNPDHAJALHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOKKGKCCHHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOKKGKCCHHL*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKKGKCCHHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HOKKGKCCHHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOKKGKCCHHL* Clone()
		{
			return ((::HOKKGKCCHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBCBOKDPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_JHBCBOKDPFC_OFFSET))(this);
		}

		::System::Void BFFPNBLKBFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_BFFPNBLKBFP_OFFSET))(this, a1);
		}

		::System::UInt32 HPJEOCBLCHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_HPJEOCBLCHK_OFFSET))(this);
		}

		::System::Void EJLDPPKHLME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_EJLDPPKHLME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOKKGKCCHHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOKKGKCCHHL*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOKKGKCCHHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOKKGKCCHHL*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOKKGKCCHHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
