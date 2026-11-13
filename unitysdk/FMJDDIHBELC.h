#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMJDDIHBELC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMJDDIHBELC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202D04B0)
#define FMJDDIHBELC_CCTOR_OFFSET UNITYSDK_OFFSET(0x202D0780)
#define FMJDDIHBELC_CLONE_OFFSET UNITYSDK_OFFSET(0x202D00B0)
#define FMJDDIHBELC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202D0080)
#define FMJDDIHBELC_CTOR_OFFSET UNITYSDK_OFFSET(0x202D0070)
#define FMJDDIHBELC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202D0270)
#define FMJDDIHBELC_EQUALS_OFFSET UNITYSDK_OFFSET(0x202D0160)
#define FMJDDIHBELC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202D0340)
#define FMJDDIHBELC_GPBLPBHCNJF_OFFSET UNITYSDK_OFFSET(0x202D0130)
#define FMJDDIHBELC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202D0000)
#define FMJDDIHBELC_LLEMJAEEPNH_OFFSET UNITYSDK_OFFSET(0x202D0150)
#define FMJDDIHBELC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202D0600)
#define FMJDDIHBELC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202D05C0)
#define FMJDDIHBELC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202D0060)
#define FMJDDIHBELC_PCAHJFGNEKA_OFFSET UNITYSDK_OFFSET(0x202D0120)
#define FMJDDIHBELC_PMODIHHCGEA_OFFSET UNITYSDK_OFFSET(0x202D0140)
#define FMJDDIHBELC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202D0370)
#define FMJDDIHBELC_WRITETO_OFFSET UNITYSDK_OFFSET(0x202D03D0)

inline static constexpr unsigned int FMJDDIHBELC_TypeDefinitionIndex = 30076;

	class FMJDDIHBELC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CBHKDDOFPMO; // 0x18
		::System::UInt32 IEGGKELPNMJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FMJDDIHBELC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMJDDIHBELC*>**)UnitySDK::FromName("", "FMJDDIHBELC")->GetStaticField(0x4E5A0);
		}

		// static const ::System::Object CIBDKLLNDMJ; // 0x0
		// static const ::System::Object DEJLFDDHBFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMJDDIHBELC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMJDDIHBELC*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJDDIHBELC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMJDDIHBELC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMJDDIHBELC*>*(*)())((::PBYTE)hIl2Cpp + FMJDDIHBELC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMJDDIHBELC* Clone()
		{
			return ((::FMJDDIHBELC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCAHJFGNEKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_PCAHJFGNEKA_OFFSET))(this);
		}

		::System::Void GPBLPBHCNJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMJDDIHBELC_GPBLPBHCNJF_OFFSET))(this, a1);
		}

		::System::UInt32 PMODIHHCGEA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_PMODIHHCGEA_OFFSET))(this);
		}

		::System::Void LLEMJAEEPNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMJDDIHBELC_LLEMJAEEPNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMJDDIHBELC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMJDDIHBELC*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJDDIHBELC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMJDDIHBELC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMJDDIHBELC*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMJDDIHBELC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
