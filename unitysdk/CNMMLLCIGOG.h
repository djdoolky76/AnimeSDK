#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMMLLCIGOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CNMMLLCIGOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E10BEA0)
#define CNMMLLCIGOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10C260)
#define CNMMLLCIGOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E10B870)
#define CNMMLLCIGOG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E10B930)
#define CNMMLLCIGOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10B800)
#define CNMMLLCIGOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10B7F0)
#define CNMMLLCIGOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E10BAE0)
#define CNMMLLCIGOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E10B950)
#define CNMMLLCIGOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E10B900)
#define CNMMLLCIGOG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E10B940)
#define CNMMLLCIGOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E10BC70)
#define CNMMLLCIGOG_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1E10B920)
#define CNMMLLCIGOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E10B7B0)
#define CNMMLLCIGOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E10C080)
#define CNMMLLCIGOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E10BFE0)
#define CNMMLLCIGOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E10B8F0)
#define CNMMLLCIGOG_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1E10B910)
#define CNMMLLCIGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E10B7E0)
#define CNMMLLCIGOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E10BD00)
#define CNMMLLCIGOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E10BD60)

	class CNMMLLCIGOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 OFAGPEOKFKD; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CNMMLLCIGOG")->GetStaticField(0x20040);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FDJBMJHPBGK; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNMMLLCIGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CNMMLLCIGOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNMMLLCIGOG* Clone()
		{
			return ((::CNMMLLCIGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OLBKJMAIDKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_OLBKJMAIDKH_OFFSET))(this);
		}

		::System::Void INAEHNCKBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_INAEHNCKBJC_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNMMLLCIGOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNMMLLCIGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
