#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFLOHLLMOJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFLOHLLMOJK_BBAMIPGKPPP_OFFSET UNITYSDK_OFFSET(0x1E703090)
#define JFLOHLLMOJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E703420)
#define JFLOHLLMOJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7036F0)
#define JFLOHLLMOJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E703020)
#define JFLOHLLMOJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E702FF0)
#define JFLOHLLMOJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702FE0)
#define JFLOHLLMOJK_DEIBFLDDPOC_OFFSET UNITYSDK_OFFSET(0x1E7030B0)
#define JFLOHLLMOJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7031E0)
#define JFLOHLLMOJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7030D0)
#define JFLOHLLMOJK_FMMICNKIBPG_OFFSET UNITYSDK_OFFSET(0x1E7030C0)
#define JFLOHLLMOJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7032B0)
#define JFLOHLLMOJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E702F70)
#define JFLOHLLMOJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E703570)
#define JFLOHLLMOJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E703530)
#define JFLOHLLMOJK_NCKJHNKCBKM_OFFSET UNITYSDK_OFFSET(0x1E7030A0)
#define JFLOHLLMOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E702FD0)
#define JFLOHLLMOJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7032E0)
#define JFLOHLLMOJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E703340)

inline static constexpr unsigned int JFLOHLLMOJK_TypeDefinitionIndex = 28313;

	class JFLOHLLMOJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHAMNNJEFNL; // 0x18
		::System::UInt32 HNDDHFKEKHC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JFLOHLLMOJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFLOHLLMOJK*>**)UnitySDK::FromName("", "JFLOHLLMOJK")->GetStaticField(0x5D7A0);
		}

		// static const ::System::Object EBJOALKHAFD; // 0x0
		// static const ::System::Object IHJHFCHBGGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFLOHLLMOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFLOHLLMOJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFLOHLLMOJK*>*(*)())((::PBYTE)hIl2Cpp + JFLOHLLMOJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFLOHLLMOJK* Clone()
		{
			return ((::JFLOHLLMOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BBAMIPGKPPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_BBAMIPGKPPP_OFFSET))(this);
		}

		::System::Void NCKJHNKCBKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_NCKJHNKCBKM_OFFSET))(this, a1);
		}

		::System::UInt32 DEIBFLDDPOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_DEIBFLDDPOC_OFFSET))(this);
		}

		::System::Void FMMICNKIBPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_FMMICNKIBPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFLOHLLMOJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFLOHLLMOJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFLOHLLMOJK*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFLOHLLMOJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
