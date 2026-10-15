#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMOPGLBEHPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMOPGLBEHPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E79B0)
#define EMOPGLBEHPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E7BD0)
#define EMOPGLBEHPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E7600)
#define EMOPGLBEHPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E75D0)
#define EMOPGLBEHPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E75C0)
#define EMOPGLBEHPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E7730)
#define EMOPGLBEHPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E7660)
#define EMOPGLBEHPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2E7650)
#define EMOPGLBEHPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E78A0)
#define EMOPGLBEHPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E7580)
#define EMOPGLBEHPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E7A70)
#define EMOPGLBEHPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E7A40)
#define EMOPGLBEHPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2E7640)
#define EMOPGLBEHPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E75B0)
#define EMOPGLBEHPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E78D0)
#define EMOPGLBEHPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E7930)

inline static constexpr unsigned int EMOPGLBEHPA_TypeDefinitionIndex = 30346;

	class EMOPGLBEHPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EMOPGLBEHPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMOPGLBEHPA*>**)UnitySDK::FromName("", "EMOPGLBEHPA")->GetStaticField(0x54050);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMOPGLBEHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMOPGLBEHPA*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMOPGLBEHPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMOPGLBEHPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMOPGLBEHPA*>*(*)())((::PBYTE)hIl2Cpp + EMOPGLBEHPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMOPGLBEHPA* Clone()
		{
			return ((::EMOPGLBEHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMOPGLBEHPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMOPGLBEHPA*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMOPGLBEHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMOPGLBEHPA*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMOPGLBEHPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
