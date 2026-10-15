#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEBIIBBMNKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HEBIIBBMNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5298D0)
#define HEBIIBBMNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E529BA0)
#define HEBIIBBMNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E529520)
#define HEBIIBBMNKG_CMKOJMCOAOA_OFFSET UNITYSDK_OFFSET(0x1E529590)
#define HEBIIBBMNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5294F0)
#define HEBIIBBMNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5294E0)
#define HEBIIBBMNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E529690)
#define HEBIIBBMNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5295B0)
#define HEBIIBBMNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E529760)
#define HEBIIBBMNKG_HLIODMGDCLP_OFFSET UNITYSDK_OFFSET(0x1E529580)
#define HEBIIBBMNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5294A0)
#define HEBIIBBMNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E529A20)
#define HEBIIBBMNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5299E0)
#define HEBIIBBMNKG_NNGGEBKCOHE_OFFSET UNITYSDK_OFFSET(0x1E5295A0)
#define HEBIIBBMNKG_NNLHOOJGJKH_OFFSET UNITYSDK_OFFSET(0x1E529570)
#define HEBIIBBMNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5294D0)
#define HEBIIBBMNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E529790)
#define HEBIIBBMNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5297F0)

inline static constexpr unsigned int HEBIIBBMNKG_TypeDefinitionIndex = 26420;

	class HEBIIBBMNKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ALELBFOECKB; // 0x18
		::System::UInt32 BHKOGOBFOLA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HEBIIBBMNKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HEBIIBBMNKG*>**)UnitySDK::FromName("", "HEBIIBBMNKG")->GetStaticField(0x2CBB0);
		}

		// static const ::System::Object HLOGIOLMMBK; // 0x0
		// static const ::System::Object KHLPONOEOPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HEBIIBBMNKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HEBIIBBMNKG*>*(*)())((::PBYTE)hIl2Cpp + HEBIIBBMNKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEBIIBBMNKG* Clone()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNLHOOJGJKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_NNLHOOJGJKH_OFFSET))(this);
		}

		::System::Void HLIODMGDCLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_HLIODMGDCLP_OFFSET))(this, a1);
		}

		::System::UInt32 CMKOJMCOAOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CMKOJMCOAOA_OFFSET))(this);
		}

		::System::Void NNGGEBKCOHE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_NNGGEBKCOHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEBIIBBMNKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEBIIBBMNKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
