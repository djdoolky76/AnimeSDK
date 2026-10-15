#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDHPIGIAOLE;
class KDIEEDGHNEP_GJHLCBEGEOC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define KDIEEDGHNEP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB356930)
#define KDIEEDGHNEP_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB356BB0)
#define KDIEEDGHNEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3565C0)
#define KDIEEDGHNEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB356600)
#define KDIEEDGHNEP_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB356E50)
#define KDIEEDGHNEP_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB356A80)
#define KDIEEDGHNEP_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB356AA0)
#define KDIEEDGHNEP_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0xB356740)
#define KDIEEDGHNEP_JBEAEAFCGKA_OFFSET UNITYSDK_OFFSET(0xB356A90)
#define KDIEEDGHNEP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB3568C0)
#define KDIEEDGHNEP_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0xB356C70)
#define KDIEEDGHNEP_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0xB356B30)
#define KDIEEDGHNEP_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0xB356780)
#define KDIEEDGHNEP_LHCBJDHABDA_OFFSET UNITYSDK_OFFSET(0xB356E40)

inline static constexpr unsigned int KDIEEDGHNEP_TypeDefinitionIndex = 57403;

	class KDIEEDGHNEP : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x18
		::EDHPIGIAOLE* JHFKOHNKLMH; // 0x20
		::KDIEEDGHNEP_GJHLCBEGEOC* MBOEDFCNCJF; // 0x28
		::System::Void _ctor(::System::String* a1, ::EDHPIGIAOLE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EDHPIGIAOLE*))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_DISPOSE_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH(::KDIEEDGHNEP_GJHLCBEGEOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDIEEDGHNEP_GJHLCBEGEOC*))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_GET_UNIQUENAME_OFFSET))(this);
		}

		::EDHPIGIAOLE* JBEAEAFCGKA()
		{
			return ((::EDHPIGIAOLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_JBEAEAFCGKA_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::KDIEEDGHNEP_GJHLCBEGEOC* LHCBJDHABDA()
		{
			return ((::KDIEEDGHNEP_GJHLCBEGEOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_LHCBJDHABDA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIEEDGHNEP_FIIIDGBIHNB_OFFSET))(this);
		}

	};
