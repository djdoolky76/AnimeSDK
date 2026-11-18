#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/JHNEKILCCAA_LKAPPEKPEBE.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHNEKILCCAA_BOCBBBPPDHI_OFFSET UNITYSDK_OFFSET(0x19812720)
#define JHNEKILCCAA_DJBICMGNGGO_OFFSET UNITYSDK_OFFSET(0x19813390)
#define JHNEKILCCAA_IMPJHIANDEB_1_OFFSET UNITYSDK_OFFSET(0x198125C0)
#define JHNEKILCCAA_IMPJHIANDEB_OFFSET UNITYSDK_OFFSET(0x19812410)
#define JHNEKILCCAA_JHFBHJDJDPI_OFFSET UNITYSDK_OFFSET(0x19812670)
#define JHNEKILCCAA_OFMNCOIHEJH_OFFSET UNITYSDK_OFFSET(0x19812990)
#define JHNEKILCCAA_OGBBICMIMOD_OFFSET UNITYSDK_OFFSET(0x19812F30)
#define JHNEKILCCAA_OIFCMDBFHFJ_OFFSET UNITYSDK_OFFSET(0x19812AE0)
#define JHNEKILCCAA__CTOR_OFFSET UNITYSDK_OFFSET(0x19812210)

inline static constexpr unsigned int JHNEKILCCAA_TypeDefinitionIndex = 68311;

class JHNEKILCCAA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* MHFOBFCFJEI; // 0x10
	::Il2CppArray<::System::Boolean>* PJHOJEAABMA; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Bounds, ::UnityEngine::Matrix4x4>>* PDMNLGOAPKC; // 0x20
	::UnityEngine::Vector3 IEGPNPMPGAK; // 0x28
	::System::Int32 CKLLGPBOBFJ; // 0x34
	::System::Int32 GNKAAJPCDPH; // 0x38
	::UnityEngine::Vector2 OLIOJIOOHIA; // 0x3C
	::System::Int32 POMCMJAEHNI; // 0x44
	::System::ValueTuple_2<::System::Single, ::System::Single> CMLFEGFDGBL; // 0x48
	::UnityEngine::Vector3 IJKAFALGMNK; // 0x50
	::System::Int32 DCIDBPGLLCN; // 0x5C
	::UnityEngine::Vector3 FCBHEENFOJC; // 0x60
	::System::Int32 BELNJJKMMJP; // 0x6C
	::MoleMole::Vector2Int BCPGDHMPPMG; // 0x70
	::UnityEngine::Bounds DDHNPPLONBE; // 0x78
	::UnityEngine::Vector2 FGJOJDGNMDM; // 0x90

	::System::Void _ctor(::UnityEngine::Vector3 KKMEFOCGLKE, ::UnityEngine::Vector3 JNENFGJAEHK, ::UnityEngine::Bounds GNPIPGPHPAF, ::UnityEngine::Vector2 PKFDKHEGJIC, ::System::Int32 LJKAKOFHDJC, ::MoleMole::Vector2Int NENMHFGEFDE, ::System::Int32 COIEBHBPMMD, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::System::Int32, ::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JHNEKILCCAA__CTOR_OFFSET))(this, KKMEFOCGLKE, JNENFGJAEHK, GNPIPGPHPAF, PKFDKHEGJIC, LJKAKOFHDJC, NENMHFGEFDE, COIEBHBPMMD, ABHBKFJKINO);
	}

	::System::Void IMPJHIANDEB(::JHNEKILCCAA_LKAPPEKPEBE& KDJPHMALEPH, ::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Matrix4x4 NHKIHGLELGE)
	{
		return ((::System::Void(*)(::PVOID, ::JHNEKILCCAA_LKAPPEKPEBE&, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + JHNEKILCCAA_IMPJHIANDEB_OFFSET))(this, KDJPHMALEPH, OPMPKFEHOBM, NHKIHGLELGE);
	}

	static ::System::Void IMPJHIANDEB_1(::JHNEKILCCAA_LKAPPEKPEBE& KDJPHMALEPH, ::System::Single PMLCGDGBGFO, ::System::Single AHJEKINNLBC)
	{
		return ((::System::Void(*)(::JHNEKILCCAA_LKAPPEKPEBE&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JHNEKILCCAA_IMPJHIANDEB_1_OFFSET))(KDJPHMALEPH, PMLCGDGBGFO, AHJEKINNLBC);
	}

	::Cysharp::Threading::Tasks::UniTask JHFBHJDJDPI()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNEKILCCAA_JHFBHJDJDPI_OFFSET))(this);
	}

	::System::Void BOCBBBPPDHI(::System::Single GNHOCNHLCCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHNEKILCCAA_BOCBBBPPDHI_OFFSET))(this, GNHOCNHLCCA);
	}

	::System::Void OFMNCOIHEJH(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Matrix4x4 NHKIHGLELGE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + JHNEKILCCAA_OFMNCOIHEJH_OFFSET))(this, GOFCNJELMHH, NHKIHGLELGE);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> OIFCMDBFHFJ(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Matrix4x4 NHKIHGLELGE)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + JHNEKILCCAA_OIFCMDBFHFJ_OFFSET))(this, GOFCNJELMHH, NHKIHGLELGE);
	}

	::JHNEKILCCAA_LKAPPEKPEBE OGBBICMIMOD(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Matrix4x4 NHKIHGLELGE)
	{
		return ((::JHNEKILCCAA_LKAPPEKPEBE(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + JHNEKILCCAA_OGBBICMIMOD_OFFSET))(this, GOFCNJELMHH, NHKIHGLELGE);
	}

	::System::Boolean DJBICMGNGGO(::System::Single LJOKENPGFBM, ::System::Single ELIBCKGPADF, ::UnityEngine::Vector3& MOBNDKHOHNJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JHNEKILCCAA_DJBICMGNGGO_OFFSET))(this, LJOKENPGFBM, ELIBCKGPADF, MOBNDKHOHNJ);
	}
};
