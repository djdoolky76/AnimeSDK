#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECMNFOEDOJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECMNFOEDOJC_ABLLACJACMC_OFFSET UNITYSDK_OFFSET(0x1E2558A0)
#define ECMNFOEDOJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E255C00)
#define ECMNFOEDOJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E255E20)
#define ECMNFOEDOJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E255850)
#define ECMNFOEDOJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E255820)
#define ECMNFOEDOJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E255810)
#define ECMNFOEDOJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E255980)
#define ECMNFOEDOJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2558B0)
#define ECMNFOEDOJC_FEMNPLHAHKC_OFFSET UNITYSDK_OFFSET(0x1E255890)
#define ECMNFOEDOJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E255AF0)
#define ECMNFOEDOJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2557D0)
#define ECMNFOEDOJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E255CC0)
#define ECMNFOEDOJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E255C90)
#define ECMNFOEDOJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E255800)
#define ECMNFOEDOJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E255B20)
#define ECMNFOEDOJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E255B80)

inline static constexpr unsigned int ECMNFOEDOJC_TypeDefinitionIndex = 33802;

	class ECMNFOEDOJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MFHBBHFIIBO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ECMNFOEDOJC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECMNFOEDOJC*>**)UnitySDK::FromName("", "ECMNFOEDOJC")->GetStaticField(0x3EC30);
		}

		// static const ::System::Object ABELECPLDAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECMNFOEDOJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECMNFOEDOJC*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECMNFOEDOJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECMNFOEDOJC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECMNFOEDOJC*>*(*)())((::PBYTE)hIl2Cpp + ECMNFOEDOJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECMNFOEDOJC* Clone()
		{
			return ((::ECMNFOEDOJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEMNPLHAHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_FEMNPLHAHKC_OFFSET))(this);
		}

		::System::Void ABLLACJACMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_ABLLACJACMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECMNFOEDOJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECMNFOEDOJC*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECMNFOEDOJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECMNFOEDOJC*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECMNFOEDOJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
