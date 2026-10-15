#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEPKPAHIIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DGEPKPAHIIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1ABF70)
#define DGEPKPAHIIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AC350)
#define DGEPKPAHIIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AB930)
#define DGEPKPAHIIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AB8B0)
#define DGEPKPAHIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AB8A0)
#define DGEPKPAHIIN_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E1AB9C0)
#define DGEPKPAHIIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1ABBB0)
#define DGEPKPAHIIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1ABA20)
#define DGEPKPAHIIN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1ABA10)
#define DGEPKPAHIIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1ABD40)
#define DGEPKPAHIIN_IFMBKPGIIOJ_OFFSET UNITYSDK_OFFSET(0x1E1AB9F0)
#define DGEPKPAHIIN_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E1AB9D0)
#define DGEPKPAHIIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AB860)
#define DGEPKPAHIIN_KHEHIJFJMIH_OFFSET UNITYSDK_OFFSET(0x1E1AB9E0)
#define DGEPKPAHIIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AC170)
#define DGEPKPAHIIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AC0D0)
#define DGEPKPAHIIN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1ABA00)
#define DGEPKPAHIIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AB890)
#define DGEPKPAHIIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1ABDD0)
#define DGEPKPAHIIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1ABE30)

inline static constexpr unsigned int DGEPKPAHIIN_TypeDefinitionIndex = 29891;

	class DGEPKPAHIIN : public ::System::Object
	{
	public:
		::Proto::ItemList* JEDJCPJBEOM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 OEIJJLNNBHF; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DGEPKPAHIIN")->GetStaticField(0x340A0);
		}

		// static const ::System::Object HPGDFCOBPGH; // 0x0
		// static const ::System::Object BLNDLLNEPII; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGEPKPAHIIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPKPAHIIN*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGEPKPAHIIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DGEPKPAHIIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGEPKPAHIIN* Clone()
		{
			return ((::DGEPKPAHIIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::UInt32 KHEHIJFJMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_KHEHIJFJMIH_OFFSET))(this);
		}

		::System::Void IFMBKPGIIOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_IFMBKPGIIOJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGEPKPAHIIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGEPKPAHIIN*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGEPKPAHIIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPKPAHIIN*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGEPKPAHIIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
