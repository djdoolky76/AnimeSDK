#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKCIBPKMODK;
class HENDEHGPKMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKCIBPKMODK_BMGMGGIMGAO_OFFSET UNITYSDK_OFFSET(0x1E3ABE50)
#define FKCIBPKMODK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3AC310)
#define FKCIBPKMODK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AC6F0)
#define FKCIBPKMODK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3ABDA0)
#define FKCIBPKMODK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ABD10)
#define FKCIBPKMODK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABD00)
#define FKCIBPKMODK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3AC000)
#define FKCIBPKMODK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3ABE80)
#define FKCIBPKMODK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3ABE70)
#define FKCIBPKMODK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3AC180)
#define FKCIBPKMODK_HNONLNHOMOM_OFFSET UNITYSDK_OFFSET(0x1E3ABE40)
#define FKCIBPKMODK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3ABCC0)
#define FKCIBPKMODK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3AC4E0)
#define FKCIBPKMODK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3AC3E0)
#define FKCIBPKMODK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3ABE60)
#define FKCIBPKMODK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3ABCF0)
#define FKCIBPKMODK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3AC1D0)
#define FKCIBPKMODK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3AC230)

inline static constexpr unsigned int FKCIBPKMODK_TypeDefinitionIndex = 29716;

	class FKCIBPKMODK : public ::System::Object
	{
	public:
		::HENDEHGPKMF* DGLDOBGLDNI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FKCIBPKMODK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKCIBPKMODK*>**)UnitySDK::FromName("", "FKCIBPKMODK")->GetStaticField(0x610B0);
		}

		// static const ::System::Object EGDAAOALMBG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKCIBPKMODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKCIBPKMODK*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCIBPKMODK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKCIBPKMODK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKCIBPKMODK*>*(*)())((::PBYTE)hIl2Cpp + FKCIBPKMODK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKCIBPKMODK* Clone()
		{
			return ((::FKCIBPKMODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_CLONE_OFFSET))(this);
		}

		::HENDEHGPKMF* HNONLNHOMOM()
		{
			return ((::HENDEHGPKMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_HNONLNHOMOM_OFFSET))(this);
		}

		::System::Void BMGMGGIMGAO(::HENDEHGPKMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HENDEHGPKMF*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_BMGMGGIMGAO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKCIBPKMODK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKCIBPKMODK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKCIBPKMODK*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKCIBPKMODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKCIBPKMODK*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKCIBPKMODK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
