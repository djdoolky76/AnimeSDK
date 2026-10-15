#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMAHAKPLAAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMAHAKPLAAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75AD80)
#define JMAHAKPLAAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75AE20)
#define JMAHAKPLAAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75AA70)
#define JMAHAKPLAAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75AA40)
#define JMAHAKPLAAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75AA30)
#define JMAHAKPLAAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75AB80)
#define JMAHAKPLAAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75AAB0)
#define JMAHAKPLAAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75ACE0)
#define JMAHAKPLAAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E75A9F0)
#define JMAHAKPLAAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75ADD0)
#define JMAHAKPLAAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75ADA0)
#define JMAHAKPLAAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75AA20)
#define JMAHAKPLAAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75AD10)
#define JMAHAKPLAAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75AD70)

inline static constexpr unsigned int JMAHAKPLAAD_TypeDefinitionIndex = 31733;

	class JMAHAKPLAAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JMAHAKPLAAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMAHAKPLAAD*>**)UnitySDK::FromName("", "JMAHAKPLAAD")->GetStaticField(0x64EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMAHAKPLAAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMAHAKPLAAD*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMAHAKPLAAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMAHAKPLAAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMAHAKPLAAD*>*(*)())((::PBYTE)hIl2Cpp + JMAHAKPLAAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMAHAKPLAAD* Clone()
		{
			return ((::JMAHAKPLAAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMAHAKPLAAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMAHAKPLAAD*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMAHAKPLAAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMAHAKPLAAD*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMAHAKPLAAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
