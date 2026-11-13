#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCECJENGJLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCECJENGJLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F46B1D0)
#define DCECJENGJLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F46B4A0)
#define DCECJENGJLD_CKNMJPOOLCN_OFFSET UNITYSDK_OFFSET(0x1F46AE70)
#define DCECJENGJLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F46ADD0)
#define DCECJENGJLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F46ADA0)
#define DCECJENGJLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F46AD90)
#define DCECJENGJLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F46AF90)
#define DCECJENGJLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F46AE80)
#define DCECJENGJLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F46B060)
#define DCECJENGJLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F46AD20)
#define DCECJENGJLD_JLODNLHKNJL_OFFSET UNITYSDK_OFFSET(0x1F46AE60)
#define DCECJENGJLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F46B320)
#define DCECJENGJLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F46B2E0)
#define DCECJENGJLD_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x1F46AE50)
#define DCECJENGJLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F46AD80)
#define DCECJENGJLD_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x1F46AE40)
#define DCECJENGJLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F46B090)
#define DCECJENGJLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F46B0F0)

inline static constexpr unsigned int DCECJENGJLD_TypeDefinitionIndex = 25598;

	class DCECJENGJLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHGOGHEFEKB; // 0x18
		::System::UInt32 KKMBEBBLHEL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DCECJENGJLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCECJENGJLD*>**)UnitySDK::FromName("", "DCECJENGJLD")->GetStaticField(0x1EE30);
		}

		// static const ::System::Object AHHJCDPEOPD; // 0x0
		// static const ::System::Object MLJAJPICBMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCECJENGJLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCECJENGJLD*))((::PBYTE)hIl2Cpp + DCECJENGJLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCECJENGJLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCECJENGJLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCECJENGJLD*>*(*)())((::PBYTE)hIl2Cpp + DCECJENGJLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCECJENGJLD* Clone()
		{
			return ((::DCECJENGJLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCECJENGJLD_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::UInt32 JLODNLHKNJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_JLODNLHKNJL_OFFSET))(this);
		}

		::System::Void CKNMJPOOLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCECJENGJLD_CKNMJPOOLCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCECJENGJLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCECJENGJLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCECJENGJLD*))((::PBYTE)hIl2Cpp + DCECJENGJLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCECJENGJLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCECJENGJLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCECJENGJLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCECJENGJLD*))((::PBYTE)hIl2Cpp + DCECJENGJLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCECJENGJLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
