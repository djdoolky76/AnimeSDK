#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OKLOANFCOAB.h"
#include "unitysdk/PDPGBDMDOOH.h"

class GOIKJCHFIIO;
class MEKLIGLLJKM;
class MIKBKMMKEML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine::Events { class UnityAction; }

#define NEIFCFMLIPC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1AE020A0)
#define NEIFCFMLIPC_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x1AE03500)
#define NEIFCFMLIPC_ECKLKNLPGAG_OFFSET UNITYSDK_OFFSET(0x1AE035A0)
#define NEIFCFMLIPC_ELIIIAODLME_OFFSET UNITYSDK_OFFSET(0x1AE02BF0)
#define NEIFCFMLIPC_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x1AE02200)
#define NEIFCFMLIPC_FPJDENKCJGD_OFFSET UNITYSDK_OFFSET(0x1AE02C80)
#define NEIFCFMLIPC_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1AE02AE0)
#define NEIFCFMLIPC_IHNGNMKFHFC_OFFSET UNITYSDK_OFFSET(0x1AE03400)
#define NEIFCFMLIPC_JDNGLHENBCL_OFFSET UNITYSDK_OFFSET(0x1AE02B70)
#define NEIFCFMLIPC_LBDFFINOPPH_OFFSET UNITYSDK_OFFSET(0x1AE03240)
#define NEIFCFMLIPC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1AE02380)
#define NEIFCFMLIPC_OJECFNJMONF_OFFSET UNITYSDK_OFFSET(0x1AE03370)
#define NEIFCFMLIPC_OKJHMJCJDLE_OFFSET UNITYSDK_OFFSET(0x1AE02760)
#define NEIFCFMLIPC_OLGPCGGHBDJ_OFFSET UNITYSDK_OFFSET(0x1AE02400)
#define NEIFCFMLIPC_OPIEJOEGNOE_OFFSET UNITYSDK_OFFSET(0x1AE032D0)
#define NEIFCFMLIPC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1AE02270)
#define NEIFCFMLIPC_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1AE02A30)
#define NEIFCFMLIPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE02990)
#define NEIFCFMLIPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE02980)

inline static constexpr unsigned int NEIFCFMLIPC_TypeDefinitionIndex = 67562;

class NEIFCFMLIPC : public ::PDPGBDMDOOH
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_PDKIBGLKHKH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NEIFCFMLIPC_TypeDefinitionIndex)->GetStaticField(0x397F0);
	}
	::MIKBKMMKEML* GAHHEPFNPHH; // 0x18
	::UnityEngine::SpriteRenderer* MPCCAGODNJE; // 0x20
	::System::Boolean GLCANGDCLGB; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single MNJHGNACEMJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIFCFMLIPC__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::SpriteRenderer* LPFMJMABGNH, ::GOIKJCHFIIO* CENDLIKDNJA, ::UnityEngine::MaterialPropertyBlock* FKPECANBGPF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::GOIKJCHFIIO*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_BBOMJDBNHIC_OFFSET))(this, LPFMJMABGNH, CENDLIKDNJA, FKPECANBGPF);
	}

	::System::Void EPCHAOPOCPP(::MEKLIGLLJKM* AMPAPADPPKE, ::OKLOANFCOAB CAHGKNMMIPG)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*, ::OKLOANFCOAB))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_EPCHAOPOCPP_OFFSET))(this, AMPAPADPPKE, CAHGKNMMIPG);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OLGPCGGHBDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_OLGPCGGHBDJ_OFFSET))(this);
	}

	::System::Void OKJHMJCJDLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_OKJHMJCJDLE_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::UnityEngine::SpriteRenderer* MIALFKCCCPI, ::GOIKJCHFIIO* KMGKAIDEIBA, ::UnityEngine::MaterialPropertyBlock* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::GOIKJCHFIIO*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Void JDNGLHENBCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_JDNGLHENBCL_OFFSET))(this);
	}

	::System::Void ELIIIAODLME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_ELIIIAODLME_OFFSET))(this);
	}

	static ::System::Void FPJDENKCJGD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIFCFMLIPC_FPJDENKCJGD_OFFSET))();
	}

	::System::Void LBDFFINOPPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_LBDFFINOPPH_OFFSET))(this);
	}

	::System::Void OPIEJOEGNOE(::MEKLIGLLJKM* MIALFKCCCPI, ::OKLOANFCOAB KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*, ::OKLOANFCOAB))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_OPIEJOEGNOE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void OJECFNJMONF(::UnityEngine::Events::UnityAction* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_OJECFNJMONF_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void IHNGNMKFHFC(::UnityEngine::Events::UnityAction* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_IHNGNMKFHFC_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECKLKNLPGAG(::OKLOANFCOAB CAHGKNMMIPG, ::System::Int32 IFBIKDHCCOF, ::System::Boolean GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::OKLOANFCOAB, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NEIFCFMLIPC_ECKLKNLPGAG_OFFSET))(this, CAHGKNMMIPG, IFBIKDHCCOF, GDINHGLCODO);
	}
};
