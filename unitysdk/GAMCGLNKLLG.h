#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAMCGLNKLLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define GAMCGLNKLLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E422000)
#define GAMCGLNKLLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E422320)
#define GAMCGLNKLLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E421A60)
#define GAMCGLNKLLG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E421AE0)
#define GAMCGLNKLLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4219F0)
#define GAMCGLNKLLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4219E0)
#define GAMCGLNKLLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E421CA0)
#define GAMCGLNKLLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E421B20)
#define GAMCGLNKLLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E421B10)
#define GAMCGLNKLLG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E421AF0)
#define GAMCGLNKLLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E421E20)
#define GAMCGLNKLLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4219A0)
#define GAMCGLNKLLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E422160)
#define GAMCGLNKLLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4220D0)
#define GAMCGLNKLLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E421B00)
#define GAMCGLNKLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4219D0)
#define GAMCGLNKLLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E421EC0)
#define GAMCGLNKLLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E421F20)

inline static constexpr unsigned int GAMCGLNKLLG_TypeDefinitionIndex = 26557;

	class GAMCGLNKLLG : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GAMCGLNKLLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAMCGLNKLLG*>**)UnitySDK::FromName("", "GAMCGLNKLLG")->GetStaticField(0xBF60);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAMCGLNKLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAMCGLNKLLG*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAMCGLNKLLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAMCGLNKLLG*>*(*)())((::PBYTE)hIl2Cpp + GAMCGLNKLLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAMCGLNKLLG* Clone()
		{
			return ((::GAMCGLNKLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAMCGLNKLLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAMCGLNKLLG*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAMCGLNKLLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAMCGLNKLLG*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAMCGLNKLLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
