#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEPKPAHIIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define DGEPKPAHIIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17E990)
#define DGEPKPAHIIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17ED70)
#define DGEPKPAHIIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17E350)
#define DGEPKPAHIIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17E2D0)
#define DGEPKPAHIIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17E2C0)
#define DGEPKPAHIIN_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E17E3E0)
#define DGEPKPAHIIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17E5D0)
#define DGEPKPAHIIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17E440)
#define DGEPKPAHIIN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E17E430)
#define DGEPKPAHIIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17E760)
#define DGEPKPAHIIN_IFMBKPGIIOJ_OFFSET UNITYSDK_OFFSET(0x1E17E410)
#define DGEPKPAHIIN_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E17E3F0)
#define DGEPKPAHIIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17E280)
#define DGEPKPAHIIN_KHEHIJFJMIH_OFFSET UNITYSDK_OFFSET(0x1E17E400)
#define DGEPKPAHIIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17EB90)
#define DGEPKPAHIIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17EAF0)
#define DGEPKPAHIIN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E17E420)
#define DGEPKPAHIIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17E2B0)
#define DGEPKPAHIIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17E7F0)
#define DGEPKPAHIIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17E850)

inline static constexpr unsigned int DGEPKPAHIIN_TypeDefinitionIndex = 29891;

	class DGEPKPAHIIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JEDJCPJBEOM; // 0x18
		::System::UInt32 OEIJJLNNBHF; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DGEPKPAHIIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGEPKPAHIIN*>**)UnitySDK::FromName("", "DGEPKPAHIIN")->GetStaticField(0x2F740);
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

		static ::Google::Protobuf::MessageParser_1<::DGEPKPAHIIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGEPKPAHIIN*>*(*)())((::PBYTE)hIl2Cpp + DGEPKPAHIIN_JJGHOBBFNJD_OFFSET))();
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
