#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIKLACNOEJ;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDIKLACNOEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41E900)
#define GDIKLACNOEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41EB70)
#define GDIKLACNOEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41E260)
#define GDIKLACNOEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41E1E0)
#define GDIKLACNOEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41E1D0)
#define GDIKLACNOEJ_EJAPAHJLPLE_OFFSET UNITYSDK_OFFSET(0x1E41E320)
#define GDIKLACNOEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41E4E0)
#define GDIKLACNOEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41E340)
#define GDIKLACNOEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41E7B0)
#define GDIKLACNOEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41E160)
#define GDIKLACNOEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41E9F0)
#define GDIKLACNOEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41E960)
#define GDIKLACNOEJ_MKNLMEJDKPC_OFFSET UNITYSDK_OFFSET(0x1E41E330)
#define GDIKLACNOEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41E1C0)
#define GDIKLACNOEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41E810)
#define GDIKLACNOEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41E870)

inline static constexpr unsigned int GDIKLACNOEJ_TypeDefinitionIndex = 33089;

	class GDIKLACNOEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OKCCLEEPELM* HMDHAMHMGNJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GDIKLACNOEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDIKLACNOEJ*>**)UnitySDK::FromName("", "GDIKLACNOEJ")->GetStaticField(0x10020);
		}

		// static const ::System::Object HLGGAHDLNEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDIKLACNOEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDIKLACNOEJ*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIKLACNOEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDIKLACNOEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDIKLACNOEJ*>*(*)())((::PBYTE)hIl2Cpp + GDIKLACNOEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDIKLACNOEJ* Clone()
		{
			return ((::GDIKLACNOEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_CLONE_OFFSET))(this);
		}

		::OKCCLEEPELM* EJAPAHJLPLE()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_EJAPAHJLPLE_OFFSET))(this);
		}

		::System::Void MKNLMEJDKPC(::OKCCLEEPELM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKCCLEEPELM*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_MKNLMEJDKPC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDIKLACNOEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDIKLACNOEJ*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDIKLACNOEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDIKLACNOEJ*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDIKLACNOEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
