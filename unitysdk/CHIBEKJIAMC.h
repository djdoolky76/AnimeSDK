#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHIBEKJIAMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHIBEKJIAMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E099980)
#define CHIBEKJIAMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E099BA0)
#define CHIBEKJIAMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0995D0)
#define CHIBEKJIAMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0995A0)
#define CHIBEKJIAMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E099590)
#define CHIBEKJIAMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E099700)
#define CHIBEKJIAMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E099630)
#define CHIBEKJIAMC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E099620)
#define CHIBEKJIAMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E099870)
#define CHIBEKJIAMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E099550)
#define CHIBEKJIAMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E099A40)
#define CHIBEKJIAMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E099A10)
#define CHIBEKJIAMC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E099610)
#define CHIBEKJIAMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E099580)
#define CHIBEKJIAMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0998A0)
#define CHIBEKJIAMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E099900)

inline static constexpr unsigned int CHIBEKJIAMC_TypeDefinitionIndex = 31368;

	class CHIBEKJIAMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CHIBEKJIAMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CHIBEKJIAMC*>**)UnitySDK::FromName("", "CHIBEKJIAMC")->GetStaticField(0x15890);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHIBEKJIAMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHIBEKJIAMC*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHIBEKJIAMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CHIBEKJIAMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CHIBEKJIAMC*>*(*)())((::PBYTE)hIl2Cpp + CHIBEKJIAMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHIBEKJIAMC* Clone()
		{
			return ((::CHIBEKJIAMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHIBEKJIAMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHIBEKJIAMC*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHIBEKJIAMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHIBEKJIAMC*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHIBEKJIAMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
