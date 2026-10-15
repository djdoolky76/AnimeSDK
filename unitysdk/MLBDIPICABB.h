#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBDIPICABB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MLBDIPICABB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA51DE0)
#define MLBDIPICABB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA52100)
#define MLBDIPICABB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA51840)
#define MLBDIPICABB_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EA518C0)
#define MLBDIPICABB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA517D0)
#define MLBDIPICABB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA517C0)
#define MLBDIPICABB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA51A80)
#define MLBDIPICABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA51900)
#define MLBDIPICABB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA518F0)
#define MLBDIPICABB_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EA518D0)
#define MLBDIPICABB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA51C00)
#define MLBDIPICABB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA51780)
#define MLBDIPICABB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA51F40)
#define MLBDIPICABB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA51EB0)
#define MLBDIPICABB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA518E0)
#define MLBDIPICABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA517B0)
#define MLBDIPICABB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA51CA0)
#define MLBDIPICABB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA51D00)

inline static constexpr unsigned int MLBDIPICABB_TypeDefinitionIndex = 29984;

	class MLBDIPICABB : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MLBDIPICABB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLBDIPICABB*>**)UnitySDK::FromName("", "MLBDIPICABB")->GetStaticField(0x55EE0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLBDIPICABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBDIPICABB*))((::PBYTE)hIl2Cpp + MLBDIPICABB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBDIPICABB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLBDIPICABB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLBDIPICABB*>*(*)())((::PBYTE)hIl2Cpp + MLBDIPICABB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLBDIPICABB* Clone()
		{
			return ((::MLBDIPICABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MLBDIPICABB_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLBDIPICABB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLBDIPICABB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLBDIPICABB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLBDIPICABB*))((::PBYTE)hIl2Cpp + MLBDIPICABB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLBDIPICABB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLBDIPICABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLBDIPICABB*))((::PBYTE)hIl2Cpp + MLBDIPICABB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLBDIPICABB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
