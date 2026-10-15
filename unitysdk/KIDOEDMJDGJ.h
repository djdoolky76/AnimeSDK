#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/System/Object.h"
class KIDOEDMJDGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIDOEDMJDGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E858400)
#define KIDOEDMJDGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8587C0)
#define KIDOEDMJDGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E857FC0)
#define KIDOEDMJDGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E857F80)
#define KIDOEDMJDGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E857F70)
#define KIDOEDMJDGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E858150)
#define KIDOEDMJDGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E858070)
#define KIDOEDMJDGJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E858040)
#define KIDOEDMJDGJ_FDDPCJMODGD_OFFSET UNITYSDK_OFFSET(0x1E858010)
#define KIDOEDMJDGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E858220)
#define KIDOEDMJDGJ_IGIFHDNDHMH_OFFSET UNITYSDK_OFFSET(0x1E858060)
#define KIDOEDMJDGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E857F30)
#define KIDOEDMJDGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E858620)
#define KIDOEDMJDGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8585D0)
#define KIDOEDMJDGJ_NPHCBOINFMD_OFFSET UNITYSDK_OFFSET(0x1E858020)
#define KIDOEDMJDGJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E858030)
#define KIDOEDMJDGJ_OGIOEDIJGLH_OFFSET UNITYSDK_OFFSET(0x1E858050)
#define KIDOEDMJDGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E857F60)
#define KIDOEDMJDGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E858250)
#define KIDOEDMJDGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8582B0)

	class KIDOEDMJDGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FKNKNLGMACL CNKEBBBFBDC; // 0x18
		::System::UInt32 JIMIHJLDNHA; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIDOEDMJDGJ")->GetStaticField(0x19290);
		}

		// static const ::System::Object COICJNBDJFC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JFJBHJHHILJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIDOEDMJDGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDOEDMJDGJ*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIDOEDMJDGJ* Clone()
		{
			return ((::KIDOEDMJDGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_CLONE_OFFSET))(this);
		}

		::FKNKNLGMACL FDDPCJMODGD()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_FDDPCJMODGD_OFFSET))(this);
		}

		::System::Void NPHCBOINFMD(::FKNKNLGMACL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKNKNLGMACL))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_NPHCBOINFMD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OGIOEDIJGLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_OGIOEDIJGLH_OFFSET))(this);
		}

		::System::Void IGIFHDNDHMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_IGIFHDNDHMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIDOEDMJDGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIDOEDMJDGJ*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIDOEDMJDGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDOEDMJDGJ*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIDOEDMJDGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
