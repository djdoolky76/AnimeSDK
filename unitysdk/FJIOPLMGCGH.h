#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }

#define FJIOPLMGCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x157C5FD0)
#define FJIOPLMGCGH_DBFPOGGEOKG_OFFSET UNITYSDK_OFFSET(0x157C5F70)
#define FJIOPLMGCGH_DKPHGCDIKGP_OFFSET UNITYSDK_OFFSET(0x157C5EC0)
#define FJIOPLMGCGH_EPINDILAIPA_OFFSET UNITYSDK_OFFSET(0x157C5AB0)
#define FJIOPLMGCGH_HPBCBFNCIFA_OFFSET UNITYSDK_OFFSET(0x157C5E00)
#define FJIOPLMGCGH_KKEOEIBPOOL_OFFSET UNITYSDK_OFFSET(0x157C5BB0)
#define FJIOPLMGCGH_NPGHILMAMPF_OFFSET UNITYSDK_OFFSET(0x157C5CF0)
#define FJIOPLMGCGH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x157C59D0)
#define FJIOPLMGCGH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x157C5A20)
#define FJIOPLMGCGH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x157C5B20)

inline static constexpr unsigned int FJIOPLMGCGH_TypeDefinitionIndex = 72025;

	class FJIOPLMGCGH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* DDMJJAKCOID; // 0x60
		::System::Single GCGPHAMIHLH; // 0x68
		// static const ::System::String* BHGCAHHJMEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KKEOEIBPOOL(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_KKEOEIBPOOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DBFPOGGEOKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_DBFPOGGEOKG_OFFSET))(this);
		}

		::System::Void HPBCBFNCIFA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_HPBCBFNCIFA_OFFSET))(this, a1);
		}

		::System::Void DKPHGCDIKGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_DKPHGCDIKGP_OFFSET))(this, a1);
		}

		::System::Void NPGHILMAMPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_NPGHILMAMPF_OFFSET))(this);
		}

		::System::Void EPINDILAIPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIOPLMGCGH_EPINDILAIPA_OFFSET))(this);
		}

	};
