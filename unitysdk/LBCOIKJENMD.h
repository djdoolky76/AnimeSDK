#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"
namespace RPG::Client { class TarotBookProcessContext; }
namespace RPG::GameCore { class ShowTarotBookPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBCOIKJENMD_BDAMPFJALGG_OFFSET UNITYSDK_OFFSET(0xB5EED80)
#define LBCOIKJENMD_BLBEGLIDONF_OFFSET UNITYSDK_OFFSET(0xB5EF500)
#define LBCOIKJENMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB5EE890)
#define LBCOIKJENMD_FLNMNODPCPH_OFFSET UNITYSDK_OFFSET(0xB5EF100)
#define LBCOIKJENMD_HOIOPPIHGEA_OFFSET UNITYSDK_OFFSET(0xB5EF040)
#define LBCOIKJENMD_KDAGPNNEJMA_OFFSET UNITYSDK_OFFSET(0xB5EF400)
#define LBCOIKJENMD_KHABGDMDKKP_OFFSET UNITYSDK_OFFSET(0xB5EF300)
#define LBCOIKJENMD_NDBAJHIEGNO_OFFSET UNITYSDK_OFFSET(0xB5EF200)
#define LBCOIKJENMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5EEC50)

inline static constexpr unsigned int LBCOIKJENMD_TypeDefinitionIndex = 53331;

	class LBCOIKJENMD
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TarotBookPageType, ::System::Action*>* BMNNMNNJKBD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + LBCOIKJENMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BDAMPFJALGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_BDAMPFJALGG_OFFSET))(this);
		}

		::System::Void FLNMNODPCPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_FLNMNODPCPH_OFFSET))(this);
		}

		::System::Void NDBAJHIEGNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_NDBAJHIEGNO_OFFSET))(this);
		}

		::System::Void KHABGDMDKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_KHABGDMDKKP_OFFSET))(this);
		}

		::System::Void KDAGPNNEJMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_KDAGPNNEJMA_OFFSET))(this);
		}

		::System::Void BLBEGLIDONF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_BLBEGLIDONF_OFFSET))(this);
		}

		::RPG::Client::TarotBookProcessContext* HOIOPPIHGEA()
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOIKJENMD_HOIOPPIHGEA_OFFSET))(this);
		}

	};
