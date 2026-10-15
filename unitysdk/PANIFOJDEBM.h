#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PANIFOJDEBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PANIFOJDEBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC47D0)
#define PANIFOJDEBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4870)
#define PANIFOJDEBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC44C0)
#define PANIFOJDEBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC4490)
#define PANIFOJDEBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4480)
#define PANIFOJDEBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC45D0)
#define PANIFOJDEBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC4500)
#define PANIFOJDEBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC4730)
#define PANIFOJDEBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC4440)
#define PANIFOJDEBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC4820)
#define PANIFOJDEBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC47F0)
#define PANIFOJDEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4470)
#define PANIFOJDEBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC4760)
#define PANIFOJDEBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC47C0)

inline static constexpr unsigned int PANIFOJDEBM_TypeDefinitionIndex = 32625;

	class PANIFOJDEBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PANIFOJDEBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PANIFOJDEBM*>**)UnitySDK::FromName("", "PANIFOJDEBM")->GetStaticField(0x2C0D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PANIFOJDEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANIFOJDEBM*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PANIFOJDEBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PANIFOJDEBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PANIFOJDEBM*>*(*)())((::PBYTE)hIl2Cpp + PANIFOJDEBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PANIFOJDEBM* Clone()
		{
			return ((::PANIFOJDEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PANIFOJDEBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PANIFOJDEBM*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PANIFOJDEBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PANIFOJDEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANIFOJDEBM*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PANIFOJDEBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
