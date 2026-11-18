#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectLod.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILINBLAKDNL_BAGNELNFCKP_OFFSET UNITYSDK_OFFSET(0x15C1A7F0)
#define ILINBLAKDNL_BBAOCMBENAC_OFFSET UNITYSDK_OFFSET(0x15C1B610)
#define ILINBLAKDNL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15C1B2F0)
#define ILINBLAKDNL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15C1B200)
#define ILINBLAKDNL_DILKBMLJMEM_OFFSET UNITYSDK_OFFSET(0x15C1A840)
#define ILINBLAKDNL_GCBKOEDHHBL_OFFSET UNITYSDK_OFFSET(0x15C1AB40)
#define ILINBLAKDNL_GFMCHDHIOHL_OFFSET UNITYSDK_OFFSET(0x15C1AAE0)
#define ILINBLAKDNL_GPCPLHDDBAK_OFFSET UNITYSDK_OFFSET(0x15C1AD10)
#define ILINBLAKDNL_HADDGEAKMIO_1_OFFSET UNITYSDK_OFFSET(0x15C1B5B0)
#define ILINBLAKDNL_HADDGEAKMIO_OFFSET UNITYSDK_OFFSET(0x15C1AE70)
#define ILINBLAKDNL_HFGJAFDGDCN_OFFSET UNITYSDK_OFFSET(0x15C1A8D0)
#define ILINBLAKDNL_INFEDDCIPHP_1_OFFSET UNITYSDK_OFFSET(0x15C1ACB0)
#define ILINBLAKDNL_INFEDDCIPHP_OFFSET UNITYSDK_OFFSET(0x15C1A560)
#define ILINBLAKDNL_JAHKNDDDJIH_OFFSET UNITYSDK_OFFSET(0x15C1B560)
#define ILINBLAKDNL_KLAJGDACJAA_OFFSET UNITYSDK_OFFSET(0x15C1B0F0)
#define ILINBLAKDNL_MEALIBCKHMN_OFFSET UNITYSDK_OFFSET(0x15C1B140)
#define ILINBLAKDNL_MFPOBMPNKMP_OFFSET UNITYSDK_OFFSET(0x15C1AA90)
#define ILINBLAKDNL_NJBBGAOMDDL_OFFSET UNITYSDK_OFFSET(0x15C1AA40)
#define ILINBLAKDNL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C1A550)

inline static constexpr unsigned int ILINBLAKDNL_TypeDefinitionIndex = 60289;

class ILINBLAKDNL : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectLODDataConfig** StaticGet_DFMKILICPFB()
	{
		return (::MoleMole::Config::EffectLODDataConfig**)Il2CppClass::FromTypeDefinitionIndex(ILINBLAKDNL_TypeDefinitionIndex)->GetStaticField(0x32460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILINBLAKDNL__CCTOR_OFFSET))();
	}

	static ::System::Single INFEDDCIPHP(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::Single(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_INFEDDCIPHP_OFFSET))(JOEFEIGHKPF);
	}

	static ::System::Int32 BAGNELNFCKP(::MoleMole::Config::EffectLODType GMMIFKAJFGG)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_BAGNELNFCKP_OFFSET))(GMMIFKAJFGG);
	}

	static ::System::Boolean DILKBMLJMEM(::System::Byte IHEBKJIBHLF)
	{
		return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + ILINBLAKDNL_DILKBMLJMEM_OFFSET))(IHEBKJIBHLF);
	}

	static ::System::Boolean HFGJAFDGDCN(::MoleMole::Config::EffectLODType KKKANCAKICG, ::MoleMole::Config::EffectLODType NHOEJKHMNGJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EffectLODType, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_HFGJAFDGDCN_OFFSET))(KKKANCAKICG, NHOEJKHMNGJ);
	}

	static ::System::Int32 MFPOBMPNKMP(::MoleMole::Config::EffectLODType GMMIFKAJFGG)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_MFPOBMPNKMP_OFFSET))(GMMIFKAJFGG);
	}

	static ::MoleMole::Config::EffectLODType GFMCHDHIOHL(::System::Int32 GEGOALONGBI)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Int32))((::PBYTE)hIl2Cpp + ILINBLAKDNL_GFMCHDHIOHL_OFFSET))(GEGOALONGBI);
	}

	static ::System::Boolean GCBKOEDHHBL(::MoleMole::Config::EffectLODType CNKELPBIJCG, ::MoleMole::Config::EffectLODType CGLLHNIMFGH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EffectLODType, ::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_GCBKOEDHHBL_OFFSET))(CNKELPBIJCG, CGLLHNIMFGH);
	}

	static ::System::Int32 NJBBGAOMDDL(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_NJBBGAOMDDL_OFFSET))(JOEFEIGHKPF);
	}

	static ::System::Single INFEDDCIPHP_1(::System::Single FJLOMAGMPOI)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + ILINBLAKDNL_INFEDDCIPHP_1_OFFSET))(FJLOMAGMPOI);
	}

	static ::System::Int32 HADDGEAKMIO(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_HADDGEAKMIO_OFFSET))(JOEFEIGHKPF);
	}

	static ::MoleMole::Config::EffectLODType KLAJGDACJAA(::System::Int32 GEGOALONGBI)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Int32))((::PBYTE)hIl2Cpp + ILINBLAKDNL_KLAJGDACJAA_OFFSET))(GEGOALONGBI);
	}

	static ::System::String* MEALIBCKHMN(::MoleMole::Config::EffectLODType JOEFEIGHKPF)
	{
		return ((::System::String*(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_MEALIBCKHMN_OFFSET))(JOEFEIGHKPF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ILINBLAKDNL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::UnityEngine::Rendering::Universal::SceneEffectLod JAHKNDDDJIH(::MoleMole::Config::EffectLODType GMMIFKAJFGG)
	{
		return ((::UnityEngine::Rendering::Universal::SceneEffectLod(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_JAHKNDDDJIH_OFFSET))(GMMIFKAJFGG);
	}

	static ::System::Single HADDGEAKMIO_1(::System::Single FJLOMAGMPOI)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + ILINBLAKDNL_HADDGEAKMIO_1_OFFSET))(FJLOMAGMPOI);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ILINBLAKDNL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Int32 BBAOCMBENAC(::MoleMole::Config::EffectLODType GMMIFKAJFGG)
	{
		return ((::System::Int32(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + ILINBLAKDNL_BBAOCMBENAC_OFFSET))(GMMIFKAJFGG);
	}

	static ::MoleMole::Config::EffectLODType GPCPLHDDBAK(::System::Single GEGOALONGBI)
	{
		return ((::MoleMole::Config::EffectLODType(*)(::System::Single))((::PBYTE)hIl2Cpp + ILINBLAKDNL_GPCPLHDDBAK_OFFSET))(GEGOALONGBI);
	}
};
