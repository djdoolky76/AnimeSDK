#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBKCGDGCOEP.h"
namespace RPG::Client { class UIPrefabLoader; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define JKODLLFCGDH_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x17B33400)
#define JKODLLFCGDH_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x17B33570)
#define JKODLLFCGDH_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x17B335C0)
#define JKODLLFCGDH_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x17B33490)
#define JKODLLFCGDH_CTOR_OFFSET UNITYSDK_OFFSET(0x17B330A0)
#define JKODLLFCGDH_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x17B330D0)
#define JKODLLFCGDH_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x17B33600)
#define JKODLLFCGDH_JBEHEILLOEG_OFFSET UNITYSDK_OFFSET(0x17B334E0)

inline static constexpr unsigned int JKODLLFCGDH_TypeDefinitionIndex = 50801;

	class JKODLLFCGDH
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x50
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x58
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x60
		::System::Single HBDJCFFDGDD; // 0x68
		::System::Single PBLGHIGPEIP; // 0x6C
		::System::Void _ctor(::DBKCGDGCOEP a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBKCGDGCOEP))((::PBYTE)hIl2Cpp + JKODLLFCGDH_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JKODLLFCGDH_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_FJMKAOHGMHH_OFFSET))(this);
		}

		::System::Void JBEHEILLOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKODLLFCGDH_JBEHEILLOEG_OFFSET))(this);
		}

	};
