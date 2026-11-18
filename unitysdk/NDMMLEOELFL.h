#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ABBEDLEPBAO;
namespace UnityEngine { class AnimationCurve; }

#define NDMMLEOELFL_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x13137920)
#define NDMMLEOELFL__CTOR_OFFSET UNITYSDK_OFFSET(0x13137A80)

inline static constexpr unsigned int NDMMLEOELFL_TypeDefinitionIndex = 63774;

class NDMMLEOELFL : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IMAKLAHCANN; // 0x10
	::UnityEngine::AnimationCurve* DOGGDBLNINP; // 0x18
	::System::Single JLKIFFFBJCJ; // 0x20
	::UnityEngine::Vector2 KPIJGPJKBAI; // 0x24
	::System::Single LEEOOFEBJFG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMLEOELFL__CTOR_OFFSET))(this);
	}

	::ABBEDLEPBAO* NMBJIKEJKCK()
	{
		return ((::ABBEDLEPBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMLEOELFL_NMBJIKEJKCK_OFFSET))(this);
	}
};
