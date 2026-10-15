#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ELHDFFLAFGN;
class KDFFHMDFALG;
namespace RPG::Client { class MonoMapPoseSwitcher; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define DEKJNPKKLDA_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0xE5177A0)
#define DEKJNPKKLDA_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0xE517680)
#define DEKJNPKKLDA_CTOR_OFFSET UNITYSDK_OFFSET(0xE5182A0)
#define DEKJNPKKLDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE517630)
#define DEKJNPKKLDA_DOFIIMPJFNM_OFFSET UNITYSDK_OFFSET(0xE517A90)
#define DEKJNPKKLDA_JNFFCFLPKOH_OFFSET UNITYSDK_OFFSET(0xE517E80)
#define DEKJNPKKLDA_KCENHJNJEMH_OFFSET UNITYSDK_OFFSET(0xE518090)
#define DEKJNPKKLDA_LCHCNDGGOMF_OFFSET UNITYSDK_OFFSET(0xE5181D0)
#define DEKJNPKKLDA_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xE517A00)
#define DEKJNPKKLDA_OEMAFFJJAJN_OFFSET UNITYSDK_OFFSET(0xE517820)
#define DEKJNPKKLDA_ONAPODCLPII_OFFSET UNITYSDK_OFFSET(0xE518100)
#define DEKJNPKKLDA_PBLHBHGEFLJ_OFFSET UNITYSDK_OFFSET(0xE517D30)

	class DEKJNPKKLDA : public ::NPEBLEKDAGI
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ELHDFFLAFGN*>* EFOPFCJHJFM; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ELHDFFLAFGN*>* JCIAPBIPPPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_DISPOSE_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOFIIMPJFNM(::RPG::Client::MonoMapPoseSwitcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_DOFIIMPJFNM_OFFSET))(this, a1);
		}

		::System::Void PBLHBHGEFLJ(::RPG::Client::MonoMapPoseSwitcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMapPoseSwitcher*))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_PBLHBHGEFLJ_OFFSET))(this, a1);
		}

		::System::Void JNFFCFLPKOH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_JNFFCFLPKOH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KCENHJNJEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_KCENHJNJEMH_OFFSET))(this, a1);
		}

		::ELHDFFLAFGN* ONAPODCLPII(::UnityEngine::Collider* a1)
		{
			return ((::ELHDFFLAFGN*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_ONAPODCLPII_OFFSET))(this, a1);
		}

		::System::Void LCHCNDGGOMF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_LCHCNDGGOMF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OEMAFFJJAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKJNPKKLDA_OEMAFFJJAJN_OFFSET))(this);
		}

	};
