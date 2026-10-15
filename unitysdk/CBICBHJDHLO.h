#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBICBHJDHLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBICBHJDHLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06A0F0)
#define CBICBHJDHLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06A310)
#define CBICBHJDHLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E069D40)
#define CBICBHJDHLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E069D10)
#define CBICBHJDHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E069D00)
#define CBICBHJDHLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E069E70)
#define CBICBHJDHLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E069DA0)
#define CBICBHJDHLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E069D90)
#define CBICBHJDHLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E069FE0)
#define CBICBHJDHLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E069CC0)
#define CBICBHJDHLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06A1B0)
#define CBICBHJDHLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06A180)
#define CBICBHJDHLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E069D80)
#define CBICBHJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E069CF0)
#define CBICBHJDHLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06A010)
#define CBICBHJDHLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06A070)

inline static constexpr unsigned int CBICBHJDHLO_TypeDefinitionIndex = 29657;

	class CBICBHJDHLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CBICBHJDHLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBICBHJDHLO*>**)UnitySDK::FromName("", "CBICBHJDHLO")->GetStaticField(0xC740);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBICBHJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBICBHJDHLO*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBICBHJDHLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBICBHJDHLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBICBHJDHLO*>*(*)())((::PBYTE)hIl2Cpp + CBICBHJDHLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBICBHJDHLO* Clone()
		{
			return ((::CBICBHJDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBICBHJDHLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBICBHJDHLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBICBHJDHLO*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBICBHJDHLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBICBHJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBICBHJDHLO*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBICBHJDHLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
