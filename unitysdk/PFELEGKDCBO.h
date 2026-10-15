#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFELEGKDCBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFELEGKDCBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF24300)
#define PFELEGKDCBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF24520)
#define PFELEGKDCBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF23F50)
#define PFELEGKDCBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF23F20)
#define PFELEGKDCBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF23F10)
#define PFELEGKDCBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF24080)
#define PFELEGKDCBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF23FB0)
#define PFELEGKDCBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF23FA0)
#define PFELEGKDCBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF241F0)
#define PFELEGKDCBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF23ED0)
#define PFELEGKDCBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF243C0)
#define PFELEGKDCBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF24390)
#define PFELEGKDCBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF23F90)
#define PFELEGKDCBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF23F00)
#define PFELEGKDCBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF24220)
#define PFELEGKDCBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF24280)

inline static constexpr unsigned int PFELEGKDCBO_TypeDefinitionIndex = 27112;

	class PFELEGKDCBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PFELEGKDCBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFELEGKDCBO*>**)UnitySDK::FromName("", "PFELEGKDCBO")->GetStaticField(0x3B320);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFELEGKDCBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFELEGKDCBO*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFELEGKDCBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFELEGKDCBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFELEGKDCBO*>*(*)())((::PBYTE)hIl2Cpp + PFELEGKDCBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFELEGKDCBO* Clone()
		{
			return ((::PFELEGKDCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFELEGKDCBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFELEGKDCBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFELEGKDCBO*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFELEGKDCBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFELEGKDCBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFELEGKDCBO*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFELEGKDCBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
