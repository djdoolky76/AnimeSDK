#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDFFHMDFALG;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAKJDKGIJJJ_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0x1AB640A0)
#define OAKJDKGIJJJ_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x1AB62BC0)
#define OAKJDKGIJJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB649C0)
#define OAKJDKGIJJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB63FB0)
#define OAKJDKGIJJJ_FBMOICEKAAH_OFFSET UNITYSDK_OFFSET(0x1AB64920)
#define OAKJDKGIJJJ_KDOHECEKOBO_OFFSET UNITYSDK_OFFSET(0x1AB62CF0)
#define OAKJDKGIJJJ_KOLDMMMCLKA_OFFSET UNITYSDK_OFFSET(0x1AB645A0)
#define OAKJDKGIJJJ_LCHCNDGGOMF_OFFSET UNITYSDK_OFFSET(0x1AB644C0)
#define OAKJDKGIJJJ_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x1AB64430)
#define OAKJDKGIJJJ_OEMAFFJJAJN_OFFSET UNITYSDK_OFFSET(0x1AB64120)

inline static constexpr unsigned int OAKJDKGIJJJ_TypeDefinitionIndex = 61973;

	class OAKJDKGIJJJ : public ::NPEBLEKDAGI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Object*>* DMLKMOJLCCI; // 0x10
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* INKJCAABJDF; // 0x20
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x28
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_CTOR_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LCHCNDGGOMF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_LCHCNDGGOMF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OEMAFFJJAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_OEMAFFJJAJN_OFFSET))(this);
		}

		::System::Void KDOHECEKOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_KDOHECEKOBO_OFFSET))(this);
		}

		::System::Void KOLDMMMCLKA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_KOLDMMMCLKA_OFFSET))(this, a1);
		}

		::System::Void FBMOICEKAAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAKJDKGIJJJ_FBMOICEKAAH_OFFSET))(this, a1);
		}

	};
