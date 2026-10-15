#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAGCLEDHOBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAGCLEDHOBD_BPOLAGJMNKK_OFFSET UNITYSDK_OFFSET(0x1E786F70)
#define BAGCLEDHOBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7872D0)
#define BAGCLEDHOBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7874F0)
#define BAGCLEDHOBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E786F20)
#define BAGCLEDHOBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E786EF0)
#define BAGCLEDHOBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E786EE0)
#define BAGCLEDHOBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E787050)
#define BAGCLEDHOBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E786F80)
#define BAGCLEDHOBD_GEPNBJGOEDM_OFFSET UNITYSDK_OFFSET(0x1E786F60)
#define BAGCLEDHOBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7871C0)
#define BAGCLEDHOBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E786EA0)
#define BAGCLEDHOBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E787390)
#define BAGCLEDHOBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E787360)
#define BAGCLEDHOBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E786ED0)
#define BAGCLEDHOBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7871F0)
#define BAGCLEDHOBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E787250)

inline static constexpr unsigned int BAGCLEDHOBD_TypeDefinitionIndex = 30685;

	class BAGCLEDHOBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DGODIBCLHGN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BAGCLEDHOBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAGCLEDHOBD*>**)UnitySDK::FromName("", "BAGCLEDHOBD")->GetStaticField(0x4C150);
		}

		// static const ::System::Object OJPKFLDKPEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAGCLEDHOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAGCLEDHOBD*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAGCLEDHOBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAGCLEDHOBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAGCLEDHOBD*>*(*)())((::PBYTE)hIl2Cpp + BAGCLEDHOBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAGCLEDHOBD* Clone()
		{
			return ((::BAGCLEDHOBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEPNBJGOEDM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_GEPNBJGOEDM_OFFSET))(this);
		}

		::System::Void BPOLAGJMNKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_BPOLAGJMNKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAGCLEDHOBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAGCLEDHOBD*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAGCLEDHOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAGCLEDHOBD*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAGCLEDHOBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
