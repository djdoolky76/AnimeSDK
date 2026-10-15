#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEGIAKADMHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEGIAKADMHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E092E70)
#define CEGIAKADMHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E093090)
#define CEGIAKADMHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E092AC0)
#define CEGIAKADMHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E092A90)
#define CEGIAKADMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E092A80)
#define CEGIAKADMHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E092BF0)
#define CEGIAKADMHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E092B20)
#define CEGIAKADMHP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E092B10)
#define CEGIAKADMHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E092D60)
#define CEGIAKADMHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E092A40)
#define CEGIAKADMHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E092F30)
#define CEGIAKADMHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E092F00)
#define CEGIAKADMHP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E092B00)
#define CEGIAKADMHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E092A70)
#define CEGIAKADMHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E092D90)
#define CEGIAKADMHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E092DF0)

inline static constexpr unsigned int CEGIAKADMHP_TypeDefinitionIndex = 29448;

	class CEGIAKADMHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CEGIAKADMHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEGIAKADMHP*>**)UnitySDK::FromName("", "CEGIAKADMHP")->GetStaticField(0x108D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEGIAKADMHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEGIAKADMHP*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGIAKADMHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEGIAKADMHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEGIAKADMHP*>*(*)())((::PBYTE)hIl2Cpp + CEGIAKADMHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEGIAKADMHP* Clone()
		{
			return ((::CEGIAKADMHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEGIAKADMHP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEGIAKADMHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEGIAKADMHP*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEGIAKADMHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEGIAKADMHP*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEGIAKADMHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
