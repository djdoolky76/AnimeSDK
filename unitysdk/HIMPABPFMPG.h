#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMPABPFMPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIMPABPFMPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59D520)
#define HIMPABPFMPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59D5C0)
#define HIMPABPFMPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59D210)
#define HIMPABPFMPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59D1E0)
#define HIMPABPFMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D1D0)
#define HIMPABPFMPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59D320)
#define HIMPABPFMPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59D250)
#define HIMPABPFMPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59D480)
#define HIMPABPFMPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59D190)
#define HIMPABPFMPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59D570)
#define HIMPABPFMPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59D540)
#define HIMPABPFMPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59D1C0)
#define HIMPABPFMPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59D4B0)
#define HIMPABPFMPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59D510)

inline static constexpr unsigned int HIMPABPFMPG_TypeDefinitionIndex = 25954;

	class HIMPABPFMPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIMPABPFMPG")->GetStaticField(0x3E800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIMPABPFMPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMPABPFMPG*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMPABPFMPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIMPABPFMPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIMPABPFMPG* Clone()
		{
			return ((::HIMPABPFMPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIMPABPFMPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIMPABPFMPG*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIMPABPFMPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIMPABPFMPG*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIMPABPFMPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
