#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAIKOHMLDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPAIKOHMLDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E301A80)
#define EPAIKOHMLDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E301CA0)
#define EPAIKOHMLDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3016D0)
#define EPAIKOHMLDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3016A0)
#define EPAIKOHMLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E301690)
#define EPAIKOHMLDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E301800)
#define EPAIKOHMLDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E301730)
#define EPAIKOHMLDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E301720)
#define EPAIKOHMLDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E301970)
#define EPAIKOHMLDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E301650)
#define EPAIKOHMLDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E301B40)
#define EPAIKOHMLDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E301B10)
#define EPAIKOHMLDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E301710)
#define EPAIKOHMLDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E301680)
#define EPAIKOHMLDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3019A0)
#define EPAIKOHMLDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E301A00)

inline static constexpr unsigned int EPAIKOHMLDK_TypeDefinitionIndex = 31251;

	class EPAIKOHMLDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>**)UnitySDK::FromName("", "EPAIKOHMLDK")->GetStaticField(0x55440);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPAIKOHMLDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAIKOHMLDK*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAIKOHMLDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>*(*)())((::PBYTE)hIl2Cpp + EPAIKOHMLDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPAIKOHMLDK* Clone()
		{
			return ((::EPAIKOHMLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPAIKOHMLDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPAIKOHMLDK*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPAIKOHMLDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAIKOHMLDK*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPAIKOHMLDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
