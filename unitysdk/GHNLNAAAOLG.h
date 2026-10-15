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

#define GHNLNAAAOLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48E5A0)
#define GHNLNAAAOLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48E7C0)
#define GHNLNAAAOLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48E1F0)
#define GHNLNAAAOLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48E1C0)
#define GHNLNAAAOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48E1B0)
#define GHNLNAAAOLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48E320)
#define GHNLNAAAOLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48E250)
#define GHNLNAAAOLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E48E240)
#define GHNLNAAAOLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48E490)
#define GHNLNAAAOLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48E170)
#define GHNLNAAAOLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48E660)
#define GHNLNAAAOLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48E630)
#define GHNLNAAAOLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E48E230)
#define GHNLNAAAOLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48E1A0)
#define GHNLNAAAOLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48E4C0)
#define GHNLNAAAOLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48E520)

inline static constexpr unsigned int GHNLNAAAOLG_TypeDefinitionIndex = 28066;

	class GHNLNAAAOLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHNLNAAAOLG*>**)UnitySDK::FromName("", "GHNLNAAAOLG")->GetStaticField(0x17530);
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
