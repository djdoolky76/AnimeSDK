#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEPAMDEPFLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEPAMDEPFLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE06AE0)
#define OEPAMDEPFLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE06D00)
#define OEPAMDEPFLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE06730)
#define OEPAMDEPFLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE06700)
#define OEPAMDEPFLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE066F0)
#define OEPAMDEPFLJ_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1DE06780)
#define OEPAMDEPFLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE06860)
#define OEPAMDEPFLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE06790)
#define OEPAMDEPFLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE069D0)
#define OEPAMDEPFLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE066B0)
#define OEPAMDEPFLJ_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1DE06770)
#define OEPAMDEPFLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE06BA0)
#define OEPAMDEPFLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE06B70)
#define OEPAMDEPFLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE066E0)
#define OEPAMDEPFLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE06A00)
#define OEPAMDEPFLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE06A60)

inline static constexpr unsigned int OEPAMDEPFLJ_TypeDefinitionIndex = 33262;

	class OEPAMDEPFLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PHDGEOFBHGM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEPAMDEPFLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEPAMDEPFLJ*>**)UnitySDK::FromName("", "OEPAMDEPFLJ")->GetStaticField(0x14D20);
		}

		// static const ::System::Object EGEDNCDAKPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEPAMDEPFLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPAMDEPFLJ*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEPAMDEPFLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEPAMDEPFLJ*>*(*)())((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEPAMDEPFLJ* Clone()
		{
			return ((::OEPAMDEPFLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEPAMDEPFLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEPAMDEPFLJ*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEPAMDEPFLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPAMDEPFLJ*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
