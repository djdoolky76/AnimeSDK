#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IEGMIHHJMEP_GGKCBDPBIBF.h"

namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLBLABCDLPG_BCHMEJHKACK_OFFSET UNITYSDK_OFFSET(0x13E56E40)
#define DLBLABCDLPG_FPIMFCICCGA_OFFSET UNITYSDK_OFFSET(0x13E57420)
#define DLBLABCDLPG_ILBLEAGMNIB_OFFSET UNITYSDK_OFFSET(0x13E57BD0)
#define DLBLABCDLPG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13E56E50)
#define DLBLABCDLPG_LJEMIHJCOBN_OFFSET UNITYSDK_OFFSET(0x13E57200)
#define DLBLABCDLPG_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x13E57FC0)
#define DLBLABCDLPG_OPCEHPLAKIA_OFFSET UNITYSDK_OFFSET(0x13E56E30)
#define DLBLABCDLPG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x13E57350)
#define DLBLABCDLPG_PKMHNKOLJEN_OFFSET UNITYSDK_OFFSET(0x13E56EE0)
#define DLBLABCDLPG__CTOR_OFFSET UNITYSDK_OFFSET(0x13E56DF0)

inline static constexpr unsigned int DLBLABCDLPG_TypeDefinitionIndex = 42889;

class DLBLABCDLPG
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle OFPMGEAAALO; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* MGMIDGHIFCP; // 0x38
	::System::Nullable_1<::MoleMole::HollowChessboard::RenderDataAliveType> EKAGALBMJPE; // 0x40

	::System::Void _ctor(::MoleMole::HollowChessboard::SceneAnimRenderSection* NDBCAKKCMLN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*))((::PBYTE)hIl2Cpp + DLBLABCDLPG__CTOR_OFFSET))(this, NDBCAKKCMLN);
	}

	::System::Boolean OPCEHPLAKIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_OPCEHPLAKIA_OFFSET))(this);
	}

	::System::Boolean BCHMEJHKACK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_BCHMEJHKACK_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_LCJEELHBNHG_OFFSET))(this);
	}

	::IEGMIHHJMEP_GGKCBDPBIBF FPIMFCICCGA()
	{
		return ((::IEGMIHHJMEP_GGKCBDPBIBF(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_FPIMFCICCGA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void ILBLEAGMNIB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLBLABCDLPG_ILBLEAGMNIB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void LJEMIHJCOBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_LJEMIHJCOBN_OFFSET))(this);
	}

	::System::Boolean PKMHNKOLJEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBLABCDLPG_PKMHNKOLJEN_OFFSET))(this);
	}
};
