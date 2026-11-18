#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DGDOJIBGKCP.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNIEKELALEM;
class GIIFGADGIBA;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define BFPBIJOOENO_ENADCIEBIBL_1_OFFSET UNITYSDK_OFFSET(0xF798E80)
#define BFPBIJOOENO_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0xF797E60)
#define BFPBIJOOENO_FJMPDHGHJMM_OFFSET UNITYSDK_OFFSET(0xF798E40)
#define BFPBIJOOENO_HFPCOJDLHDI_OFFSET UNITYSDK_OFFSET(0xF798FC0)
#define BFPBIJOOENO_KCBBOLCEEKB_OFFSET UNITYSDK_OFFSET(0xF798990)
#define BFPBIJOOENO_MEOACADPMHM_OFFSET UNITYSDK_OFFSET(0xF7983B0)
#define BFPBIJOOENO_OJKEPGJGKEL_OFFSET UNITYSDK_OFFSET(0xF798560)
#define BFPBIJOOENO__CTOR_OFFSET UNITYSDK_OFFSET(0xF799010)

inline static constexpr unsigned int BFPBIJOOENO_TypeDefinitionIndex = 43662;

class BFPBIJOOENO : public ::System::Object
{
public:
	::System::Func_1<::UnityEngine::GameObject*>* NBEINCEFGLN; // 0x10
	::DNIEKELALEM* LCACDMJCGKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPBIJOOENO__CTOR_OFFSET))(this);
	}

	::System::Void ENADCIEBIBL(::GIIFGADGIBA* KBACEFCPNPM)
	{
		return ((::System::Void(*)(::PVOID, ::GIIFGADGIBA*))((::PBYTE)hIl2Cpp + BFPBIJOOENO_ENADCIEBIBL_OFFSET))(this, KBACEFCPNPM);
	}

	::System::Void FJMPDHGHJMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPBIJOOENO_FJMPDHGHJMM_OFFSET))(this);
	}

	::System::Void ENADCIEBIBL_1(::System::Collections::Generic::List_1<::GIIFGADGIBA*>* BHEKBMCEJON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GIIFGADGIBA*>*))((::PBYTE)hIl2Cpp + BFPBIJOOENO_ENADCIEBIBL_1_OFFSET))(this, BHEKBMCEJON);
	}

	::System::Void HFPCOJDLHDI(::System::Collections::Generic::List_1<::DGDOJIBGKCP>* OIDHEJLPJEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DGDOJIBGKCP>*))((::PBYTE)hIl2Cpp + BFPBIJOOENO_HFPCOJDLHDI_OFFSET))(this, OIDHEJLPJEJ);
	}

	static ::System::Void KCBBOLCEEKB(::UnityEngine::Vector2 KIAIIPAMCBC, ::UnityEngine::Vector2 HJNBDBFOHHK, ::UnityEngine::RectTransform* EMDOIDLAFDB)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + BFPBIJOOENO_KCBBOLCEEKB_OFFSET))(KIAIIPAMCBC, HJNBDBFOHHK, EMDOIDLAFDB);
	}

	::MoleMole::Vector2Int MEOACADPMHM(::UnityEngine::Vector2 IEFBHIDIPPL)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BFPBIJOOENO_MEOACADPMHM_OFFSET))(this, IEFBHIDIPPL);
	}

	::System::Boolean OJKEPGJGKEL(::MoleMole::Vector2Int IKNOCMOCLIL, ::UnityEngine::Vector3& GIAEPMKCBIB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BFPBIJOOENO_OJKEPGJGKEL_OFFSET))(this, IKNOCMOCLIL, GIAEPMKCBIB);
	}
};
