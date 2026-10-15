#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFDIMJCMNDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFDIMJCMNDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93B2C0)
#define LFDIMJCMNDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93B4E0)
#define LFDIMJCMNDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93AF10)
#define LFDIMJCMNDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93AEE0)
#define LFDIMJCMNDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93AED0)
#define LFDIMJCMNDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93B040)
#define LFDIMJCMNDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93AF70)
#define LFDIMJCMNDJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E93AF60)
#define LFDIMJCMNDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93B1B0)
#define LFDIMJCMNDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93AE90)
#define LFDIMJCMNDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93B380)
#define LFDIMJCMNDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93B350)
#define LFDIMJCMNDJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E93AF50)
#define LFDIMJCMNDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93AEC0)
#define LFDIMJCMNDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93B1E0)
#define LFDIMJCMNDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93B240)

inline static constexpr unsigned int LFDIMJCMNDJ_TypeDefinitionIndex = 29704;

	class LFDIMJCMNDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LFDIMJCMNDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFDIMJCMNDJ*>**)UnitySDK::FromName("", "LFDIMJCMNDJ")->GetStaticField(0x3A710);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFDIMJCMNDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFDIMJCMNDJ*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFDIMJCMNDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFDIMJCMNDJ*>*(*)())((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFDIMJCMNDJ* Clone()
		{
			return ((::LFDIMJCMNDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFDIMJCMNDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFDIMJCMNDJ*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFDIMJCMNDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFDIMJCMNDJ*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFDIMJCMNDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
