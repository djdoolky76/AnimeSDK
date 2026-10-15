#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGLKEAPLGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELGLKEAPLGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A3560)
#define ELGLKEAPLGM_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1E2A31D0)
#define ELGLKEAPLGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3780)
#define ELGLKEAPLGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A3150)
#define ELGLKEAPLGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A3120)
#define ELGLKEAPLGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3110)
#define ELGLKEAPLGM_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1E2A31C0)
#define ELGLKEAPLGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A32E0)
#define ELGLKEAPLGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A31E0)
#define ELGLKEAPLGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A3450)
#define ELGLKEAPLGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A30A0)
#define ELGLKEAPLGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A3620)
#define ELGLKEAPLGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A35F0)
#define ELGLKEAPLGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A3100)
#define ELGLKEAPLGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A3480)
#define ELGLKEAPLGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A34E0)

inline static constexpr unsigned int ELGLKEAPLGM_TypeDefinitionIndex = 29176;

	class ELGLKEAPLGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ICDPONHFAJP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELGLKEAPLGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELGLKEAPLGM*>**)UnitySDK::FromName("", "ELGLKEAPLGM")->GetStaticField(0x51580);
		}

		// static const ::System::Object BEINPDMEFFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELGLKEAPLGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELGLKEAPLGM*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELGLKEAPLGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELGLKEAPLGM*>*(*)())((::PBYTE)hIl2Cpp + ELGLKEAPLGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELGLKEAPLGM* Clone()
		{
			return ((::ELGLKEAPLGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELGLKEAPLGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELGLKEAPLGM*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELGLKEAPLGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELGLKEAPLGM*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELGLKEAPLGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
