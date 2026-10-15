#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPCIGEBNOFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPCIGEBNOFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB66D90)
#define NPCIGEBNOFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB67060)
#define NPCIGEBNOFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB669E0)
#define NPCIGEBNOFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB669B0)
#define NPCIGEBNOFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB669A0)
#define NPCIGEBNOFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB66B50)
#define NPCIGEBNOFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB66A70)
#define NPCIGEBNOFG_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1EB66A30)
#define NPCIGEBNOFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB66C20)
#define NPCIGEBNOFG_HOMAOOLGBFD_OFFSET UNITYSDK_OFFSET(0x1EB66A50)
#define NPCIGEBNOFG_IPIPMPFIAJN_OFFSET UNITYSDK_OFFSET(0x1EB66A60)
#define NPCIGEBNOFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB66960)
#define NPCIGEBNOFG_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1EB66A40)
#define NPCIGEBNOFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB66EE0)
#define NPCIGEBNOFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB66EA0)
#define NPCIGEBNOFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB66990)
#define NPCIGEBNOFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB66C50)
#define NPCIGEBNOFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB66CB0)

inline static constexpr unsigned int NPCIGEBNOFG_TypeDefinitionIndex = 32914;

	class NPCIGEBNOFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 HDKGAMNJCID; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NPCIGEBNOFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPCIGEBNOFG*>**)UnitySDK::FromName("", "NPCIGEBNOFG")->GetStaticField(0xC7E0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PCDOHBPOLOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPCIGEBNOFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCIGEBNOFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPCIGEBNOFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPCIGEBNOFG*>*(*)())((::PBYTE)hIl2Cpp + NPCIGEBNOFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPCIGEBNOFG* Clone()
		{
			return ((::NPCIGEBNOFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 HOMAOOLGBFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_HOMAOOLGBFD_OFFSET))(this);
		}

		::System::Void IPIPMPFIAJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_IPIPMPFIAJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPCIGEBNOFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPCIGEBNOFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPCIGEBNOFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
