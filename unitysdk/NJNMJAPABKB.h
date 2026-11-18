#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJNMJAPABKB_BBAJLFCMLPJ.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlow; }
namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class AnimationCurve; }

#define NJNMJAPABKB_BACEDHGHANL_OFFSET UNITYSDK_OFFSET(0x105C1CF0)
#define NJNMJAPABKB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x105C1AC0)
#define NJNMJAPABKB_BHPMJDGJJMJ_OFFSET UNITYSDK_OFFSET(0x105C1E50)
#define NJNMJAPABKB_BMFNKMKNPGA_OFFSET UNITYSDK_OFFSET(0x105C1D00)
#define NJNMJAPABKB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x105C1A80)
#define NJNMJAPABKB_EPCNIBKKPOC_OFFSET UNITYSDK_OFFSET(0x105C1D10)
#define NJNMJAPABKB_HGIBKOPIEPN_OFFSET UNITYSDK_OFFSET(0x105C1E90)
#define NJNMJAPABKB_HKEPKOGFPHJ_OFFSET UNITYSDK_OFFSET(0x105C1950)
#define NJNMJAPABKB_IJGKMHKMADG_OFFSET UNITYSDK_OFFSET(0x105C1630)
#define NJNMJAPABKB_JIELJJBLFAF_OFFSET UNITYSDK_OFFSET(0x105C1670)
#define NJNMJAPABKB_LNENNKNDMJC_OFFSET UNITYSDK_OFFSET(0x105C16E0)
#define NJNMJAPABKB_MABOKDIJMGC_OFFSET UNITYSDK_OFFSET(0x105C1A40)
#define NJNMJAPABKB_MKHFJKMAOPB_OFFSET UNITYSDK_OFFSET(0x105C15E0)
#define NJNMJAPABKB_MOAFIMKBFHH_OFFSET UNITYSDK_OFFSET(0x105C1A30)
#define NJNMJAPABKB_NJBNLDLJPMN_OFFSET UNITYSDK_OFFSET(0x105C1A20)
#define NJNMJAPABKB_OAOPOOCDGOH_OFFSET UNITYSDK_OFFSET(0x105C1CD0)
#define NJNMJAPABKB_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x105C1D20)
#define NJNMJAPABKB_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x105C1CE0)
#define NJNMJAPABKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105C1120)
#define NJNMJAPABKB__CTOR_OFFSET UNITYSDK_OFFSET(0x105C1110)

inline static constexpr unsigned int NJNMJAPABKB_TypeDefinitionIndex = 65375;

class NJNMJAPABKB : public ::System::Object
{
public:
	// static const ::System::String* KHALKHIJKEN; // 0x0
	::System::Func_2<::System::Single, ::System::Single>* GBKNIPHHBHK; // 0x10
	::UnityEngine::AnimationCurve* JFGAAPNBJJK; // 0x18
	::MoleMole::Config::ConfigEntityTimeSlowBase* MAONDLOLGIK; // 0x20
	::UnityEngine::AnimationCurve* DLMCBOCAGFE; // 0x28
	::System::String* _FDJJDFENJAP_k__BackingField; // 0x30
	::UnityEngine::AnimationCurve* EOBPBCGLEIF; // 0x38
	::System::Single JGNCDFNAIMI; // 0x40
	::System::Single DNGJEEMLAKC; // 0x44
	::System::Single OCBIKJLBCIA; // 0x48
	::NJNMJAPABKB_BBAJLFCMLPJ IGGFFCPALJK; // 0x4C
	::System::Boolean PNMFECPAPGE; // 0x4D
	::System::Boolean MACGNJHNLAJ; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Single EDHGEPJCILP; // 0x50
	::System::Single _NHMMNLLDIOH_k__BackingField; // 0x54
	::System::Single _KHJCCEKKPKE_k__BackingField; // 0x58
	::System::Int32 HLBKHEFJAPH; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean IJGKMHKMADG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_IJGKMHKMADG_OFFSET))(this);
	}

	::System::Boolean JIELJJBLFAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_JIELJJBLFAF_OFFSET))(this);
	}

	::System::Single LNENNKNDMJC(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJNMJAPABKB_LNENNKNDMJC_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void NJBNLDLJPMN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJNMJAPABKB_NJBNLDLJPMN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MOAFIMKBFHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_MOAFIMKBFHH_OFFSET))(this);
	}

	::System::Single MKHFJKMAOPB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_MKHFJKMAOPB_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* MABOKDIJMGC()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_MABOKDIJMGC_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* KLNJAFHIDJM, ::MoleMole::Config::ConfigEntityTimeSlowBase* DLDPHJNBKNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*))((::PBYTE)hIl2Cpp + NJNMJAPABKB_BBOMJDBNHIC_OFFSET))(this, KLNJAFHIDJM, DLDPHJNBKNC);
	}

	::System::Single OAOPOOCDGOH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_OAOPOOCDGOH_OFFSET))(this);
	}

	::System::Single PDAADHDFGKP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_PDAADHDFGKP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityTimeSlowBase* BACEDHGHANL()
	{
		return ((::MoleMole::Config::ConfigEntityTimeSlowBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_BACEDHGHANL_OFFSET))(this);
	}

	::System::Void BMFNKMKNPGA(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NJNMJAPABKB_BMFNKMKNPGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EPCNIBKKPOC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJNMJAPABKB_EPCNIBKKPOC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OENOEFBECOA(::UnityEngine::AnimationCurve* FKCDJKMGJKA, ::System::Single IJBABBEALGL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + NJNMJAPABKB_OENOEFBECOA_OFFSET))(this, FKCDJKMGJKA, IJBABBEALGL);
	}

	::NJNMJAPABKB_BBAJLFCMLPJ BHPMJDGJJMJ()
	{
		return ((::NJNMJAPABKB_BBAJLFCMLPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNMJAPABKB_BHPMJDGJJMJ_OFFSET))(this);
	}

	::System::Void HGIBKOPIEPN(::System::Func_2<::System::Single, ::System::Single>* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + NJNMJAPABKB_HGIBKOPIEPN_OFFSET))(this, FAJHPKBELMF);
	}

	::System::Single HKEPKOGFPHJ(::MoleMole::Config::ConfigEntityTimeSlow* OKDACNLPNAD, ::System::Single HACJFKBLODH)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlow*, ::System::Single))((::PBYTE)hIl2Cpp + NJNMJAPABKB_HKEPKOGFPHJ_OFFSET))(this, OKDACNLPNAD, HACJFKBLODH);
	}
};
