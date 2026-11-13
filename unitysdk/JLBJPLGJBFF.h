#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBJPLGJBFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLBJPLGJBFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE6F400)
#define JLBJPLGJBFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE6F4A0)
#define JLBJPLGJBFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE6F0F0)
#define JLBJPLGJBFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE6F0C0)
#define JLBJPLGJBFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE6F0B0)
#define JLBJPLGJBFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE6F200)
#define JLBJPLGJBFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE6F130)
#define JLBJPLGJBFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE6F360)
#define JLBJPLGJBFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE6F070)
#define JLBJPLGJBFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE6F450)
#define JLBJPLGJBFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE6F420)
#define JLBJPLGJBFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE6F0A0)
#define JLBJPLGJBFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE6F390)
#define JLBJPLGJBFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE6F3F0)

inline static constexpr unsigned int JLBJPLGJBFF_TypeDefinitionIndex = 28337;

	class JLBJPLGJBFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JLBJPLGJBFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLBJPLGJBFF*>**)UnitySDK::FromName("", "JLBJPLGJBFF")->GetStaticField(0x626A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLBJPLGJBFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBJPLGJBFF*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBJPLGJBFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLBJPLGJBFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLBJPLGJBFF*>*(*)())((::PBYTE)hIl2Cpp + JLBJPLGJBFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLBJPLGJBFF* Clone()
		{
			return ((::JLBJPLGJBFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLBJPLGJBFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLBJPLGJBFF*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLBJPLGJBFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLBJPLGJBFF*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLBJPLGJBFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
