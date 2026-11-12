#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameSandboxConfig; }
namespace System { class String; }

#define ICPGCHAOAGC_COELGKCAONI_OFFSET UNITYSDK_OFFSET(0x16E108C0)
#define ICPGCHAOAGC_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x16E107B0)
#define ICPGCHAOAGC_JPOCJFCHFNF_OFFSET UNITYSDK_OFFSET(0x16E10880)
#define ICPGCHAOAGC_KPOBDDBABJG_OFFSET UNITYSDK_OFFSET(0x16E10620)

inline static constexpr unsigned int ICPGCHAOAGC_TypeDefinitionIndex = 61900;

	class ICPGCHAOAGC : public ::System::Object
	{
	public:
		// static const ::System::String* IHCCAHJHKCL; // 0x0
		static ::System::String* KPOBDDBABJG(::RPG::GameCore::LittleGameType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + ICPGCHAOAGC_KPOBDDBABJG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGameSandboxConfig* HKEPJLDBGIG(::RPG::GameCore::LittleGameType a1)
		{
			return ((::RPG::GameCore::LittleGameSandboxConfig*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + ICPGCHAOAGC_HKEPJLDBGIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGameSandboxConfig* COELGKCAONI()
		{
			return ((::RPG::GameCore::LittleGameSandboxConfig*(*)())((::PBYTE)hIl2Cpp + ICPGCHAOAGC_COELGKCAONI_OFFSET))();
		}

		static ::System::Void JPOCJFCHFNF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICPGCHAOAGC_JPOCJFCHFNF_OFFSET))();
		}

	};
