#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHFFKMFMEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKHFFKMFMEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E486060)
#define GKHFFKMFMEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4862C0)
#define GKHFFKMFMEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E485C70)
#define GKHFFKMFMEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E485C30)
#define GKHFFKMFMEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485C20)
#define GKHFFKMFMEN_DJPFPJMHKHE_OFFSET UNITYSDK_OFFSET(0x1E485CE0)
#define GKHFFKMFMEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E485DE0)
#define GKHFFKMFMEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E485D00)
#define GKHFFKMFMEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E485EC0)
#define GKHFFKMFMEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E485BE0)
#define GKHFFKMFMEN_KCMAPJCFCJP_OFFSET UNITYSDK_OFFSET(0x1E485CF0)
#define GKHFFKMFMEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E486140)
#define GKHFFKMFMEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E486100)
#define GKHFFKMFMEN_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1E485CC0)
#define GKHFFKMFMEN_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1E485CD0)
#define GKHFFKMFMEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E485C10)
#define GKHFFKMFMEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E485EF0)
#define GKHFFKMFMEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E485F50)

inline static constexpr unsigned int GKHFFKMFMEN_TypeDefinitionIndex = 33636;

	class GKHFFKMFMEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LOEPIAFBCIJ; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DAFLDHJNIIH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GKHFFKMFMEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKHFFKMFMEN*>**)UnitySDK::FromName("", "GKHFFKMFMEN")->GetStaticField(0x1B5D0);
		}

		// static const ::System::Object OPKLCINAFJC; // 0x0
		// static const ::System::Object GPIEHBNGOIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKHFFKMFMEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHFFKMFMEN*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHFFKMFMEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKHFFKMFMEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKHFFKMFMEN*>*(*)())((::PBYTE)hIl2Cpp + GKHFFKMFMEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKHFFKMFMEN* Clone()
		{
			return ((::GKHFFKMFMEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_CLONE_OFFSET))(this);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::UInt32 DJPFPJMHKHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_DJPFPJMHKHE_OFFSET))(this);
		}

		::System::Void KCMAPJCFCJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_KCMAPJCFCJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKHFFKMFMEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKHFFKMFMEN*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKHFFKMFMEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHFFKMFMEN*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKHFFKMFMEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
