#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace MoleMole { class MonsterSpecialIdleEntry; }

#define INDIHHGLKBI_CJDLFPJOMPK_OFFSET UNITYSDK_OFFSET(0x14A34A70)
#define INDIHHGLKBI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14A34760)
#define INDIHHGLKBI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14A349A0)
#define INDIHHGLKBI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14A346C0)
#define INDIHHGLKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A34630)

inline static constexpr unsigned int INDIHHGLKBI_TypeDefinitionIndex = 73498;

class INDIHHGLKBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDIHHGLKBI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INDIHHGLKBI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MonsterSpecialIdleConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::MonsterSpecialIdleConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INDIHHGLKBI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INDIHHGLKBI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean CJDLFPJOMPK(::System::Int32 GIAOKGFENJD, ::System::Int32 DDNJJNELHMN, ::MoleMole::MonsterSpecialIdleEntry*& AAIJGGIEOGK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::MonsterSpecialIdleEntry*&))((::PBYTE)hIl2Cpp + INDIHHGLKBI_CJDLFPJOMPK_OFFSET))(this, GIAOKGFENJD, DDNJJNELHMN, AAIJGGIEOGK);
	}
};
