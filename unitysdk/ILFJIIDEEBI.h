#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILFJIIDEEBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILFJIIDEEBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67ED20)
#define ILFJIIDEEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67EDC0)
#define ILFJIIDEEBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67EA10)
#define ILFJIIDEEBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67E9E0)
#define ILFJIIDEEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67E9D0)
#define ILFJIIDEEBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67EB20)
#define ILFJIIDEEBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67EA50)
#define ILFJIIDEEBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67EC80)
#define ILFJIIDEEBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67E990)
#define ILFJIIDEEBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67ED70)
#define ILFJIIDEEBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67ED40)
#define ILFJIIDEEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67E9C0)
#define ILFJIIDEEBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67ECB0)
#define ILFJIIDEEBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67ED10)

inline static constexpr unsigned int ILFJIIDEEBI_TypeDefinitionIndex = 26589;

	class ILFJIIDEEBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>**)UnitySDK::FromName("", "ILFJIIDEEBI")->GetStaticField(0x518C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILFJIIDEEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILFJIIDEEBI*>*(*)())((::PBYTE)hIl2Cpp + ILFJIIDEEBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILFJIIDEEBI* Clone()
		{
			return ((::ILFJIIDEEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILFJIIDEEBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILFJIIDEEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILFJIIDEEBI*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILFJIIDEEBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
