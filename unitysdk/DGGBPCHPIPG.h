#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMAPCLKFJGK.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DGGBPCHPIPG_AIBLOJACNPE_OFFSET UNITYSDK_OFFSET(0xE846710)
#define DGGBPCHPIPG_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0xE846430)
#define DGGBPCHPIPG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8467A0)
#define DGGBPCHPIPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE846320)
#define DGGBPCHPIPG_LGIOFKKGMCN_OFFSET UNITYSDK_OFFSET(0xE846680)

	class DGGBPCHPIPG : public ::PMAPCLKFJGK
	{
	public:
		::RPG::Client::PhotoGraphTag GEDHIHNLNCG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGBPCHPIPG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGBPCHPIPG_DISPOSE_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DGGBPCHPIPG_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LGIOFKKGMCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGGBPCHPIPG_LGIOFKKGMCN_OFFSET))(this, a1);
		}

		::System::Void AIBLOJACNPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGGBPCHPIPG_AIBLOJACNPE_OFFSET))(this, a1);
		}

	};
