#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBNKGCMFNCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBNKGCMFNCM_BBJLFCDPENO_OFFSET UNITYSDK_OFFSET(0x1E8DFBA0)
#define LBNKGCMFNCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8DFF90)
#define LBNKGCMFNCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E0220)
#define LBNKGCMFNCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8DFB10)
#define LBNKGCMFNCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8DFAD0)
#define LBNKGCMFNCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DFAC0)
#define LBNKGCMFNCM_DMIPGEIAKPM_OFFSET UNITYSDK_OFFSET(0x1E8DFB60)
#define LBNKGCMFNCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8DFC40)
#define LBNKGCMFNCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8DFBE0)
#define LBNKGCMFNCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8DFBD0)
#define LBNKGCMFNCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8DFD30)
#define LBNKGCMFNCM_GGHOLPMHAHB_OFFSET UNITYSDK_OFFSET(0x1E8DFB70)
#define LBNKGCMFNCM_GJHNENFOOMB_OFFSET UNITYSDK_OFFSET(0x1E8DFB90)
#define LBNKGCMFNCM_HGCBHPAMGAJ_OFFSET UNITYSDK_OFFSET(0x1E8DFB80)
#define LBNKGCMFNCM_HIMNIPNEPBG_OFFSET UNITYSDK_OFFSET(0x1E8DFBB0)
#define LBNKGCMFNCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8DFA80)
#define LBNKGCMFNCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E0180)
#define LBNKGCMFNCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E0130)
#define LBNKGCMFNCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8DFBC0)
#define LBNKGCMFNCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8DFAB0)
#define LBNKGCMFNCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8DFD60)
#define LBNKGCMFNCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8DFDC0)

inline static constexpr unsigned int LBNKGCMFNCM_TypeDefinitionIndex = 28398;

	class LBNKGCMFNCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KAJKJEOCJGL; // 0x18
		::System::UInt32 LGHPHHMDNJO; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean FDKCODKDNBA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LBNKGCMFNCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBNKGCMFNCM*>**)UnitySDK::FromName("", "LBNKGCMFNCM")->GetStaticField(0x30D10);
		}

		// static const ::System::Object JLFFFPBODGF; // 0x0
		// static const ::System::Object NLHAIFMEBGN; // 0x0
		// static const ::System::Object FMKHCBNDKMJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBNKGCMFNCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBNKGCMFNCM*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBNKGCMFNCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBNKGCMFNCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBNKGCMFNCM*>*(*)())((::PBYTE)hIl2Cpp + LBNKGCMFNCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBNKGCMFNCM* Clone()
		{
			return ((::LBNKGCMFNCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMIPGEIAKPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_DMIPGEIAKPM_OFFSET))(this);
		}

		::System::Void GGHOLPMHAHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_GGHOLPMHAHB_OFFSET))(this, a1);
		}

		::System::UInt32 HGCBHPAMGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_HGCBHPAMGAJ_OFFSET))(this);
		}

		::System::Void GJHNENFOOMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_GJHNENFOOMB_OFFSET))(this, a1);
		}

		::System::Boolean BBJLFCDPENO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_BBJLFCDPENO_OFFSET))(this);
		}

		::System::Void HIMNIPNEPBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_HIMNIPNEPBG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBNKGCMFNCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBNKGCMFNCM*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBNKGCMFNCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBNKGCMFNCM*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBNKGCMFNCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
