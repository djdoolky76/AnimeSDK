#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCMJFJHILIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCMJFJHILIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E90B830)
#define BCMJFJHILIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90B8D0)
#define BCMJFJHILIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E90B520)
#define BCMJFJHILIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E90B4F0)
#define BCMJFJHILIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90B4E0)
#define BCMJFJHILIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E90B630)
#define BCMJFJHILIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E90B560)
#define BCMJFJHILIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E90B790)
#define BCMJFJHILIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E90B4A0)
#define BCMJFJHILIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E90B880)
#define BCMJFJHILIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E90B850)
#define BCMJFJHILIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E90B4D0)
#define BCMJFJHILIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E90B7C0)
#define BCMJFJHILIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E90B820)

inline static constexpr unsigned int BCMJFJHILIB_TypeDefinitionIndex = 26560;

	class BCMJFJHILIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCMJFJHILIB")->GetStaticField(0x3C140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCMJFJHILIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMJFJHILIB*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCMJFJHILIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCMJFJHILIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCMJFJHILIB* Clone()
		{
			return ((::BCMJFJHILIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCMJFJHILIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCMJFJHILIB*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMJFJHILIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCMJFJHILIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMJFJHILIB*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCMJFJHILIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
