#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HMHMKIPCHDE;
namespace MoleMole::Config { class ConfigEntitySkills; }

#define HMHMKIPCHDE_JHJEMJFGKJJ_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15B6D910)
#define HMHMKIPCHDE_JHJEMJFGKJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6D900)

inline static constexpr unsigned int HMHMKIPCHDE_JHJEMJFGKJJ_TypeDefinitionIndex = 86827;

class HMHMKIPCHDE_JHJEMJFGKJJ : public ::System::Object
{
public:
	::HMHMKIPCHDE* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHMKIPCHDE_JHJEMJFGKJJ__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigEntitySkills* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkills*))((::PBYTE)hIl2Cpp + HMHMKIPCHDE_JHJEMJFGKJJ_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
