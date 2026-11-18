#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define NCCEKDDNDPH_AEFHJLKHJLL_OFFSET UNITYSDK_OFFSET(0x12C53040)
#define NCCEKDDNDPH_CNKNGNCJGAP_OFFSET UNITYSDK_OFFSET(0x12C53A80)
#define NCCEKDDNDPH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x12C533F0)
#define NCCEKDDNDPH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x12C52E20)
#define NCCEKDDNDPH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x12C54BB0)
#define NCCEKDDNDPH_ELGHLJNAODL_OFFSET UNITYSDK_OFFSET(0x12C53E50)
#define NCCEKDDNDPH_FLIJDMKBHIA_1_OFFSET UNITYSDK_OFFSET(0x12C54390)
#define NCCEKDDNDPH_FLIJDMKBHIA_OFFSET UNITYSDK_OFFSET(0x12C54180)
#define NCCEKDDNDPH_FPDAICPALBL_OFFSET UNITYSDK_OFFSET(0x12C545A0)
#define NCCEKDDNDPH_HIKNGKMLPDL_OFFSET UNITYSDK_OFFSET(0x12C535D0)
#define NCCEKDDNDPH_KPECAGMFAMD_OFFSET UNITYSDK_OFFSET(0x12C54CA0)
#define NCCEKDDNDPH_MHLBGKGOABJ_OFFSET UNITYSDK_OFFSET(0x12C548A0)
#define NCCEKDDNDPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C52E10)

inline static constexpr unsigned int NCCEKDDNDPH_TypeDefinitionIndex = 64110;

class NCCEKDDNDPH : public ::System::Object
{
public:
	static ::MoleMole::Config::CommonDitherConfigs** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::CommonDitherConfigs**)Il2CppClass::FromTypeDefinitionIndex(NCCEKDDNDPH_TypeDefinitionIndex)->GetStaticField(0x4AF10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::CameraDitherLayerData AEFHJLKHJLL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::CameraDitherLayerData(*)(::System::String*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_AEFHJLKHJLL_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::CharacterCameraDitheringData HIKNGKMLPDL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::CharacterCameraDitheringData(*)(::System::String*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_HIKNGKMLPDL_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Boolean CNKNGNCJGAP(::System::String* MCOHLHMKLIP, ::MoleMole::Config::CharacterFadeDitheringDataV2& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2&))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_CNKNGNCJGAP_OFFSET))(MCOHLHMKLIP, LJBPECKCCEA);
	}

	static ::System::Boolean ELGHLJNAODL(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_ELGHLJNAODL_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Boolean FLIJDMKBHIA(::UnityEngine::AnimationCurve*& FAJHPKBELMF)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationCurve*&))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_FLIJDMKBHIA_OFFSET))(FAJHPKBELMF);
	}

	static ::System::Single FPDAICPALBL()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH_FPDAICPALBL_OFFSET))();
	}

	static ::System::Boolean FLIJDMKBHIA_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH_FLIJDMKBHIA_1_OFFSET))();
	}

	static ::MoleMole::Config::SceneObjDitherData MHLBGKGOABJ()
	{
		return ((::MoleMole::Config::SceneObjDitherData(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH_MHLBGKGOABJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::LocalAvatarElevationRatioDitheringData KPECAGMFAMD()
	{
		return ((::MoleMole::Config::LocalAvatarElevationRatioDitheringData(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH_KPECAGMFAMD_OFFSET))();
	}

	static ::MoleMole::Config::CommonDitherConfigs* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::CommonDitherConfigs*(*)())((::PBYTE)hIl2Cpp + NCCEKDDNDPH_COPIDBEMEIE_OFFSET))();
	}
};
