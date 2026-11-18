#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig_Item.h"
#include "unitysdk/System/Nullable_1.h"

class IAEOCKOHIMH;
namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCGLBFEBMJA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1B773910)
#define OCGLBFEBMJA_BOHEPAHKJHG_OFFSET UNITYSDK_OFFSET(0x1B773C10)
#define OCGLBFEBMJA_KOHHPJIPJFM_OFFSET UNITYSDK_OFFSET(0x1B773DB0)
#define OCGLBFEBMJA_KPHMPOMJLNB_OFFSET UNITYSDK_OFFSET(0x1B773D60)
#define OCGLBFEBMJA_PAGJLKELMBM_OFFSET UNITYSDK_OFFSET(0x1B773D10)
#define OCGLBFEBMJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B773900)

inline static constexpr unsigned int OCGLBFEBMJA_TypeDefinitionIndex = 90789;

class OCGLBFEBMJA : public ::System::Object
{
public:
	::System::String* CHAJLGPIHHC; // 0x10
	::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* ADNIKHNBLMF; // 0x18
	::System::Single HLPHOMPOMNP; // 0x20
	::System::Single PFCHDMKIALG; // 0x24
	::System::Single NENMHNDHILC; // 0x28
	::MoleMole::Config::CutSceneEndMode AFEBKIPDLOP; // 0x2C
	::System::Boolean GBAFOOEKFEP; // 0x2D
	::System::Byte _padding0[0x2];
	::System::Single OBHLKOPGJEJ; // 0x30
	::System::Single JDLLNFDCPPL; // 0x34
	::System::Single APAJMMLICLJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGLBFEBMJA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::SceneChessboardCutSceneConfig* AFJNJENDJNJ, ::MoleMole::Config::ScenePerformConfig* BPDEPOPFIGL, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item CENAIFFAGFP, ::System::Boolean MIODLJAIOFN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*, ::MoleMole::Config::ScenePerformConfig*, ::MoleMole::Level::OverrideScenePerformDelayConfig_Item, ::System::Boolean))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_BBOMJDBNHIC_OFFSET))(this, AFJNJENDJNJ, BPDEPOPFIGL, CENAIFFAGFP, MIODLJAIOFN);
	}

	::System::Void BOHEPAHKJHG(::IAEOCKOHIMH* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::IAEOCKOHIMH*))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_BOHEPAHKJHG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Nullable_1<::System::Single> PAGJLKELMBM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_PAGJLKELMBM_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> KPHMPOMJLNB()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_KPHMPOMJLNB_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> KOHHPJIPJFM()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGLBFEBMJA_KOHHPJIPJFM_OFFSET))(this);
	}
};
