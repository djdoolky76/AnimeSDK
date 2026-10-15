#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECJCIAPBFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECJCIAPBFDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E225B90)
#define ECJCIAPBFDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E225DB0)
#define ECJCIAPBFDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2257E0)
#define ECJCIAPBFDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2257B0)
#define ECJCIAPBFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2257A0)
#define ECJCIAPBFDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E225910)
#define ECJCIAPBFDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E225840)
#define ECJCIAPBFDJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E225830)
#define ECJCIAPBFDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E225A80)
#define ECJCIAPBFDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E225760)
#define ECJCIAPBFDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E225C50)
#define ECJCIAPBFDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E225C20)
#define ECJCIAPBFDJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E225820)
#define ECJCIAPBFDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E225790)
#define ECJCIAPBFDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E225AB0)
#define ECJCIAPBFDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E225B10)

inline static constexpr unsigned int ECJCIAPBFDJ_TypeDefinitionIndex = 31826;

	class ECJCIAPBFDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ECJCIAPBFDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECJCIAPBFDJ*>**)UnitySDK::FromName("", "ECJCIAPBFDJ")->GetStaticField(0x42730);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECJCIAPBFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECJCIAPBFDJ*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECJCIAPBFDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECJCIAPBFDJ*>*(*)())((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECJCIAPBFDJ* Clone()
		{
			return ((::ECJCIAPBFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECJCIAPBFDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECJCIAPBFDJ*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECJCIAPBFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECJCIAPBFDJ*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECJCIAPBFDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
