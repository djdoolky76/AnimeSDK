#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class NKJEOLDHJKB;
class OECBDEANICM;
namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define OFAPIOJNKCD_AOMKCLKLILE_OFFSET UNITYSDK_OFFSET(0x15F66E70)
#define OFAPIOJNKCD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x15F66CE0)
#define OFAPIOJNKCD_IKDPICCOGAN_OFFSET UNITYSDK_OFFSET(0x15F66490)
#define OFAPIOJNKCD_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x15F66550)
#define OFAPIOJNKCD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15F66430)
#define OFAPIOJNKCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F66420)

inline static constexpr unsigned int OFAPIOJNKCD_TypeDefinitionIndex = 59727;

class OFAPIOJNKCD : public ::System::Object
{
public:
	// static const ::System::Byte ADOHPOMEACB = 0x0; // 0x0
	// static const ::System::Byte NANFFJHILKN = 0x1; // 0x0
	// static const ::System::Byte PJILJCEGFMG = 0x2; // 0x0
	// static const ::System::Byte MAMJDNOJPFD = 0x4; // 0x0
	// static const ::System::Byte MBPBGPJPEKK = 0x8; // 0x0
	// static const ::System::Byte JLJAJKCPBFH = 0x1; // 0x0
	// static const ::System::Byte AOCFLEMDCOJ = 0x2; // 0x0
	// static const ::System::Byte BBCJMOAFNJF = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* OJPCNDJDNIJ; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KHBFHGHIBKN; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* OPFCFGIGFFD; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* DKLEHNLLDIM; // 0x28
	::OECBDEANICM* GEANDLGIKBC; // 0x30
	::NKJEOLDHJKB* CENOEAAIKOB; // 0x38
	::AEMCAOEICDG* OHPJHPEOFLD; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* HGJEPOCCBEG; // 0x48
	::EHKKPCGAJHO* POBADKEDFOE; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* KBFCMBCKMIM; // 0x58
	::System::UInt32 BKLGNCBNEGM; // 0x60
	::System::Boolean FNFDJNGIACE; // 0x64
	::System::Byte DOGHDAGFKBJ; // 0x65
	::System::Boolean DICLDBNPPOD; // 0x66
	::System::Byte CAPKGLLAAMB; // 0x67
	::System::Int32 FHDOICBOFEL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPIOJNKCD__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAPIOJNKCD_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::String* IKDPICCOGAN(::System::Byte LBPIPEAKPDG)
	{
		return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + OFAPIOJNKCD_IKDPICCOGAN_OFFSET))(LBPIPEAKPDG);
	}

	static ::System::Void JJEJHGOJOII(::OFAPIOJNKCD*& OBKICKGGFEO)
	{
		return ((::System::Void(*)(::OFAPIOJNKCD*&))((::PBYTE)hIl2Cpp + OFAPIOJNKCD_JJEJHGOJOII_OFFSET))(OBKICKGGFEO);
	}

	static ::OFAPIOJNKCD* BBPCBEEHALC()
	{
		return ((::OFAPIOJNKCD*(*)())((::PBYTE)hIl2Cpp + OFAPIOJNKCD_BBPCBEEHALC_OFFSET))();
	}

	static ::System::String* AOMKCLKLILE(::System::Byte LBPIPEAKPDG)
	{
		return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + OFAPIOJNKCD_AOMKCLKLILE_OFFSET))(LBPIPEAKPDG);
	}
};
