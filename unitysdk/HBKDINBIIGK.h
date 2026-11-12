#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBKDINBIIGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBKDINBIIGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8248D0)
#define HBKDINBIIGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F824B30)
#define HBKDINBIIGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F824480)
#define HBKDINBIIGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F824440)
#define HBKDINBIIGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F824430)
#define HBKDINBIIGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F824650)
#define HBKDINBIIGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F824540)
#define HBKDINBIIGK_FFPLHIKMOKC_OFFSET UNITYSDK_OFFSET(0x1F824510)
#define HBKDINBIIGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F824730)
#define HBKDINBIIGK_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x1F824530)
#define HBKDINBIIGK_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x1F824520)
#define HBKDINBIIGK_JBLCFIHLBIE_OFFSET UNITYSDK_OFFSET(0x1F824500)
#define HBKDINBIIGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8243C0)
#define HBKDINBIIGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8249B0)
#define HBKDINBIIGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F824970)
#define HBKDINBIIGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F824420)
#define HBKDINBIIGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F824760)
#define HBKDINBIIGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8247C0)

inline static constexpr unsigned int HBKDINBIIGK_TypeDefinitionIndex = 30313;

	class HBKDINBIIGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GEIKIKJPHAE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 AJAHEGPHBEI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HBKDINBIIGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HBKDINBIIGK*>**)UnitySDK::FromName("", "HBKDINBIIGK")->GetStaticField(0x202B0);
		}

		// static const ::System::Object ACDLIEANFHI; // 0x0
		// static const ::System::Object NMCANELKJNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBKDINBIIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBKDINBIIGK*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBKDINBIIGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HBKDINBIIGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HBKDINBIIGK*>*(*)())((::PBYTE)hIl2Cpp + HBKDINBIIGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBKDINBIIGK* Clone()
		{
			return ((::HBKDINBIIGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBLCFIHLBIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_JBLCFIHLBIE_OFFSET))(this);
		}

		::System::Void FFPLHIKMOKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBKDINBIIGK_FFPLHIKMOKC_OFFSET))(this, a1);
		}

		::System::Boolean IEIAADAJHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_IEIAADAJHOL_OFFSET))(this);
		}

		::System::Void GNJHDBGBCBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBKDINBIIGK_GNJHDBGBCBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBKDINBIIGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBKDINBIIGK*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBKDINBIIGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBKDINBIIGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBKDINBIIGK*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBKDINBIIGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
