#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"

namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class IScenePerformConfig; }
namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNGCOCGLOHD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xFA75FE0)
#define MNGCOCGLOHD_DEPMJALDDDC_OFFSET UNITYSDK_OFFSET(0x14DF6DB0)
#define MNGCOCGLOHD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14DF6920)
#define MNGCOCGLOHD_EHFJPOCELLA_OFFSET UNITYSDK_OFFSET(0x14DF6A10)
#define MNGCOCGLOHD_IOOMEOKKPAJ_OFFSET UNITYSDK_OFFSET(0x14DF6740)
#define MNGCOCGLOHD_KDMOAFNOJCD_OFFSET UNITYSDK_OFFSET(0xFA76200)
#define MNGCOCGLOHD_OLPHHJOPIAB_OFFSET UNITYSDK_OFFSET(0x14DF7140)

inline static constexpr unsigned int MNGCOCGLOHD_TypeDefinitionIndex = 70147;

class MNGCOCGLOHD : public ::System::Object
{
public:
	static ::MoleMole::Config::ScenePerformConfig** StaticGet_JBOCLPCCKKD()
	{
		return (::MoleMole::Config::ScenePerformConfig**)Il2CppClass::FromTypeDefinitionIndex(MNGCOCGLOHD_TypeDefinitionIndex)->GetStaticField(0x32D80);
	}

	static ::MoleMole::Config::ScenePerformConfig* IOOMEOKKPAJ()
	{
		return ((::MoleMole::Config::ScenePerformConfig*(*)())((::PBYTE)hIl2Cpp + MNGCOCGLOHD_IOOMEOKKPAJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>* EHFJPOCELLA(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::IScenePerformConfig*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_EHFJPOCELLA_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Config::CutScenePerformConfig* DEPMJALDDDC(::System::String* FLIOAEBIJDH)
	{
		return ((::MoleMole::Config::CutScenePerformConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_DEPMJALDDDC_OFFSET))(FLIOAEBIJDH);
	}

	static ::MoleMole::Config::SceneEntityCutSceneConfig* OLPHHJOPIAB(::System::Int32 GIAOKGFENJD)
	{
		return ((::MoleMole::Config::SceneEntityCutSceneConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_OLPHHJOPIAB_OFFSET))(GIAOKGFENJD);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::SceneAvatarCutSceneConfig* KDMOAFNOJCD(::System::Int32 LEHABHCOMGH, ::MoleMole::Level::OverrideScenePerformDelayConfig& EKPAIOGJEPO)
	{
		return ((::MoleMole::Config::SceneAvatarCutSceneConfig*(*)(::System::Int32, ::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_KDMOAFNOJCD_OFFSET))(LEHABHCOMGH, EKPAIOGJEPO);
	}
};
