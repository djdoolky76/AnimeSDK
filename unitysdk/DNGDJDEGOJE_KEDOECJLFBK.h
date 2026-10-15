#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
class NPHCPLDMFLJ;
namespace RPG::GameCore { class EventManager; }
namespace System { class Action; }

#define DNGDJDEGOJE_KEDOECJLFBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1194F2D0)
#define DNGDJDEGOJE_KEDOECJLFBK_DHKPEPMOPMK_OFFSET UNITYSDK_OFFSET(0x1194EFE0)
#define DNGDJDEGOJE_KEDOECJLFBK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1194EF40)
#define DNGDJDEGOJE_KEDOECJLFBK_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x1194F180)
#define DNGDJDEGOJE_KEDOECJLFBK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1194F140)

inline static constexpr unsigned int DNGDJDEGOJE_KEDOECJLFBK_TypeDefinitionIndex = 58867;

	class DNGDJDEGOJE_KEDOECJLFBK : public ::System::Object
	{
	public:
		::NPHCPLDMFLJ* JELPBNHCPCO; // 0x10
		::System::Action* BJLJAHMLKIO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KEDOECJLFBK_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KEDOECJLFBK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DHKPEPMOPMK(::RPG::GameCore::EventManager* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::System::Action*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KEDOECJLFBK_DHKPEPMOPMK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KEDOECJLFBK_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KEDOECJLFBK_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
