#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENPJFKDKLOB;
class GGHOBPBFFOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENPJFKDKLOB_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E2C6C60)
#define ENPJFKDKLOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C7130)
#define ENPJFKDKLOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C74F0)
#define ENPJFKDKLOB_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E2C6C70)
#define ENPJFKDKLOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C6BC0)
#define ENPJFKDKLOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C6B30)
#define ENPJFKDKLOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6B20)
#define ENPJFKDKLOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C6E20)
#define ENPJFKDKLOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C6CA0)
#define ENPJFKDKLOB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2C6C90)
#define ENPJFKDKLOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C6FA0)
#define ENPJFKDKLOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C6AE0)
#define ENPJFKDKLOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C72F0)
#define ENPJFKDKLOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C7200)
#define ENPJFKDKLOB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2C6C80)
#define ENPJFKDKLOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6B10)
#define ENPJFKDKLOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C6FF0)
#define ENPJFKDKLOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C7050)

inline static constexpr unsigned int ENPJFKDKLOB_TypeDefinitionIndex = 35101;

	class ENPJFKDKLOB : public ::System::Object
	{
	public:
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ENPJFKDKLOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENPJFKDKLOB*>**)UnitySDK::FromName("", "ENPJFKDKLOB")->GetStaticField(0x45950);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENPJFKDKLOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENPJFKDKLOB*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENPJFKDKLOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENPJFKDKLOB*>*(*)())((::PBYTE)hIl2Cpp + ENPJFKDKLOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENPJFKDKLOB* Clone()
		{
			return ((::ENPJFKDKLOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CLONE_OFFSET))(this);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENPJFKDKLOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENPJFKDKLOB*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENPJFKDKLOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENPJFKDKLOB*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENPJFKDKLOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
