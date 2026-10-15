#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDHEDGIGKBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDHEDGIGKBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70B0F0)
#define JDHEDGIGKBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70B310)
#define JDHEDGIGKBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70AD40)
#define JDHEDGIGKBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70AD10)
#define JDHEDGIGKBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70AD00)
#define JDHEDGIGKBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70AE70)
#define JDHEDGIGKBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70ADA0)
#define JDHEDGIGKBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E70AD90)
#define JDHEDGIGKBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70AFE0)
#define JDHEDGIGKBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70ACC0)
#define JDHEDGIGKBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70B1B0)
#define JDHEDGIGKBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70B180)
#define JDHEDGIGKBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E70AD80)
#define JDHEDGIGKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70ACF0)
#define JDHEDGIGKBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70B010)
#define JDHEDGIGKBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70B070)

inline static constexpr unsigned int JDHEDGIGKBM_TypeDefinitionIndex = 30435;

	class JDHEDGIGKBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JDHEDGIGKBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDHEDGIGKBM*>**)UnitySDK::FromName("", "JDHEDGIGKBM")->GetStaticField(0x5DD10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDHEDGIGKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDHEDGIGKBM*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDHEDGIGKBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDHEDGIGKBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDHEDGIGKBM*>*(*)())((::PBYTE)hIl2Cpp + JDHEDGIGKBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDHEDGIGKBM* Clone()
		{
			return ((::JDHEDGIGKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDHEDGIGKBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDHEDGIGKBM*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDHEDGIGKBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDHEDGIGKBM*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDHEDGIGKBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
