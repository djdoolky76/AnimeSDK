#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPGBALIKPDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPGBALIKPDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DB770)
#define FPGBALIKPDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB990)
#define FPGBALIKPDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DB3C0)
#define FPGBALIKPDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DB390)
#define FPGBALIKPDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB380)
#define FPGBALIKPDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DB4F0)
#define FPGBALIKPDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DB420)
#define FPGBALIKPDE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3DB410)
#define FPGBALIKPDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DB660)
#define FPGBALIKPDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DB340)
#define FPGBALIKPDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DB830)
#define FPGBALIKPDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DB800)
#define FPGBALIKPDE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3DB400)
#define FPGBALIKPDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB370)
#define FPGBALIKPDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DB690)
#define FPGBALIKPDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DB6F0)

inline static constexpr unsigned int FPGBALIKPDE_TypeDefinitionIndex = 34966;

	class FPGBALIKPDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FPGBALIKPDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPGBALIKPDE*>**)UnitySDK::FromName("", "FPGBALIKPDE")->GetStaticField(0x5F570);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPGBALIKPDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPGBALIKPDE*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPGBALIKPDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPGBALIKPDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPGBALIKPDE*>*(*)())((::PBYTE)hIl2Cpp + FPGBALIKPDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPGBALIKPDE* Clone()
		{
			return ((::FPGBALIKPDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPGBALIKPDE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPGBALIKPDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPGBALIKPDE*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPGBALIKPDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPGBALIKPDE*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPGBALIKPDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
