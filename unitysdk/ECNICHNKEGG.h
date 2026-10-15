#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNICHNKEGG;
class KFACLOGFNJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECNICHNKEGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E256660)
#define ECNICHNKEGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E256930)
#define ECNICHNKEGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E256040)
#define ECNICHNKEGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E255FD0)
#define ECNICHNKEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E255FC0)
#define ECNICHNKEGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E256250)
#define ECNICHNKEGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2560E0)
#define ECNICHNKEGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E256520)
#define ECNICHNKEGG_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1E2560C0)
#define ECNICHNKEGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E255F80)
#define ECNICHNKEGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E256760)
#define ECNICHNKEGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2566C0)
#define ECNICHNKEGG_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1E2560D0)
#define ECNICHNKEGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E255FB0)
#define ECNICHNKEGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E256570)
#define ECNICHNKEGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2565D0)

inline static constexpr unsigned int ECNICHNKEGG_TypeDefinitionIndex = 27387;

	class ECNICHNKEGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECNICHNKEGG")->GetStaticField(0x3ECF0);
		}

		// static const ::System::Object NNOBLNPPJGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECNICHNKEGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNICHNKEGG*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNICHNKEGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECNICHNKEGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECNICHNKEGG* Clone()
		{
			return ((::ECNICHNKEGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_CLONE_OFFSET))(this);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECNICHNKEGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNICHNKEGG*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNICHNKEGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECNICHNKEGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNICHNKEGG*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECNICHNKEGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
