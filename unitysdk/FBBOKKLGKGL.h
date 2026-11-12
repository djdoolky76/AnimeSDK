#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBOKKLGKGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBBOKKLGKGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F616020)
#define FBBOKKLGKGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F616330)
#define FBBOKKLGKGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F615BA0)
#define FBBOKKLGKGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F615B60)
#define FBBOKKLGKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F615B50)
#define FBBOKKLGKGL_DOPKNBGOOOG_OFFSET UNITYSDK_OFFSET(0x1F615C00)
#define FBBOKKLGKGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F615D40)
#define FBBOKKLGKGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F615C50)
#define FBBOKKLGKGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F615E20)
#define FBBOKKLGKGL_HAPOHKLMNNK_OFFSET UNITYSDK_OFFSET(0x1F615C30)
#define FBBOKKLGKGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F615B10)
#define FBBOKKLGKGL_JPNMINEKONL_OFFSET UNITYSDK_OFFSET(0x1F615BF0)
#define FBBOKKLGKGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F616190)
#define FBBOKKLGKGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F616140)
#define FBBOKKLGKGL_NKNCJAJIKHC_OFFSET UNITYSDK_OFFSET(0x1F615C40)
#define FBBOKKLGKGL_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1F615C10)
#define FBBOKKLGKGL_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1F615C20)
#define FBBOKKLGKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F615B40)
#define FBBOKKLGKGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F615E50)
#define FBBOKKLGKGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F615EB0)

inline static constexpr unsigned int FBBOKKLGKGL_TypeDefinitionIndex = 34547;

	class FBBOKKLGKGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIAHENEOGNG; // 0x18
		::System::UInt32 EJJJBLPEDEF; // 0x1C
		::System::Boolean LOEPIAFBCIJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FBBOKKLGKGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBBOKKLGKGL*>**)UnitySDK::FromName("", "FBBOKKLGKGL")->GetStaticField(0x56A00);
		}

		// static const ::System::Object EOOFDIFBCFL; // 0x0
		// static const ::System::Object OPKLCINAFJC; // 0x0
		// static const ::System::Object FJMMEKLGGHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBBOKKLGKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBOKKLGKGL*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBOKKLGKGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBBOKKLGKGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBBOKKLGKGL*>*(*)())((::PBYTE)hIl2Cpp + FBBOKKLGKGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBBOKKLGKGL* Clone()
		{
			return ((::FBBOKKLGKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JPNMINEKONL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_JPNMINEKONL_OFFSET))(this);
		}

		::System::Void DOPKNBGOOOG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_DOPKNBGOOOG_OFFSET))(this, a1);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::UInt32 HAPOHKLMNNK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_HAPOHKLMNNK_OFFSET))(this);
		}

		::System::Void NKNCJAJIKHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_NKNCJAJIKHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBBOKKLGKGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBBOKKLGKGL*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBBOKKLGKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBOKKLGKGL*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBBOKKLGKGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
