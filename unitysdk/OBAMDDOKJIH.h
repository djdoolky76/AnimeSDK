#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAMDDOKJIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBAMDDOKJIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F09F960)
#define OBAMDDOKJIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F09FC30)
#define OBAMDDOKJIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F09F5B0)
#define OBAMDDOKJIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F09F580)
#define OBAMDDOKJIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F09F570)
#define OBAMDDOKJIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F09F720)
#define OBAMDDOKJIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F09F640)
#define OBAMDDOKJIH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F09F630)
#define OBAMDDOKJIH_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1F09F600)
#define OBAMDDOKJIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F09F7F0)
#define OBAMDDOKJIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F09F530)
#define OBAMDDOKJIH_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1F09F610)
#define OBAMDDOKJIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F09FAB0)
#define OBAMDDOKJIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F09FA70)
#define OBAMDDOKJIH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F09F620)
#define OBAMDDOKJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F09F560)
#define OBAMDDOKJIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F09F820)
#define OBAMDDOKJIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F09F880)

inline static constexpr unsigned int OBAMDDOKJIH_TypeDefinitionIndex = 33055;

	class OBAMDDOKJIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OBAMDDOKJIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBAMDDOKJIH*>**)UnitySDK::FromName("", "OBAMDDOKJIH")->GetStaticField(0xA5C0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBAMDDOKJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBAMDDOKJIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBAMDDOKJIH*>*(*)())((::PBYTE)hIl2Cpp + OBAMDDOKJIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBAMDDOKJIH* Clone()
		{
			return ((::OBAMDDOKJIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBAMDDOKJIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBAMDDOKJIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBAMDDOKJIH*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBAMDDOKJIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
