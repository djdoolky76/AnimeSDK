#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHJEBMOOJED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BHJEBMOOJED_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1DDF6350)
#define BHJEBMOOJED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF68D0)
#define BHJEBMOOJED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6B80)
#define BHJEBMOOJED_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1DDF6360)
#define BHJEBMOOJED_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF62B0)
#define BHJEBMOOJED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF6240)
#define BHJEBMOOJED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6230)
#define BHJEBMOOJED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF6550)
#define BHJEBMOOJED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF6390)
#define BHJEBMOOJED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF66D0)
#define BHJEBMOOJED_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1DDF6380)
#define BHJEBMOOJED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF61C0)
#define BHJEBMOOJED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF69C0)
#define BHJEBMOOJED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF6930)
#define BHJEBMOOJED_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1DDF6370)
#define BHJEBMOOJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6220)
#define BHJEBMOOJED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF6760)
#define BHJEBMOOJED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF67C0)

inline static constexpr unsigned int BHJEBMOOJED_TypeDefinitionIndex = 26612;

	class BHJEBMOOJED : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean DHMADBLCKKD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BHJEBMOOJED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHJEBMOOJED*>**)UnitySDK::FromName("", "BHJEBMOOJED")->GetStaticField(0x2CC60);
		}

		// static const ::System::Object OOLLDLHKDOH; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHJEBMOOJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHJEBMOOJED*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHJEBMOOJED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHJEBMOOJED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHJEBMOOJED*>*(*)())((::PBYTE)hIl2Cpp + BHJEBMOOJED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHJEBMOOJED* Clone()
		{
			return ((::BHJEBMOOJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_CLONE_OFFSET))(this);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHJEBMOOJED_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHJEBMOOJED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHJEBMOOJED*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBMOOJED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHJEBMOOJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHJEBMOOJED*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHJEBMOOJED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
