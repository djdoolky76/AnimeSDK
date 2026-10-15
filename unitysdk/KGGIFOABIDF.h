#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGGIFOABIDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGGIFOABIDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E809460)
#define KGGIFOABIDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E809500)
#define KGGIFOABIDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E809150)
#define KGGIFOABIDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E809120)
#define KGGIFOABIDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E809110)
#define KGGIFOABIDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E809260)
#define KGGIFOABIDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E809190)
#define KGGIFOABIDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8093C0)
#define KGGIFOABIDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8090D0)
#define KGGIFOABIDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8094B0)
#define KGGIFOABIDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E809480)
#define KGGIFOABIDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E809100)
#define KGGIFOABIDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8093F0)
#define KGGIFOABIDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E809450)

inline static constexpr unsigned int KGGIFOABIDF_TypeDefinitionIndex = 33706;

	class KGGIFOABIDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KGGIFOABIDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGGIFOABIDF*>**)UnitySDK::FromName("", "KGGIFOABIDF")->GetStaticField(0x14E80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGGIFOABIDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGGIFOABIDF*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGGIFOABIDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGGIFOABIDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGGIFOABIDF*>*(*)())((::PBYTE)hIl2Cpp + KGGIFOABIDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGGIFOABIDF* Clone()
		{
			return ((::KGGIFOABIDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGGIFOABIDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGGIFOABIDF*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGIFOABIDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGGIFOABIDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGGIFOABIDF*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGGIFOABIDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
