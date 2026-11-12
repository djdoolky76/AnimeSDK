#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class EMOGKOKPCAC;
class HONNGJEMGGH;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightBonusResultData; }

#define BCILMJOBEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x170A3580)
#define BCILMJOBEAD_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x170A3530)
#define BCILMJOBEAD_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x170A3410)
#define BCILMJOBEAD_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x170A3350)
#define BCILMJOBEAD_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x170A3290)
#define BCILMJOBEAD_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x170A31C0)
#define BCILMJOBEAD_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x170A33B0)
#define BCILMJOBEAD_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x170A3220)
#define BCILMJOBEAD_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x170A32F0)
#define BCILMJOBEAD_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x170A3470)
#define BCILMJOBEAD_UPDATESPOTLIGHTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0x170A34D0)

inline static constexpr unsigned int BCILMJOBEAD_TypeDefinitionIndex = 65902;

	class BCILMJOBEAD : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightBonusResultData* ADIKIGNBDMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCILMJOBEAD_CTOR_OFFSET))(this);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateSpotLightRefreshCnt(::EMOGKOKPCAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMOGKOKPCAC*))((::PBYTE)hIl2Cpp + BCILMJOBEAD_UPDATESPOTLIGHTREFRESHCNT_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCILMJOBEAD_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
