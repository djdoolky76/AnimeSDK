#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class JMABIKHOJOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMABIKHOJOI_AMGKHOILFCD_OFFSET UNITYSDK_OFFSET(0x1E787630)
#define JMABIKHOJOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E787B00)
#define JMABIKHOJOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E787E70)
#define JMABIKHOJOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7875B0)
#define JMABIKHOJOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E787540)
#define JMABIKHOJOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787530)
#define JMABIKHOJOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7877F0)
#define JMABIKHOJOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E787670)
#define JMABIKHOJOI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E787660)
#define JMABIKHOJOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E787970)
#define JMABIKHOJOI_HOHJPLMNCJG_OFFSET UNITYSDK_OFFSET(0x1E787640)
#define JMABIKHOJOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7874F0)
#define JMABIKHOJOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E787C90)
#define JMABIKHOJOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E787BD0)
#define JMABIKHOJOI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E787650)
#define JMABIKHOJOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E787520)
#define JMABIKHOJOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7879C0)
#define JMABIKHOJOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E787A20)

inline static constexpr unsigned int JMABIKHOJOI_TypeDefinitionIndex = 28975;

	class JMABIKHOJOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EPBMGIOIHEI* BJAOKCEDLKI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JMABIKHOJOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMABIKHOJOI*>**)UnitySDK::FromName("", "JMABIKHOJOI")->GetStaticField(0x6BE60);
		}

		// static const ::System::Object EBLHHNJBIJK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMABIKHOJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMABIKHOJOI*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMABIKHOJOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMABIKHOJOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMABIKHOJOI*>*(*)())((::PBYTE)hIl2Cpp + JMABIKHOJOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMABIKHOJOI* Clone()
		{
			return ((::JMABIKHOJOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_CLONE_OFFSET))(this);
		}

		::EPBMGIOIHEI* AMGKHOILFCD()
		{
			return ((::EPBMGIOIHEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_AMGKHOILFCD_OFFSET))(this);
		}

		::System::Void HOHJPLMNCJG(::EPBMGIOIHEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBMGIOIHEI*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_HOHJPLMNCJG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMABIKHOJOI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMABIKHOJOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMABIKHOJOI*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMABIKHOJOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMABIKHOJOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMABIKHOJOI*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMABIKHOJOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
