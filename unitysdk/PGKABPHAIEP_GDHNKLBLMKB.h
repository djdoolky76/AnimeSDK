#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PGKABPHAIEP;
namespace MoleMole::Config { class AnimationCurveLibrary; }

#define PGKABPHAIEP_GDHNKLBLMKB_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x11979E30)
#define PGKABPHAIEP_GDHNKLBLMKB__CTOR_OFFSET UNITYSDK_OFFSET(0x11979E20)

inline static constexpr unsigned int PGKABPHAIEP_GDHNKLBLMKB_TypeDefinitionIndex = 92286;

class PGKABPHAIEP_GDHNKLBLMKB : public ::System::Object
{
public:
	::PGKABPHAIEP* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKABPHAIEP_GDHNKLBLMKB__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::AnimationCurveLibrary* MPEGILBLDNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimationCurveLibrary*))((::PBYTE)hIl2Cpp + PGKABPHAIEP_GDHNKLBLMKB_BHEKKKNPHAM_OFFSET))(this, MPEGILBLDNC);
	}
};
