#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDEOKAIJAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDDEOKAIJAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22E010)
#define EDDEOKAIJAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22E230)
#define EDDEOKAIJAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22DC60)
#define EDDEOKAIJAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22DC30)
#define EDDEOKAIJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22DC20)
#define EDDEOKAIJAB_DEFOHBJCGBL_OFFSET UNITYSDK_OFFSET(0x1E22DCA0)
#define EDDEOKAIJAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22DD90)
#define EDDEOKAIJAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22DCC0)
#define EDDEOKAIJAB_FEGCNIHKGMM_OFFSET UNITYSDK_OFFSET(0x1E22DCB0)
#define EDDEOKAIJAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22DF00)
#define EDDEOKAIJAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22DBE0)
#define EDDEOKAIJAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22E0D0)
#define EDDEOKAIJAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22E0A0)
#define EDDEOKAIJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22DC10)
#define EDDEOKAIJAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22DF30)
#define EDDEOKAIJAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22DF90)

inline static constexpr unsigned int EDDEOKAIJAB_TypeDefinitionIndex = 33044;

	class EDDEOKAIJAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JOHLIICKKBJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EDDEOKAIJAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDDEOKAIJAB*>**)UnitySDK::FromName("", "EDDEOKAIJAB")->GetStaticField(0x433B0);
		}

		// static const ::System::Object ODGFCJNBKNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDDEOKAIJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDDEOKAIJAB*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDDEOKAIJAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDDEOKAIJAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDDEOKAIJAB*>*(*)())((::PBYTE)hIl2Cpp + EDDEOKAIJAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDDEOKAIJAB* Clone()
		{
			return ((::EDDEOKAIJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEFOHBJCGBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_DEFOHBJCGBL_OFFSET))(this);
		}

		::System::Void FEGCNIHKGMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_FEGCNIHKGMM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDDEOKAIJAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDDEOKAIJAB*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDDEOKAIJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDDEOKAIJAB*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDDEOKAIJAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
