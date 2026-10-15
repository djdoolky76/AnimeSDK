#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class NKLLJAMLBCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKLLJAMLBCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2DDC0)
#define NKLLJAMLBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2E110)
#define NKLLJAMLBCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2D870)
#define NKLLJAMLBCB_COAGFOEMIEN_OFFSET UNITYSDK_OFFSET(0x1EB2D8F0)
#define NKLLJAMLBCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2D800)
#define NKLLJAMLBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D7F0)
#define NKLLJAMLBCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2DAB0)
#define NKLLJAMLBCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2D930)
#define NKLLJAMLBCB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB2D920)
#define NKLLJAMLBCB_FBNKEDOHKIL_OFFSET UNITYSDK_OFFSET(0x1EB2D900)
#define NKLLJAMLBCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2DC30)
#define NKLLJAMLBCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB2D7B0)
#define NKLLJAMLBCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2DF40)
#define NKLLJAMLBCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2DE90)
#define NKLLJAMLBCB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB2D910)
#define NKLLJAMLBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D7E0)
#define NKLLJAMLBCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2DC80)
#define NKLLJAMLBCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2DCE0)

inline static constexpr unsigned int NKLLJAMLBCB_TypeDefinitionIndex = 34359;

	class NKLLJAMLBCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ENHOPAHGCMA* FNGCFMKPAIE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKLLJAMLBCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKLLJAMLBCB*>**)UnitySDK::FromName("", "NKLLJAMLBCB")->GetStaticField(0x69610);
		}

		// static const ::System::Object JMACJHNFKJB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKLLJAMLBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKLLJAMLBCB*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKLLJAMLBCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKLLJAMLBCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKLLJAMLBCB*>*(*)())((::PBYTE)hIl2Cpp + NKLLJAMLBCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKLLJAMLBCB* Clone()
		{
			return ((::NKLLJAMLBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* COAGFOEMIEN()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_COAGFOEMIEN_OFFSET))(this);
		}

		::System::Void FBNKEDOHKIL(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_FBNKEDOHKIL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKLLJAMLBCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKLLJAMLBCB*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKLLJAMLBCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKLLJAMLBCB*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKLLJAMLBCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
