#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIGODLIKGDA_BMHKJEJMJCI.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChangeBG_ChangeBGType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define JIGODLIKGDA_EPAHFCJLIEO_CMCHDDFGAFE_OFFSET UNITYSDK_OFFSET(0x1945D1F0)
#define JIGODLIKGDA_EPAHFCJLIEO_FEOKMCHAPJF_OFFSET UNITYSDK_OFFSET(0x1945D240)
#define JIGODLIKGDA_EPAHFCJLIEO_IMOEMBJFDKC_OFFSET UNITYSDK_OFFSET(0x1945D1E0)
#define JIGODLIKGDA_EPAHFCJLIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1945D230)

inline static constexpr unsigned int JIGODLIKGDA_EPAHFCJLIEO_TypeDefinitionIndex = 58742;

class JIGODLIKGDA_EPAHFCJLIEO : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* OFHIJHKJLDJ; // 0x10
	::System::String* _KGKBBAKPDOE_k__BackingField; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> CGBEGPJEDPK; // 0x20
	::System::Byte _padding0[0x8];
	::System::Single FOLAOFBAGGH; // 0x30
	::System::Single DDPANBDKBJB; // 0x34
	::System::Single MDPPNMIPDMP; // 0x38
	::System::Nullable_1<::MoleMole::Vector2Int> LIEOKCFGKCA; // 0x3C
	::System::Byte _padding1[0x4];
	::MoleMole::Config::ConfigHollowChangeBG_ChangeBGType KFJIDELKONJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_EPAHFCJLIEO__CTOR_OFFSET))(this);
	}

	::System::String* IMOEMBJFDKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_EPAHFCJLIEO_IMOEMBJFDKC_OFFSET))(this);
	}

	::JIGODLIKGDA_BMHKJEJMJCI CMCHDDFGAFE()
	{
		return ((::JIGODLIKGDA_BMHKJEJMJCI(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_EPAHFCJLIEO_CMCHDDFGAFE_OFFSET))(this);
	}

	::System::Void FEOKMCHAPJF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_EPAHFCJLIEO_FEOKMCHAPJF_OFFSET))(this, EGEGIMGMJHN);
	}
};
