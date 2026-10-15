#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKJMHLEJMD;
class GMCAGPOHKJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMCAGPOHKJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CB540)
#define GMCAGPOHKJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CB8E0)
#define GMCAGPOHKJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CAF80)
#define GMCAGPOHKJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CAEF0)
#define GMCAGPOHKJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CAEE0)
#define GMCAGPOHKJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CB1E0)
#define GMCAGPOHKJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CB060)
#define GMCAGPOHKJJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4CB050)
#define GMCAGPOHKJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CB360)
#define GMCAGPOHKJJ_GMLENNCNDMP_OFFSET UNITYSDK_OFFSET(0x1E4CB030)
#define GMCAGPOHKJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4CAEA0)
#define GMCAGPOHKJJ_LFCIIOBNBOC_OFFSET UNITYSDK_OFFSET(0x1E4CB020)
#define GMCAGPOHKJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CB6F0)
#define GMCAGPOHKJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CB610)
#define GMCAGPOHKJJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4CB040)
#define GMCAGPOHKJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CAED0)
#define GMCAGPOHKJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CB400)
#define GMCAGPOHKJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CB460)

inline static constexpr unsigned int GMCAGPOHKJJ_TypeDefinitionIndex = 35088;

	class GMCAGPOHKJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAKJMHLEJMD* BMABHNHODGG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMCAGPOHKJJ")->GetStaticField(0x20980);
		}

		// static const ::System::Object KMCFAJCCLOP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMCAGPOHKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMCAGPOHKJJ*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMCAGPOHKJJ* Clone()
		{
			return ((::GMCAGPOHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_CLONE_OFFSET))(this);
		}

		::GAKJMHLEJMD* LFCIIOBNBOC()
		{
			return ((::GAKJMHLEJMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_LFCIIOBNBOC_OFFSET))(this);
		}

		::System::Void GMLENNCNDMP(::GAKJMHLEJMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAKJMHLEJMD*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_GMLENNCNDMP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMCAGPOHKJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMCAGPOHKJJ*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMCAGPOHKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMCAGPOHKJJ*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMCAGPOHKJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
