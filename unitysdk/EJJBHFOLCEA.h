#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJJBHFOLCEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJJBHFOLCEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE502B0)
#define EJJBHFOLCEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE50630)
#define EJJBHFOLCEA_CLMLIACOFOH_OFFSET UNITYSDK_OFFSET(0x1FE4FF40)
#define EJJBHFOLCEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE4FEC0)
#define EJJBHFOLCEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE4FE80)
#define EJJBHFOLCEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE4FE70)
#define EJJBHFOLCEA_EHBGDBGMJNL_OFFSET UNITYSDK_OFFSET(0x1FE4FF70)
#define EJJBHFOLCEA_EODIGAGAOOH_OFFSET UNITYSDK_OFFSET(0x1FE4FF80)
#define EJJBHFOLCEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE50020)
#define EJJBHFOLCEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE4FFA0)
#define EJJBHFOLCEA_GACIDEICILH_OFFSET UNITYSDK_OFFSET(0x1FE4FF60)
#define EJJBHFOLCEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE500F0)
#define EJJBHFOLCEA_HKLCPOFICCG_OFFSET UNITYSDK_OFFSET(0x1FE4FF50)
#define EJJBHFOLCEA_HNALLBPANIK_OFFSET UNITYSDK_OFFSET(0x1FE4FF90)
#define EJJBHFOLCEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE4FE00)
#define EJJBHFOLCEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE50490)
#define EJJBHFOLCEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE50440)
#define EJJBHFOLCEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE4FE60)
#define EJJBHFOLCEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE50120)
#define EJJBHFOLCEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE50180)

inline static constexpr unsigned int EJJBHFOLCEA_TypeDefinitionIndex = 30848;

	class EJJBHFOLCEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHEJOPMGLJF; // 0x18
		::System::UInt32 BLCMLDJEGIL; // 0x1C
		::System::UInt32 NJMBJLHJKDK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EJJBHFOLCEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJJBHFOLCEA*>**)UnitySDK::FromName("", "EJJBHFOLCEA")->GetStaticField(0x40DC0);
		}

		// static const ::System::Object ODNBILGNMAO; // 0x0
		// static const ::System::Object MJEFHLBIAFH; // 0x0
		// static const ::System::Object HCHPPKMMJMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJJBHFOLCEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJJBHFOLCEA*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJJBHFOLCEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJJBHFOLCEA*>*(*)())((::PBYTE)hIl2Cpp + EJJBHFOLCEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJJBHFOLCEA* Clone()
		{
			return ((::EJJBHFOLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 CLMLIACOFOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CLMLIACOFOH_OFFSET))(this);
		}

		::System::Void HKLCPOFICCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_HKLCPOFICCG_OFFSET))(this, a1);
		}

		::System::UInt32 GACIDEICILH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_GACIDEICILH_OFFSET))(this);
		}

		::System::Void EHBGDBGMJNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_EHBGDBGMJNL_OFFSET))(this, a1);
		}

		::System::UInt32 EODIGAGAOOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_EODIGAGAOOH_OFFSET))(this);
		}

		::System::Void HNALLBPANIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_HNALLBPANIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJJBHFOLCEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJJBHFOLCEA*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJJBHFOLCEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJJBHFOLCEA*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJJBHFOLCEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
