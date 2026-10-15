#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GCNENGFLDHJ;

#define GCNENGFLDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFDE10)
#define GCNENGFLDHJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFDD00)

inline static constexpr unsigned int GCNENGFLDHJ_TypeDefinitionIndex = 15407;

	class GCNENGFLDHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::UpgradeAvatarSubRelicType AMAPBCEEKFP; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNENGFLDHJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GCNENGFLDHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCNENGFLDHJ*))((::PBYTE)hIl2Cpp + GCNENGFLDHJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
