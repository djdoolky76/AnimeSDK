#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGCBEKKJCJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGCBEKKJCJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E478790)
#define GGCBEKKJCJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4789B0)
#define GGCBEKKJCJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4783E0)
#define GGCBEKKJCJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4783B0)
#define GGCBEKKJCJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4783A0)
#define GGCBEKKJCJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E478510)
#define GGCBEKKJCJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E478440)
#define GGCBEKKJCJN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E478430)
#define GGCBEKKJCJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E478680)
#define GGCBEKKJCJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E478360)
#define GGCBEKKJCJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E478850)
#define GGCBEKKJCJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E478820)
#define GGCBEKKJCJN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E478420)
#define GGCBEKKJCJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E478390)
#define GGCBEKKJCJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4786B0)
#define GGCBEKKJCJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E478710)

inline static constexpr unsigned int GGCBEKKJCJN_TypeDefinitionIndex = 26935;

	class GGCBEKKJCJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GGCBEKKJCJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGCBEKKJCJN*>**)UnitySDK::FromName("", "GGCBEKKJCJN")->GetStaticField(0x15850);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGCBEKKJCJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGCBEKKJCJN*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCBEKKJCJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGCBEKKJCJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGCBEKKJCJN*>*(*)())((::PBYTE)hIl2Cpp + GGCBEKKJCJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGCBEKKJCJN* Clone()
		{
			return ((::GGCBEKKJCJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGCBEKKJCJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGCBEKKJCJN*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGCBEKKJCJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGCBEKKJCJN*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGCBEKKJCJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
