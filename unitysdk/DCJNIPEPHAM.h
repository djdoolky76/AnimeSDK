#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCJNIPEPHAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCJNIPEPHAM_AOKILNFEGCL_OFFSET UNITYSDK_OFFSET(0x1E172A20)
#define DCJNIPEPHAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E172D50)
#define DCJNIPEPHAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E173020)
#define DCJNIPEPHAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1729A0)
#define DCJNIPEPHAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E172970)
#define DCJNIPEPHAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E172960)
#define DCJNIPEPHAM_DMKIKMLFCDB_OFFSET UNITYSDK_OFFSET(0x1E172A10)
#define DCJNIPEPHAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E172B10)
#define DCJNIPEPHAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E172A30)
#define DCJNIPEPHAM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E172A00)
#define DCJNIPEPHAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E172BE0)
#define DCJNIPEPHAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E172920)
#define DCJNIPEPHAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E172EA0)
#define DCJNIPEPHAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E172E60)
#define DCJNIPEPHAM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1729F0)
#define DCJNIPEPHAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E172950)
#define DCJNIPEPHAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E172C10)
#define DCJNIPEPHAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E172C70)

inline static constexpr unsigned int DCJNIPEPHAM_TypeDefinitionIndex = 34832;

	class DCJNIPEPHAM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LKIAHNAIAPC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCJNIPEPHAM")->GetStaticField(0x2C690);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JDFGGPHKILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCJNIPEPHAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJNIPEPHAM*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCJNIPEPHAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCJNIPEPHAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCJNIPEPHAM* Clone()
		{
			return ((::DCJNIPEPHAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 DMKIKMLFCDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_DMKIKMLFCDB_OFFSET))(this);
		}

		::System::Void AOKILNFEGCL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_AOKILNFEGCL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCJNIPEPHAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCJNIPEPHAM*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCJNIPEPHAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCJNIPEPHAM*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCJNIPEPHAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
