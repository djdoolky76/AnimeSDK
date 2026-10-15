#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCOHNDPHBGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCOHNDPHBGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E4080)
#define BCOHNDPHBGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E42A0)
#define BCOHNDPHBGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E3CD0)
#define BCOHNDPHBGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E3CA0)
#define BCOHNDPHBGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E3C90)
#define BCOHNDPHBGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E3E00)
#define BCOHNDPHBGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E3D30)
#define BCOHNDPHBGK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8E3D20)
#define BCOHNDPHBGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E3F70)
#define BCOHNDPHBGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E3C50)
#define BCOHNDPHBGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E4140)
#define BCOHNDPHBGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E4110)
#define BCOHNDPHBGK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8E3D10)
#define BCOHNDPHBGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E3C80)
#define BCOHNDPHBGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E3FA0)
#define BCOHNDPHBGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E4000)

inline static constexpr unsigned int BCOHNDPHBGK_TypeDefinitionIndex = 26751;

	class BCOHNDPHBGK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BCOHNDPHBGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCOHNDPHBGK*>**)UnitySDK::FromName("", "BCOHNDPHBGK")->GetStaticField(0x51590);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCOHNDPHBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCOHNDPHBGK*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCOHNDPHBGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCOHNDPHBGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCOHNDPHBGK*>*(*)())((::PBYTE)hIl2Cpp + BCOHNDPHBGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCOHNDPHBGK* Clone()
		{
			return ((::BCOHNDPHBGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCOHNDPHBGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCOHNDPHBGK*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCOHNDPHBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCOHNDPHBGK*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCOHNDPHBGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
