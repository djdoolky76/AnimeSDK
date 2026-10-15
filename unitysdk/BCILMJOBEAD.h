#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightBonusResultData; }

#define BCILMJOBEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9DC00)
#define BCILMJOBEAD_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x15E9DBB0)
#define BCILMJOBEAD_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x15E9DAF0)
#define BCILMJOBEAD_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x15E9DA30)
#define BCILMJOBEAD_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x15E9D970)
#define BCILMJOBEAD_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x15E9D8A0)
#define BCILMJOBEAD_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x15E9DA90)
#define BCILMJOBEAD_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x15E9D900)
#define BCILMJOBEAD_UPDATEORB_OFFSET UNITYSDK_OFFSET(0x15E9D9D0)
#define BCILMJOBEAD_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0x15E9DB50)

inline static constexpr unsigned int BCILMJOBEAD_TypeDefinitionIndex = 64436;

	class BCILMJOBEAD : public ::AMCOEFHHBPO
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

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCILMJOBEAD_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
