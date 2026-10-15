#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIHJNDBDJJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIHJNDBDJJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E497C10)
#define GIHJNDBDJJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E497EE0)
#define GIHJNDBDJJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E497860)
#define GIHJNDBDJJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E497830)
#define GIHJNDBDJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E497820)
#define GIHJNDBDJJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4979D0)
#define GIHJNDBDJJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4978F0)
#define GIHJNDBDJJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4978E0)
#define GIHJNDBDJJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E497AA0)
#define GIHJNDBDJJI_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E4978B0)
#define GIHJNDBDJJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4977E0)
#define GIHJNDBDJJI_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E4978C0)
#define GIHJNDBDJJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E497D60)
#define GIHJNDBDJJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E497D20)
#define GIHJNDBDJJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4978D0)
#define GIHJNDBDJJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E497810)
#define GIHJNDBDJJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E497AD0)
#define GIHJNDBDJJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E497B30)

inline static constexpr unsigned int GIHJNDBDJJI_TypeDefinitionIndex = 31723;

	class GIHJNDBDJJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BHFEEGICLMK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIHJNDBDJJI")->GetStaticField(0x19600);
		}

		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIHJNDBDJJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIHJNDBDJJI*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIHJNDBDJJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIHJNDBDJJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIHJNDBDJJI* Clone()
		{
			return ((::GIHJNDBDJJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIHJNDBDJJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIHJNDBDJJI*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIHJNDBDJJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIHJNDBDJJI*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIHJNDBDJJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
