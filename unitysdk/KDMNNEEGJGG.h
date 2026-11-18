#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLBLABCDLPG.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataAliveType.h"

class DENGNOJFDLA;
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection; }
namespace System { class String; }

#define KDMNNEEGJGG_BCHMEJHKACK_OFFSET UNITYSDK_OFFSET(0x16337240)
#define KDMNNEEGJGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16337530)
#define KDMNNEEGJGG_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x16337520)
#define KDMNNEEGJGG_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16337380)
#define KDMNNEEGJGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16337250)
#define KDMNNEEGJGG_OPCEHPLAKIA_OFFSET UNITYSDK_OFFSET(0x16337510)
#define KDMNNEEGJGG__CTOR_OFFSET UNITYSDK_OFFSET(0x163371F0)

inline static constexpr unsigned int KDMNNEEGJGG_TypeDefinitionIndex = 49140;

class KDMNNEEGJGG : public ::DLBLABCDLPG
{
public:
	::System::String* PCNEOKNPFAJ; // 0x48

	::System::Void _ctor(::MoleMole::HollowChessboard::SceneAnimRenderSection* NDBCAKKCMLN, ::MoleMole::HollowChessboard::RenderDataAliveType NJINEMLOICB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::SceneAnimRenderSection*, ::MoleMole::HollowChessboard::RenderDataAliveType))((::PBYTE)hIl2Cpp + KDMNNEEGJGG__CTOR_OFFSET))(this, NDBCAKKCMLN, NJINEMLOICB);
	}

	::System::Boolean BCHMEJHKACK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_BCHMEJHKACK_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_OJENCMOGDKL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Boolean OPCEHPLAKIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_OPCEHPLAKIA_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::DENGNOJFDLA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + KDMNNEEGJGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI);
	}
};
