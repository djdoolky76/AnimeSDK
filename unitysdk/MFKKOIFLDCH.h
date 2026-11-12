#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKKOIFLDCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFKKOIFLDCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD65CC0)
#define MFKKOIFLDCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD65EE0)
#define MFKKOIFLDCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD658B0)
#define MFKKOIFLDCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD65880)
#define MFKKOIFLDCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD65870)
#define MFKKOIFLDCH_DJBIKNOKPMF_OFFSET UNITYSDK_OFFSET(0x1FD65920)
#define MFKKOIFLDCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD65A40)
#define MFKKOIFLDCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD65940)
#define MFKKOIFLDCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD65BB0)
#define MFKKOIFLDCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD65800)
#define MFKKOIFLDCH_KLDBBOJKEHN_OFFSET UNITYSDK_OFFSET(0x1FD65930)
#define MFKKOIFLDCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD65D80)
#define MFKKOIFLDCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD65D50)
#define MFKKOIFLDCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD65860)
#define MFKKOIFLDCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD65BE0)
#define MFKKOIFLDCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD65C40)

inline static constexpr unsigned int MFKKOIFLDCH_TypeDefinitionIndex = 30386;

	class MFKKOIFLDCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HDEJGCKNMFP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MFKKOIFLDCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFKKOIFLDCH*>**)UnitySDK::FromName("", "MFKKOIFLDCH")->GetStaticField(0x533E0);
		}

		// static const ::System::Object GMNPBKLKGHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFKKOIFLDCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKKOIFLDCH*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKKOIFLDCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MFKKOIFLDCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFKKOIFLDCH*>*(*)())((::PBYTE)hIl2Cpp + MFKKOIFLDCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFKKOIFLDCH* Clone()
		{
			return ((::MFKKOIFLDCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJBIKNOKPMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_DJBIKNOKPMF_OFFSET))(this);
		}

		::System::Void KLDBBOJKEHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_KLDBBOJKEHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFKKOIFLDCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFKKOIFLDCH*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFKKOIFLDCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKKOIFLDCH*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFKKOIFLDCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
