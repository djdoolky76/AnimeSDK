#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEHCMIGCNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCEHCMIGCNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E316D70)
#define FCEHCMIGCNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E317080)
#define FCEHCMIGCNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3168F0)
#define FCEHCMIGCNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3168B0)
#define FCEHCMIGCNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3168A0)
#define FCEHCMIGCNC_ECPPACKHEMO_OFFSET UNITYSDK_OFFSET(0x1E316990)
#define FCEHCMIGCNC_EJFJKEEKDJJ_OFFSET UNITYSDK_OFFSET(0x1E316980)
#define FCEHCMIGCNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E316A90)
#define FCEHCMIGCNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3169A0)
#define FCEHCMIGCNC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E316950)
#define FCEHCMIGCNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E316B70)
#define FCEHCMIGCNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E316860)
#define FCEHCMIGCNC_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E316970)
#define FCEHCMIGCNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E316EE0)
#define FCEHCMIGCNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E316E90)
#define FCEHCMIGCNC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E316940)
#define FCEHCMIGCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E316890)
#define FCEHCMIGCNC_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E316960)
#define FCEHCMIGCNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E316BA0)
#define FCEHCMIGCNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E316C00)

inline static constexpr unsigned int FCEHCMIGCNC_TypeDefinitionIndex = 30418;

	class FCEHCMIGCNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KCIKBKIBOPB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::Boolean CEFANFEAKOO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FCEHCMIGCNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCEHCMIGCNC*>**)UnitySDK::FromName("", "FCEHCMIGCNC")->GetStaticField(0x50680);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object NAGEGHAOEII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCEHCMIGCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEHCMIGCNC*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEHCMIGCNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCEHCMIGCNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCEHCMIGCNC*>*(*)())((::PBYTE)hIl2Cpp + FCEHCMIGCNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCEHCMIGCNC* Clone()
		{
			return ((::FCEHCMIGCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean EJFJKEEKDJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_EJFJKEEKDJJ_OFFSET))(this);
		}

		::System::Void ECPPACKHEMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_ECPPACKHEMO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCEHCMIGCNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCEHCMIGCNC*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCEHCMIGCNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEHCMIGCNC*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCEHCMIGCNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
