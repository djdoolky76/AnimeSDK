#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIGJGMLAMGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIGJGMLAMGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85A0C0)
#define KIGJGMLAMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85A2E0)
#define KIGJGMLAMGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E859D10)
#define KIGJGMLAMGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E859CE0)
#define KIGJGMLAMGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E859CD0)
#define KIGJGMLAMGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E859E40)
#define KIGJGMLAMGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E859D70)
#define KIGJGMLAMGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E859D60)
#define KIGJGMLAMGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E859FB0)
#define KIGJGMLAMGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E859C90)
#define KIGJGMLAMGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85A180)
#define KIGJGMLAMGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85A150)
#define KIGJGMLAMGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E859D50)
#define KIGJGMLAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E859CC0)
#define KIGJGMLAMGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E859FE0)
#define KIGJGMLAMGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85A040)

inline static constexpr unsigned int KIGJGMLAMGH_TypeDefinitionIndex = 30463;

	class KIGJGMLAMGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KIGJGMLAMGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIGJGMLAMGH*>**)UnitySDK::FromName("", "KIGJGMLAMGH")->GetStaticField(0x1A140);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIGJGMLAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIGJGMLAMGH*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIGJGMLAMGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIGJGMLAMGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIGJGMLAMGH*>*(*)())((::PBYTE)hIl2Cpp + KIGJGMLAMGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIGJGMLAMGH* Clone()
		{
			return ((::KIGJGMLAMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIGJGMLAMGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIGJGMLAMGH*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIGJGMLAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIGJGMLAMGH*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIGJGMLAMGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
