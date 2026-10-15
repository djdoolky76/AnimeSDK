#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define HLEMIOKBLML_ACPEGOAKBDB_OFFSET UNITYSDK_OFFSET(0x15D51650)
#define HLEMIOKBLML_CTOR_OFFSET UNITYSDK_OFFSET(0x15D51820)
#define HLEMIOKBLML_DBFPOGGEOKG_OFFSET UNITYSDK_OFFSET(0x15D517C0)
#define HLEMIOKBLML_KKEOEIBPOOL_OFFSET UNITYSDK_OFFSET(0x15D513F0)
#define HLEMIOKBLML_MMHBFLPJDBP_OFFSET UNITYSDK_OFFSET(0x15D51390)
#define HLEMIOKBLML_NFIIGFGAJHF_OFFSET UNITYSDK_OFFSET(0x15D51290)
#define HLEMIOKBLML_OKIEJEGHDHJ_OFFSET UNITYSDK_OFFSET(0x15D51710)
#define HLEMIOKBLML_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15D511B0)
#define HLEMIOKBLML_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15D51200)
#define HLEMIOKBLML_PJADGFFBJJC_OFFSET UNITYSDK_OFFSET(0x15D514D0)
#define HLEMIOKBLML__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15D51300)

inline static constexpr unsigned int HLEMIOKBLML_TypeDefinitionIndex = 71826;

	class HLEMIOKBLML : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::UnityEngine::RectTransform* DHLNPCEAAML; // 0x68
		::System::Single KOLOABGLOFA; // 0x70
		// static const ::System::String* EDFBNBONLCF; // 0x0
		// static const ::System::String* KPDLCOGBBCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLEMIOKBLML_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MMHBFLPJDBP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLEMIOKBLML_MMHBFLPJDBP_OFFSET))(this, a1);
		}

		::System::Void KKEOEIBPOOL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HLEMIOKBLML_KKEOEIBPOOL_OFFSET))(this, a1, a2);
		}

		::System::Void DBFPOGGEOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML_DBFPOGGEOKG_OFFSET))(this);
		}

		::System::Void ACPEGOAKBDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLEMIOKBLML_ACPEGOAKBDB_OFFSET))(this, a1);
		}

		::System::Void OKIEJEGHDHJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLEMIOKBLML_OKIEJEGHDHJ_OFFSET))(this, a1);
		}

		::System::Void PJADGFFBJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML_PJADGFFBJJC_OFFSET))(this);
		}

		::System::Void NFIIGFGAJHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEMIOKBLML_NFIIGFGAJHF_OFFSET))(this);
		}

	};
