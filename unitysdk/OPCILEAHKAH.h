#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPCILEAHKAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OPCILEAHKAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1A6E00)
#define OPCILEAHKAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A7120)
#define OPCILEAHKAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1A6860)
#define OPCILEAHKAH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F1A68E0)
#define OPCILEAHKAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1A67F0)
#define OPCILEAHKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A67E0)
#define OPCILEAHKAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1A6AA0)
#define OPCILEAHKAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1A6920)
#define OPCILEAHKAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F1A6910)
#define OPCILEAHKAH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F1A68F0)
#define OPCILEAHKAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1A6C20)
#define OPCILEAHKAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1A67A0)
#define OPCILEAHKAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1A6F60)
#define OPCILEAHKAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1A6ED0)
#define OPCILEAHKAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F1A6900)
#define OPCILEAHKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1A67D0)
#define OPCILEAHKAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1A6CC0)
#define OPCILEAHKAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1A6D20)

inline static constexpr unsigned int OPCILEAHKAH_TypeDefinitionIndex = 30918;

	class OPCILEAHKAH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OPCILEAHKAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPCILEAHKAH*>**)UnitySDK::FromName("", "OPCILEAHKAH")->GetStaticField(0x28CD0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPCILEAHKAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPCILEAHKAH*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPCILEAHKAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPCILEAHKAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPCILEAHKAH*>*(*)())((::PBYTE)hIl2Cpp + OPCILEAHKAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPCILEAHKAH* Clone()
		{
			return ((::OPCILEAHKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPCILEAHKAH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPCILEAHKAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPCILEAHKAH*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPCILEAHKAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPCILEAHKAH*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPCILEAHKAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
