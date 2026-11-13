#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBMBKLIIFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKBMBKLIIFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4950F0)
#define PKBMBKLIIFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F495310)
#define PKBMBKLIIFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F494D40)
#define PKBMBKLIIFL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1F494D80)
#define PKBMBKLIIFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F494D10)
#define PKBMBKLIIFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F494D00)
#define PKBMBKLIIFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F494E70)
#define PKBMBKLIIFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F494DA0)
#define PKBMBKLIIFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F494FE0)
#define PKBMBKLIIFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F494CC0)
#define PKBMBKLIIFL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1F494D90)
#define PKBMBKLIIFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4951B0)
#define PKBMBKLIIFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F495180)
#define PKBMBKLIIFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F494CF0)
#define PKBMBKLIIFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F495010)
#define PKBMBKLIIFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F495070)

inline static constexpr unsigned int PKBMBKLIIFL_TypeDefinitionIndex = 28439;

	class PKBMBKLIIFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PKBMBKLIIFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKBMBKLIIFL*>**)UnitySDK::FromName("", "PKBMBKLIIFL")->GetStaticField(0x41520);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKBMBKLIIFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBMBKLIIFL*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKBMBKLIIFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKBMBKLIIFL*>*(*)())((::PBYTE)hIl2Cpp + PKBMBKLIIFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKBMBKLIIFL* Clone()
		{
			return ((::PKBMBKLIIFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKBMBKLIIFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKBMBKLIIFL*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKBMBKLIIFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBMBKLIIFL*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKBMBKLIIFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
