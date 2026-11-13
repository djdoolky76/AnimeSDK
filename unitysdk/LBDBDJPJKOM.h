#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;

#define LBDBDJPJKOM_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1B294300)
#define LBDBDJPJKOM_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x1B2962B0)
#define LBDBDJPJKOM_CIEIIJMIDHD_OFFSET UNITYSDK_OFFSET(0x1B293BF0)
#define LBDBDJPJKOM_CKDGPFPIMGN_OFFSET UNITYSDK_OFFSET(0x1B294680)
#define LBDBDJPJKOM_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1B2939F0)
#define LBDBDJPJKOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B296300)
#define LBDBDJPJKOM_DAJODNPGOPK_OFFSET UNITYSDK_OFFSET(0x1B295B10)
#define LBDBDJPJKOM_EHBEDJNDEEH_OFFSET UNITYSDK_OFFSET(0x1B2948C0)
#define LBDBDJPJKOM_FMLHIMPCPCE_OFFSET UNITYSDK_OFFSET(0x1B2944D0)
#define LBDBDJPJKOM_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1B294ED0)
#define LBDBDJPJKOM_LGJPDEJKFIF_OFFSET UNITYSDK_OFFSET(0x1B2940C0)
#define LBDBDJPJKOM_NJICILCJDOF_OFFSET UNITYSDK_OFFSET(0x1B294D40)
#define LBDBDJPJKOM_NPFOPILMLLN_OFFSET UNITYSDK_OFFSET(0x1B293E60)
#define LBDBDJPJKOM_OEKACJBOFFN_OFFSET UNITYSDK_OFFSET(0x1B294B00)
#define LBDBDJPJKOM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1B2960C0)
#define LBDBDJPJKOM_POGJAJIENCI_OFFSET UNITYSDK_OFFSET(0x1B295320)

inline static constexpr unsigned int LBDBDJPJKOM_TypeDefinitionIndex = 79357;

	class LBDBDJPJKOM : public ::KBLKHFKCCBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void NPFOPILMLLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_NPFOPILMLLN_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void LGJPDEJKFIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_LGJPDEJKFIF_OFFSET))(this);
		}

		::System::Void CKDGPFPIMGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_CKDGPFPIMGN_OFFSET))(this);
		}

		::System::Void OEKACJBOFFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_OEKACJBOFFN_OFFSET))(this);
		}

		::System::Void EHBEDJNDEEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_EHBEDJNDEEH_OFFSET))(this);
		}

		::System::Void NJICILCJDOF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_NJICILCJDOF_OFFSET))(this, a1);
		}

		::System::Void CIEIIJMIDHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_CIEIIJMIDHD_OFFSET))(this);
		}

		::System::Void FMLHIMPCPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_FMLHIMPCPCE_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState POGJAJIENCI(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_POGJAJIENCI_OFFSET))(this, a1);
		}

		::System::Void DAJODNPGOPK(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_DAJODNPGOPK_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDBDJPJKOM_BPMGPFLHPLC_OFFSET))(this);
		}

	};
