#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFCPOEDPPKB.h"
#include "unitysdk/System/Object.h"
class DKMMAPLHFOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DKMMAPLHFOA_AJINEBLMBNB_OFFSET UNITYSDK_OFFSET(0x1E1D98C0)
#define DKMMAPLHFOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D9E70)
#define DKMMAPLHFOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DA270)
#define DKMMAPLHFOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D9820)
#define DKMMAPLHFOA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1D98E0)
#define DKMMAPLHFOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D97B0)
#define DKMMAPLHFOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D97A0)
#define DKMMAPLHFOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D9A90)
#define DKMMAPLHFOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D9900)
#define DKMMAPLHFOA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1D98F0)
#define DKMMAPLHFOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D9C20)
#define DKMMAPLHFOA_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E1D98B0)
#define DKMMAPLHFOA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E1D98A0)
#define DKMMAPLHFOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D9760)
#define DKMMAPLHFOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DA090)
#define DKMMAPLHFOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D9FF0)
#define DKMMAPLHFOA_OAECBHKJCEF_OFFSET UNITYSDK_OFFSET(0x1E1D98D0)
#define DKMMAPLHFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D9790)
#define DKMMAPLHFOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D9CB0)
#define DKMMAPLHFOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D9D10)

inline static constexpr unsigned int DKMMAPLHFOA_TypeDefinitionIndex = 34915;

	class DKMMAPLHFOA : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CFCPOEDPPKB GMPNCOBOFDM; // 0x20
		::System::UInt32 DLAENJMCANJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DKMMAPLHFOA")->GetStaticField(0x3B1C0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object CNLGPDPICBH; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKMMAPLHFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMMAPLHFOA*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DKMMAPLHFOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKMMAPLHFOA* Clone()
		{
			return ((::DKMMAPLHFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CLONE_OFFSET))(this);
		}

		::CFCPOEDPPKB JBIOGKPHKKC()
		{
			return ((::CFCPOEDPPKB(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::CFCPOEDPPKB a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFCPOEDPPKB))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 AJINEBLMBNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_AJINEBLMBNB_OFFSET))(this);
		}

		::System::Void OAECBHKJCEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_OAECBHKJCEF_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKMMAPLHFOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKMMAPLHFOA*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKMMAPLHFOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMMAPLHFOA*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKMMAPLHFOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
