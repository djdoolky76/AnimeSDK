#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDNABFBLEPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDNABFBLEPG_ANAJFNAGPAM_OFFSET UNITYSDK_OFFSET(0x1DF12BE0)
#define PDNABFBLEPG_BNICGIGNMHI_OFFSET UNITYSDK_OFFSET(0x1DF12B90)
#define PDNABFBLEPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF13080)
#define PDNABFBLEPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF133D0)
#define PDNABFBLEPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF12AC0)
#define PDNABFBLEPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF12A70)
#define PDNABFBLEPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF12A60)
#define PDNABFBLEPG_DLIPEHGONLN_OFFSET UNITYSDK_OFFSET(0x1DF12BD0)
#define PDNABFBLEPG_DNICPKHAFCJ_OFFSET UNITYSDK_OFFSET(0x1DF12B80)
#define PDNABFBLEPG_EGGIMEGJJNH_OFFSET UNITYSDK_OFFSET(0x1DF12BF0)
#define PDNABFBLEPG_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1DF12BB0)
#define PDNABFBLEPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF12CC0)
#define PDNABFBLEPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF12C10)
#define PDNABFBLEPG_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1DF12BC0)
#define PDNABFBLEPG_FHDAFILHINO_OFFSET UNITYSDK_OFFSET(0x1DF12B50)
#define PDNABFBLEPG_FMOJALIPPFL_OFFSET UNITYSDK_OFFSET(0x1DF12B60)
#define PDNABFBLEPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF12D30)
#define PDNABFBLEPG_GNGNMOOBAHM_OFFSET UNITYSDK_OFFSET(0x1DF12B70)
#define PDNABFBLEPG_IOBABKNIGHP_OFFSET UNITYSDK_OFFSET(0x1DF12C00)
#define PDNABFBLEPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF129F0)
#define PDNABFBLEPG_LDFOFKPPGNB_OFFSET UNITYSDK_OFFSET(0x1DF12BA0)
#define PDNABFBLEPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF13300)
#define PDNABFBLEPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF132A0)
#define PDNABFBLEPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF12A50)
#define PDNABFBLEPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF12D70)
#define PDNABFBLEPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF12DD0)

inline static constexpr unsigned int PDNABFBLEPG_TypeDefinitionIndex = 30996;

	class PDNABFBLEPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDEKLKKBDF; // 0x18
		::System::UInt32 DNPAOAKHMFL; // 0x1C
		::System::Boolean HBLHKAGPOID; // 0x20
		::System::Boolean MPLNNPEGGEO; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 NOMDEJJPCMH; // 0x24
		::System::UInt32 MFMGPMFACON; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PDNABFBLEPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDNABFBLEPG*>**)UnitySDK::FromName("", "PDNABFBLEPG")->GetStaticField(0x37E90);
		}

		// static const ::System::Object HIOMDNIMCED; // 0x0
		// static const ::System::Object JFFNJNNAOFJ; // 0x0
		// static const ::System::Object PMJPJDIAMFK; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object JBDFACLDEAI; // 0x0
		// static const ::System::Object AEPKDCNIABP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDNABFBLEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDNABFBLEPG*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDNABFBLEPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDNABFBLEPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDNABFBLEPG*>*(*)())((::PBYTE)hIl2Cpp + PDNABFBLEPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDNABFBLEPG* Clone()
		{
			return ((::PDNABFBLEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FHDAFILHINO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_FHDAFILHINO_OFFSET))(this);
		}

		::System::Void FMOJALIPPFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDNABFBLEPG_FMOJALIPPFL_OFFSET))(this, a1);
		}

		::System::UInt32 GNGNMOOBAHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_GNGNMOOBAHM_OFFSET))(this);
		}

		::System::Void DNICPKHAFCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDNABFBLEPG_DNICPKHAFCJ_OFFSET))(this, a1);
		}

		::System::UInt32 BNICGIGNMHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_BNICGIGNMHI_OFFSET))(this);
		}

		::System::Void LDFOFKPPGNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDNABFBLEPG_LDFOFKPPGNB_OFFSET))(this, a1);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDNABFBLEPG_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::Boolean DLIPEHGONLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_DLIPEHGONLN_OFFSET))(this);
		}

		::System::Void ANAJFNAGPAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDNABFBLEPG_ANAJFNAGPAM_OFFSET))(this, a1);
		}

		::System::Boolean EGGIMEGJJNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_EGGIMEGJJNH_OFFSET))(this);
		}

		::System::Void IOBABKNIGHP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDNABFBLEPG_IOBABKNIGHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDNABFBLEPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDNABFBLEPG*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDNABFBLEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDNABFBLEPG*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDNABFBLEPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
