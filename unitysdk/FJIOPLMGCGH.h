#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }

#define FJIOPLMGCGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1673C000)
#define FJIOPLMGCGH_DBFPOGGEOKG_OFFSET UNITYSDK_OFFSET(0x1673BFA0)
#define FJIOPLMGCGH_DKPHGCDIKGP_OFFSET UNITYSDK_OFFSET(0x1673BEF0)
#define FJIOPLMGCGH_EPINDILAIPA_OFFSET UNITYSDK_OFFSET(0x1673BAE0)
#define FJIOPLMGCGH_HPBCBFNCIFA_OFFSET UNITYSDK_OFFSET(0x1673BE30)
#define FJIOPLMGCGH_KKEOEIBPOOL_OFFSET UNITYSDK_OFFSET(0x1673BBE0)
#define FJIOPLMGCGH_NPGHILMAMPF_OFFSET UNITYSDK_OFFSET(0x1673BD20)
#define FJIOPLMGCGH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1673BA00)
#define FJIOPLMGCGH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1673BA50)
#define FJIOPLMGCGH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1673BB50)

inline static constexpr unsigned int FJIOPLMGCGH_TypeDefinitionIndex = 74055;

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
