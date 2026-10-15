#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGPKPKOFGIN.h"
namespace RPG::GameCore { class PlayAeonTalk; }
namespace RPG::GameCore { class TaskContext; }

#define LJNNELIOLFN_AAJJHINNKLA_OFFSET UNITYSDK_OFFSET(0xB71CEC0)
#define LJNNELIOLFN_ACJIFACOCJK_OFFSET UNITYSDK_OFFSET(0xB71CBB0)
#define LJNNELIOLFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB71CB20)
#define LJNNELIOLFN_IHPKBAIFPPH_OFFSET UNITYSDK_OFFSET(0xB71D060)
#define LJNNELIOLFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB71CB50)

inline static constexpr unsigned int LJNNELIOLFN_TypeDefinitionIndex = 58262;

	class LJNNELIOLFN : public ::FGPKPKOFGIN
	{
	public:
		::RPG::GameCore::PlayAeonTalk* HMBPCFHKPPI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAeonTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + LJNNELIOLFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNELIOLFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ACJIFACOCJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNELIOLFN_ACJIFACOCJK_OFFSET))(this);
		}

		::System::Void IHPKBAIFPPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNELIOLFN_IHPKBAIFPPH_OFFSET))(this);
		}

		::System::Boolean AAJJHINNKLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJNNELIOLFN_AAJJHINNKLA_OFFSET))(this);
		}

	};
