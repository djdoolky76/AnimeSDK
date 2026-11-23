#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Common { class MonoTraitItem; }

#define E3D0A1B6863C5334_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x1C2D6C0)
#define E3D0A1B6863C5334_F5E4117D72E14A57_OFFSET UNITYSDK_OFFSET(0x1C2D760)
#define E3D0A1B6863C5334_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1C2D7C0)
#define E3D0A1B6863C5334__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3D0A1B6863C5334_TypeDefinitionIndex = 9261;

class E3D0A1B6863C5334 : public ::System::Object
{
public:
	::System::UInt32 E7AD5DA77BB56EFB; // 0x10
	::System::Byte _padding0[0x4];
	::ABC::Common::MonoTraitItem* A5313752F29C26FC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3D0A1B6863C5334__CTOR_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3D0A1B6863C5334_FCC7443573DD0222_OFFSET))(this);
	}

	static ::E3D0A1B6863C5334* BD9CD726F874B523(::ABC::Common::MonoTraitItem* BBB1ADE1E8D6E562)
	{
		return ((::E3D0A1B6863C5334*(*)(::ABC::Common::MonoTraitItem*))((::PBYTE)hIl2Cpp + E3D0A1B6863C5334_BD9CD726F874B523_OFFSET))(BBB1ADE1E8D6E562);
	}

	::System::Void F5E4117D72E14A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3D0A1B6863C5334_F5E4117D72E14A57_OFFSET))(this);
	}
};
