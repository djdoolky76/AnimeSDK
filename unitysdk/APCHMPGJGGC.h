#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCHMPGJGGC;
class CAGKEDMHEOI;
class DAENHKENJHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APCHMPGJGGC_AJKEBMAIMID_OFFSET UNITYSDK_OFFSET(0x201B1600)
#define APCHMPGJGGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201B1CB0)
#define APCHMPGJGGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x201B2190)
#define APCHMPGJGGC_CLONE_OFFSET UNITYSDK_OFFSET(0x201B14E0)
#define APCHMPGJGGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201B1420)
#define APCHMPGJGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x201B1410)
#define APCHMPGJGGC_EIPMOMHECIO_OFFSET UNITYSDK_OFFSET(0x201B1640)
#define APCHMPGJGGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201B1770)
#define APCHMPGJGGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x201B1650)
#define APCHMPGJGGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x201B15C0)
#define APCHMPGJGGC_FNHACMDCDLJ_OFFSET UNITYSDK_OFFSET(0x201B15F0)
#define APCHMPGJGGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201B1920)
#define APCHMPGJGGC_GNDFDGNPNDO_OFFSET UNITYSDK_OFFSET(0x201B1630)
#define APCHMPGJGGC_HEGIMIJFBAJ_OFFSET UNITYSDK_OFFSET(0x201B1620)
#define APCHMPGJGGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201B13D0)
#define APCHMPGJGGC_LEACFNDELKG_OFFSET UNITYSDK_OFFSET(0x201B15D0)
#define APCHMPGJGGC_LOBCNAFMDKM_OFFSET UNITYSDK_OFFSET(0x201B1610)
#define APCHMPGJGGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201B2020)
#define APCHMPGJGGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201B1EE0)
#define APCHMPGJGGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x201B15B0)
#define APCHMPGJGGC_OONKPKLPGKP_OFFSET UNITYSDK_OFFSET(0x201B15E0)
#define APCHMPGJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201B1400)
#define APCHMPGJGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201B1A20)
#define APCHMPGJGGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x201B1A80)

inline static constexpr unsigned int APCHMPGJGGC_TypeDefinitionIndex = 33889;

	class APCHMPGJGGC : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* HPEJOGGPEDN; // 0x10
		::DAENHKENJHK* HCOFIFFFDEO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int32 MBNFLNOHMMM; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::Int32 BHMNGMOPONI; // 0x30
		static ::Google::Protobuf::MessageParser_1<::APCHMPGJGGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APCHMPGJGGC*>**)UnitySDK::FromName("", "APCHMPGJGGC")->GetStaticField(0x3E530);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IGJEGLIAJBG; // 0x0
		// static const ::System::Object GNKPEGMOLPM; // 0x0
		// static const ::System::Object KJKPNHPCGMD; // 0x0
		// static const ::System::Object JAJPAJKGLPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APCHMPGJGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCHMPGJGGC*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCHMPGJGGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::APCHMPGJGGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APCHMPGJGGC*>*(*)())((::PBYTE)hIl2Cpp + APCHMPGJGGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APCHMPGJGGC* Clone()
		{
			return ((::APCHMPGJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCHMPGJGGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int32 LEACFNDELKG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_LEACFNDELKG_OFFSET))(this);
		}

		::System::Void OONKPKLPGKP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCHMPGJGGC_OONKPKLPGKP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* FNHACMDCDLJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_FNHACMDCDLJ_OFFSET))(this);
		}

		::System::Void AJKEBMAIMID(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_AJKEBMAIMID_OFFSET))(this, a1);
		}

		::System::Int32 LOBCNAFMDKM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_LOBCNAFMDKM_OFFSET))(this);
		}

		::System::Void HEGIMIJFBAJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCHMPGJGGC_HEGIMIJFBAJ_OFFSET))(this, a1);
		}

		::DAENHKENJHK* GNDFDGNPNDO()
		{
			return ((::DAENHKENJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_GNDFDGNPNDO_OFFSET))(this);
		}

		::System::Void EIPMOMHECIO(::DAENHKENJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAENHKENJHK*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_EIPMOMHECIO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APCHMPGJGGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APCHMPGJGGC*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APCHMPGJGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCHMPGJGGC*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
