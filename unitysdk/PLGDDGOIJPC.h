#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ABBEDLEPBAO;
namespace UnityEngine { class AnimationCurve; }

#define PLGDDGOIJPC_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x1C1DC560)
#define PLGDDGOIJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DC710)

inline static constexpr unsigned int PLGDDGOIJPC_TypeDefinitionIndex = 56559;

class PLGDDGOIJPC : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* DOGGDBLNINP; // 0x10
	::UnityEngine::AnimationCurve* IMAKLAHCANN; // 0x18
	::System::Single JLKIFFFBJCJ; // 0x20
	::UnityEngine::Vector2 KPIJGPJKBAI; // 0x24
	::System::Single LEEOOFEBJFG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGDDGOIJPC__CTOR_OFFSET))(this);
	}

	::ABBEDLEPBAO* NMBJIKEJKCK()
	{
		return ((::ABBEDLEPBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGDDGOIJPC_NMBJIKEJKCK_OFFSET))(this);
	}
};
