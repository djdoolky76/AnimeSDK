#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCHMPGJGGC;
class CAGKEDMHEOI;
class DAENHKENJHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APCHMPGJGGC_AJKEBMAIMID_OFFSET UNITYSDK_OFFSET(0x1E672FD0)
#define APCHMPGJGGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E673660)
#define APCHMPGJGGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E673B70)
#define APCHMPGJGGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E672F30)
#define APCHMPGJGGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E672E60)
#define APCHMPGJGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E672E50)
#define APCHMPGJGGC_EIPMOMHECIO_OFFSET UNITYSDK_OFFSET(0x1E672F70)
#define APCHMPGJGGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E673120)
#define APCHMPGJGGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E673000)
#define APCHMPGJGGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E672F90)
#define APCHMPGJGGC_FNHACMDCDLJ_OFFSET UNITYSDK_OFFSET(0x1E672FC0)
#define APCHMPGJGGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6732C0)
#define APCHMPGJGGC_GNDFDGNPNDO_OFFSET UNITYSDK_OFFSET(0x1E672F60)
#define APCHMPGJGGC_HEGIMIJFBAJ_OFFSET UNITYSDK_OFFSET(0x1E672FF0)
#define APCHMPGJGGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E672E10)
#define APCHMPGJGGC_LEACFNDELKG_OFFSET UNITYSDK_OFFSET(0x1E672FA0)
#define APCHMPGJGGC_LOBCNAFMDKM_OFFSET UNITYSDK_OFFSET(0x1E672FE0)
#define APCHMPGJGGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6739F0)
#define APCHMPGJGGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6738A0)
#define APCHMPGJGGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E672F80)
#define APCHMPGJGGC_OONKPKLPGKP_OFFSET UNITYSDK_OFFSET(0x1E672FB0)
#define APCHMPGJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E672E40)
#define APCHMPGJGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6733D0)
#define APCHMPGJGGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E673430)

inline static constexpr unsigned int APCHMPGJGGC_TypeDefinitionIndex = 32974;

	class APCHMPGJGGC : public ::System::Object
	{
	public:
		::DAENHKENJHK* HCOFIFFFDEO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CAGKEDMHEOI* HPEJOGGPEDN; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Int32 MBNFLNOHMMM; // 0x2C
		::System::Int32 BHMNGMOPONI; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APCHMPGJGGC")->GetStaticField(0x41D70);
		}

		// static const ::System::Object JAJPAJKGLPH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IGJEGLIAJBG; // 0x0
		// static const ::System::Object GNKPEGMOLPM; // 0x0
		// static const ::System::Object KJKPNHPCGMD; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APCHMPGJGGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APCHMPGJGGC* Clone()
		{
			return ((::APCHMPGJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_CLONE_OFFSET))(this);
		}

		::DAENHKENJHK* GNDFDGNPNDO()
		{
			return ((::DAENHKENJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCHMPGJGGC_GNDFDGNPNDO_OFFSET))(this);
		}

		::System::Void EIPMOMHECIO(::DAENHKENJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAENHKENJHK*))((::PBYTE)hIl2Cpp + APCHMPGJGGC_EIPMOMHECIO_OFFSET))(this, a1);
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
