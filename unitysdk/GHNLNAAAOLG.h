#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHNLNAAAOLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHNLNAAAOLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F780630)
#define GHNLNAAAOLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F780850)
#define GHNLNAAAOLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F780280)
#define GHNLNAAAOLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F780250)
#define GHNLNAAAOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F780240)
#define GHNLNAAAOLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7803B0)
#define GHNLNAAAOLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7802E0)
#define GHNLNAAAOLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F7802D0)
#define GHNLNAAAOLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F780520)
#define GHNLNAAAOLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F780200)
#define GHNLNAAAOLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7806F0)
#define GHNLNAAAOLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7806C0)
#define GHNLNAAAOLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F7802C0)
#define GHNLNAAAOLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F780230)
#define GHNLNAAAOLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F780550)
#define GHNLNAAAOLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7805B0)

inline static constexpr unsigned int GHNLNAAAOLG_TypeDefinitionIndex = 28656;

	class GHNLNAAAOLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>**)UnitySDK::FromName("", "GHNLNAAAOLG")->GetStaticField(0x10530);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHNLNAAAOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHNLNAAAOLG*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNLNAAAOLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>*(*)())((::PBYTE)hIl2Cpp + GHNLNAAAOLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHNLNAAAOLG* Clone()
		{
			return ((::GHNLNAAAOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHNLNAAAOLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHNLNAAAOLG*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHNLNAAAOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHNLNAAAOLG*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHNLNAAAOLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
