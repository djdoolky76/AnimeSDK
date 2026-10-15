#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEEOGJHLALP;
class JFGCABMMKAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEEOGJHLALP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3653D0)
#define FEEOGJHLALP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3656F0)
#define FEEOGJHLALP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E364E60)
#define FEEOGJHLALP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E364DE0)
#define FEEOGJHLALP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E364DD0)
#define FEEOGJHLALP_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E364EF0)
#define FEEOGJHLALP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3650B0)
#define FEEOGJHLALP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E364F30)
#define FEEOGJHLALP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E365230)
#define FEEOGJHLALP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E364D90)
#define FEEOGJHLALP_LAHCKCKIBPI_OFFSET UNITYSDK_OFFSET(0x1E364F20)
#define FEEOGJHLALP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E365560)
#define FEEOGJHLALP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3654A0)
#define FEEOGJHLALP_MGCBACONPKE_OFFSET UNITYSDK_OFFSET(0x1E364F10)
#define FEEOGJHLALP_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E364F00)
#define FEEOGJHLALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E364DC0)
#define FEEOGJHLALP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E365290)
#define FEEOGJHLALP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3652F0)

inline static constexpr unsigned int FEEOGJHLALP_TypeDefinitionIndex = 34279;

	class FEEOGJHLALP : public ::System::Object
	{
	public:
		::JFGCABMMKAB* NJDGLLCDOKK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FEEOGJHLALP")->GetStaticField(0x5D610);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object HLJPJBHKFOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEEOGJHLALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEEOGJHLALP*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEOGJHLALP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FEEOGJHLALP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEEOGJHLALP* Clone()
		{
			return ((::FEEOGJHLALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEEOGJHLALP_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::JFGCABMMKAB* MGCBACONPKE()
		{
			return ((::JFGCABMMKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_MGCBACONPKE_OFFSET))(this);
		}

		::System::Void LAHCKCKIBPI(::JFGCABMMKAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGCABMMKAB*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_LAHCKCKIBPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEEOGJHLALP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEEOGJHLALP*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEEOGJHLALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEEOGJHLALP*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEEOGJHLALP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
