#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJFJOGEEGPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJFJOGEEGPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E94E640)
#define LJFJOGEEGPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94E800)
#define LJFJOGEEGPJ_CGOOBGHOHPG_OFFSET UNITYSDK_OFFSET(0x1E94E270)
#define LJFJOGEEGPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E94E220)
#define LJFJOGEEGPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E94E1F0)
#define LJFJOGEEGPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94E1E0)
#define LJFJOGEEGPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E94E370)
#define LJFJOGEEGPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E94E290)
#define LJFJOGEEGPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E94E4F0)
#define LJFJOGEEGPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E94E1A0)
#define LJFJOGEEGPJ_LAFKMAIBJNE_OFFSET UNITYSDK_OFFSET(0x1E94E280)
#define LJFJOGEEGPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E94E6A0)
#define LJFJOGEEGPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E94E670)
#define LJFJOGEEGPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E94E1D0)
#define LJFJOGEEGPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E94E520)
#define LJFJOGEEGPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E94E580)

inline static constexpr unsigned int LJFJOGEEGPJ_TypeDefinitionIndex = 32034;

	class LJFJOGEEGPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean GDAEKJGKMMP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LJFJOGEEGPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LJFJOGEEGPJ*>**)UnitySDK::FromName("", "LJFJOGEEGPJ")->GetStaticField(0x386E0);
		}

		// static const ::System::Object PKAOOKDPBPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJFJOGEEGPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFJOGEEGPJ*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LJFJOGEEGPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LJFJOGEEGPJ*>*(*)())((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJFJOGEEGPJ* Clone()
		{
			return ((::LJFJOGEEGPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CLONE_OFFSET))(this);
		}

		::System::Boolean CGOOBGHOHPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CGOOBGHOHPG_OFFSET))(this);
		}

		::System::Void LAFKMAIBJNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_LAFKMAIBJNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJFJOGEEGPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJFJOGEEGPJ*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJFJOGEEGPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFJOGEEGPJ*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJFJOGEEGPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
