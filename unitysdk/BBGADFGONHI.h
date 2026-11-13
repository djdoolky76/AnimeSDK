#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBGADFGONHI;
class GNMCIEPEBPK;
class OJHHACMHFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBGADFGONHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA6DEF0)
#define BBGADFGONHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA6E320)
#define BBGADFGONHI_CLONE_OFFSET UNITYSDK_OFFSET(0x20582BB0)
#define BBGADFGONHI_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1FA6D910)
#define BBGADFGONHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20582AD0)
#define BBGADFGONHI_CTOR_OFFSET UNITYSDK_OFFSET(0x20582AC0)
#define BBGADFGONHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA6DA70)
#define BBGADFGONHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA6D950)
#define BBGADFGONHI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20582CB0)
#define BBGADFGONHI_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1FA6D920)
#define BBGADFGONHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA6DCB0)
#define BBGADFGONHI_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1FA6D930)
#define BBGADFGONHI_IMGJKLCIGEL_OFFSET UNITYSDK_OFFSET(0x1FA6D8F0)
#define BBGADFGONHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20582A80)
#define BBGADFGONHI_MDGCDKHDKEB_OFFSET UNITYSDK_OFFSET(0x1FA6D900)
#define BBGADFGONHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA6E1B0)
#define BBGADFGONHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA6E070)
#define BBGADFGONHI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20582CA0)
#define BBGADFGONHI_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1FA6D940)
#define BBGADFGONHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20582AB0)
#define BBGADFGONHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA6DD00)
#define BBGADFGONHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA6DD60)

inline static constexpr unsigned int BBGADFGONHI_TypeDefinitionIndex = 32851;

	class BBGADFGONHI : public ::System::Object
	{
	public:
		::GNMCIEPEBPK* JDAFJANAEBG; // 0x10
		::OJHHACMHFKA* IANPHEMCHDG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 ONPFGKIELHM; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::BBGADFGONHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBGADFGONHI*>**)UnitySDK::FromName("", "BBGADFGONHI")->GetStaticField(0x439F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NDBLLNDJADG; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object CLMHGEKEEOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBGADFGONHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBGADFGONHI*))((::PBYTE)hIl2Cpp + BBGADFGONHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGADFGONHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBGADFGONHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBGADFGONHI*>*(*)())((::PBYTE)hIl2Cpp + BBGADFGONHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBGADFGONHI* Clone()
		{
			return ((::BBGADFGONHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBGADFGONHI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IMGJKLCIGEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_IMGJKLCIGEL_OFFSET))(this);
		}

		::System::Void MDGCDKHDKEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBGADFGONHI_MDGCDKHDKEB_OFFSET))(this, a1);
		}

		::GNMCIEPEBPK* CPCEGCCEMIM()
		{
			return ((::GNMCIEPEBPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::GNMCIEPEBPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNMCIEPEBPK*))((::PBYTE)hIl2Cpp + BBGADFGONHI_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + BBGADFGONHI_PAGHNFFHKEO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBGADFGONHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBGADFGONHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBGADFGONHI*))((::PBYTE)hIl2Cpp + BBGADFGONHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBGADFGONHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBGADFGONHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBGADFGONHI*))((::PBYTE)hIl2Cpp + BBGADFGONHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBGADFGONHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
