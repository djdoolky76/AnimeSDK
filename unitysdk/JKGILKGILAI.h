#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKGILKGILAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKGILKGILAI_BKHOGNAFCNC_OFFSET UNITYSDK_OFFSET(0x1E73AFF0)
#define JKGILKGILAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73B340)
#define JKGILKGILAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73B610)
#define JKGILKGILAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73AF90)
#define JKGILKGILAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73AF60)
#define JKGILKGILAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73AF50)
#define JKGILKGILAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73B100)
#define JKGILKGILAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73B020)
#define JKGILKGILAI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E73B010)
#define JKGILKGILAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73B1D0)
#define JKGILKGILAI_JBENGILKBJM_OFFSET UNITYSDK_OFFSET(0x1E73AFE0)
#define JKGILKGILAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73AF10)
#define JKGILKGILAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73B490)
#define JKGILKGILAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73B450)
#define JKGILKGILAI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E73B000)
#define JKGILKGILAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73AF40)
#define JKGILKGILAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73B200)
#define JKGILKGILAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73B260)

inline static constexpr unsigned int JKGILKGILAI_TypeDefinitionIndex = 29726;

	class JKGILKGILAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GIBDGHCDOAJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JKGILKGILAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKGILKGILAI*>**)UnitySDK::FromName("", "JKGILKGILAI")->GetStaticField(0x63100);
		}

		// static const ::System::Object CKMPBFLGCDJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKGILKGILAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKGILKGILAI*))((::PBYTE)hIl2Cpp + JKGILKGILAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKGILKGILAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKGILKGILAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKGILKGILAI*>*(*)())((::PBYTE)hIl2Cpp + JKGILKGILAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKGILKGILAI* Clone()
		{
			return ((::JKGILKGILAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBENGILKBJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_JBENGILKBJM_OFFSET))(this);
		}

		::System::Void BKHOGNAFCNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKGILKGILAI_BKHOGNAFCNC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKGILKGILAI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKGILKGILAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKGILKGILAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKGILKGILAI*))((::PBYTE)hIl2Cpp + JKGILKGILAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKGILKGILAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGILKGILAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKGILKGILAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKGILKGILAI*))((::PBYTE)hIl2Cpp + JKGILKGILAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKGILKGILAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
