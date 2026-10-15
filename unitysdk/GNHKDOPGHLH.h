#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class EntityOnEraFlippedListener; }
namespace RPG::GameCore { class TaskContext; }

#define GNHKDOPGHLH_CBDNOOBEHBO_OFFSET UNITYSDK_OFFSET(0x15AFFE80)
#define GNHKDOPGHLH_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFEF20)
#define GNHKDOPGHLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AFF660)
#define GNHKDOPGHLH_NFNLPAJPCLI_OFFSET UNITYSDK_OFFSET(0x15AFFA60)
#define GNHKDOPGHLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AFF0F0)
#define GNHKDOPGHLH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AFF3C0)
#define GNHKDOPGHLH_TICK_OFFSET UNITYSDK_OFFSET(0x15B002B0)

inline static constexpr unsigned int GNHKDOPGHLH_TypeDefinitionIndex = 52763;

	class GNHKDOPGHLH : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KPMOLCKCBHO; // 0x18
		::KFELGAIGHAP* NPOIKFJCHJL; // 0x20
		::KFELGAIGHAP* KFMEEBGHGMF; // 0x28
		::KFELGAIGHAP* FPNIMFDENKJ; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::RPG::GameCore::EntityOnEraFlippedListener* IGHAHBNLIJA; // 0x40
		::System::Boolean HPPIMDBIDKA; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_DISPOSE_OFFSET))(this);
		}

		::System::Void NFNLPAJPCLI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_NFNLPAJPCLI_OFFSET))(this, a1);
		}

		::System::Void CBDNOOBEHBO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_CBDNOOBEHBO_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNHKDOPGHLH_TICK_OFFSET))(this, a1);
		}

	};
