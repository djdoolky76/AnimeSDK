#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class APDAIKOBAKC;
namespace MoleMole::Config { class ConfigAvatarLayoutCamera; }

#define APDAIKOBAKC_HGEIOHCBNKK_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x12672F40)
#define APDAIKOBAKC_HGEIOHCBNKK__CTOR_OFFSET UNITYSDK_OFFSET(0x12672F30)

inline static constexpr unsigned int APDAIKOBAKC_HGEIOHCBNKK_TypeDefinitionIndex = 89012;

class APDAIKOBAKC_HGEIOHCBNKK : public ::System::Object
{
public:
	::APDAIKOBAKC* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDAIKOBAKC_HGEIOHCBNKK__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigAvatarLayoutCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCamera*))((::PBYTE)hIl2Cpp + APDAIKOBAKC_HGEIOHCBNKK_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
