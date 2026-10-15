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

#define EPAIKOHMLDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D43F0)
#define EPAIKOHMLDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4610)
#define EPAIKOHMLDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D4040)
#define EPAIKOHMLDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D4010)
#define EPAIKOHMLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4000)
#define EPAIKOHMLDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D4170)
#define EPAIKOHMLDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D40A0)
#define EPAIKOHMLDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2D4090)
#define EPAIKOHMLDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D42E0)
#define EPAIKOHMLDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D3FC0)
#define EPAIKOHMLDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D44B0)
#define EPAIKOHMLDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D4480)
#define EPAIKOHMLDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2D4080)
#define EPAIKOHMLDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3FF0)
#define EPAIKOHMLDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D4310)
#define EPAIKOHMLDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D4370)

inline static constexpr unsigned int EPAIKOHMLDK_TypeDefinitionIndex = 31251;

	class EPAIKOHMLDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPAIKOHMLDK*>**)UnitySDK::FromName("", "EPAIKOHMLDK")->GetStaticField(0x477E0);
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
