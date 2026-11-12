#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDAJAGFIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJHDAJAGFIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F599E40)
#define EJHDAJAGFIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F59A0A0)
#define EJHDAJAGFIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5999F0)
#define EJHDAJAGFIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5999B0)
#define EJHDAJAGFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5999A0)
#define EJHDAJAGFIJ_EDONLEAOOIJ_OFFSET UNITYSDK_OFFSET(0x1F599A70)
#define EJHDAJAGFIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F599BC0)
#define EJHDAJAGFIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F599AB0)
#define EJHDAJAGFIJ_FDNANEGDBLH_OFFSET UNITYSDK_OFFSET(0x1F599A80)
#define EJHDAJAGFIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F599CA0)
#define EJHDAJAGFIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F599930)
#define EJHDAJAGFIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F599F20)
#define EJHDAJAGFIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F599EE0)
#define EJHDAJAGFIJ_OAGFOAEFDOA_OFFSET UNITYSDK_OFFSET(0x1F599A90)
#define EJHDAJAGFIJ_OIOMLNOPAON_OFFSET UNITYSDK_OFFSET(0x1F599AA0)
#define EJHDAJAGFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F599990)
#define EJHDAJAGFIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F599CD0)
#define EJHDAJAGFIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F599D30)

inline static constexpr unsigned int EJHDAJAGFIJ_TypeDefinitionIndex = 34436;

	class EJHDAJAGFIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LOEPIAFBCIJ; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 LLJBFIOJHCG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EJHDAJAGFIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJHDAJAGFIJ*>**)UnitySDK::FromName("", "EJHDAJAGFIJ")->GetStaticField(0x45110);
		}

		// static const ::System::Object IICCJCDPLHO; // 0x0
		// static const ::System::Object OPKLCINAFJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJHDAJAGFIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJHDAJAGFIJ*>*(*)())((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJHDAJAGFIJ* Clone()
		{
			return ((::EJHDAJAGFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EDONLEAOOIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EDONLEAOOIJ_OFFSET))(this);
		}

		::System::Void FDNANEGDBLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_FDNANEGDBLH_OFFSET))(this, a1);
		}

		::System::Boolean OAGFOAEFDOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_OAGFOAEFDOA_OFFSET))(this);
		}

		::System::Void OIOMLNOPAON(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_OIOMLNOPAON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJHDAJAGFIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJHDAJAGFIJ*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
