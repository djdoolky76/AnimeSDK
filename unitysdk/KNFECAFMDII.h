#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNFECAFMDII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNFECAFMDII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E875570)
#define KNFECAFMDII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875610)
#define KNFECAFMDII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E875260)
#define KNFECAFMDII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E875230)
#define KNFECAFMDII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E875220)
#define KNFECAFMDII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E875370)
#define KNFECAFMDII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8752A0)
#define KNFECAFMDII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8754D0)
#define KNFECAFMDII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8751E0)
#define KNFECAFMDII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8755C0)
#define KNFECAFMDII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E875590)
#define KNFECAFMDII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E875210)
#define KNFECAFMDII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E875500)
#define KNFECAFMDII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E875560)

inline static constexpr unsigned int KNFECAFMDII_TypeDefinitionIndex = 27524;

	class KNFECAFMDII : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KNFECAFMDII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNFECAFMDII*>**)UnitySDK::FromName("", "KNFECAFMDII")->GetStaticField(0x1FE00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNFECAFMDII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNFECAFMDII*))((::PBYTE)hIl2Cpp + KNFECAFMDII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNFECAFMDII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNFECAFMDII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNFECAFMDII*>*(*)())((::PBYTE)hIl2Cpp + KNFECAFMDII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNFECAFMDII* Clone()
		{
			return ((::KNFECAFMDII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNFECAFMDII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNFECAFMDII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNFECAFMDII*))((::PBYTE)hIl2Cpp + KNFECAFMDII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNFECAFMDII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNFECAFMDII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNFECAFMDII*))((::PBYTE)hIl2Cpp + KNFECAFMDII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNFECAFMDII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
