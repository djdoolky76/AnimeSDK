#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMGMLGIAIJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMGMLGIAIJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5CECA0)
#define HMGMLGIAIJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CEEC0)
#define HMGMLGIAIJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5CE8F0)
#define HMGMLGIAIJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5CE8C0)
#define HMGMLGIAIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE8B0)
#define HMGMLGIAIJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5CEA20)
#define HMGMLGIAIJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5CE950)
#define HMGMLGIAIJK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5CE940)
#define HMGMLGIAIJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5CEB90)
#define HMGMLGIAIJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5CE870)
#define HMGMLGIAIJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5CED60)
#define HMGMLGIAIJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5CED30)
#define HMGMLGIAIJK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5CE930)
#define HMGMLGIAIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE8A0)
#define HMGMLGIAIJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5CEBC0)
#define HMGMLGIAIJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5CEC20)

inline static constexpr unsigned int HMGMLGIAIJK_TypeDefinitionIndex = 30130;

	class HMGMLGIAIJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HMGMLGIAIJK")->GetStaticField(0x4A370);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMGMLGIAIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMGMLGIAIJK*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGMLGIAIJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HMGMLGIAIJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMGMLGIAIJK* Clone()
		{
			return ((::HMGMLGIAIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMGMLGIAIJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMGMLGIAIJK*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMGMLGIAIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMGMLGIAIJK*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMGMLGIAIJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
