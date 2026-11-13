#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMNLLNLLOJ;
class MDLPIFCHFPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCMNLLNLLOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FEBC610)
#define CCMNLLNLLOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBC8E0)
#define CCMNLLNLLOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FEBC010)
#define CCMNLLNLLOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FEBBEF0)
#define CCMNLLNLLOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBBEE0)
#define CCMNLLNLLOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FEBC300)
#define CCMNLLNLLOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FEBC180)
#define CCMNLLNLLOJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FEBC170)
#define CCMNLLNLLOJ_FLLHIBEOGJD_OFFSET UNITYSDK_OFFSET(0x1FEBC150)
#define CCMNLLNLLOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FEBC480)
#define CCMNLLNLLOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FEBBEA0)
#define CCMNLLNLLOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FEBC750)
#define CCMNLLNLLOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FEBC6E0)
#define CCMNLLNLLOJ_MMOKNHFMPDA_OFFSET UNITYSDK_OFFSET(0x1FEBC140)
#define CCMNLLNLLOJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FEBC160)
#define CCMNLLNLLOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FEBBED0)
#define CCMNLLNLLOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FEBC4D0)
#define CCMNLLNLLOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FEBC530)

inline static constexpr unsigned int CCMNLLNLLOJ_TypeDefinitionIndex = 34691;

	class CCMNLLNLLOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MDLPIFCHFPJ* IDEANDBNCNN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CCMNLLNLLOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCMNLLNLLOJ*>**)UnitySDK::FromName("", "CCMNLLNLLOJ")->GetStaticField(0x61390);
		}

		// static const ::System::Object FMIPLNJFOAF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCMNLLNLLOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMNLLNLLOJ*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCMNLLNLLOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCMNLLNLLOJ*>*(*)())((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCMNLLNLLOJ* Clone()
		{
			return ((::CCMNLLNLLOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_CLONE_OFFSET))(this);
		}

		::MDLPIFCHFPJ* MMOKNHFMPDA()
		{
			return ((::MDLPIFCHFPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_MMOKNHFMPDA_OFFSET))(this);
		}

		::System::Void FLLHIBEOGJD(::MDLPIFCHFPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDLPIFCHFPJ*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_FLLHIBEOGJD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCMNLLNLLOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCMNLLNLLOJ*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCMNLLNLLOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMNLLNLLOJ*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCMNLLNLLOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
