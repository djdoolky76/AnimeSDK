#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BINEKJFCLMP.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class RuntimeGroupInfo; }

#define NHKOBIDDGBE_BAOHKIJPJFG_OFFSET UNITYSDK_OFFSET(0x3DAFFA0)
#define NHKOBIDDGBE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x148A6560)
#define NHKOBIDDGBE_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x3DAFFD0)
#define NHKOBIDDGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x3DAFE40)
#define NHKOBIDDGBE_ENKPHKGECEJ_OFFSET UNITYSDK_OFFSET(0x3DAFF40)
#define NHKOBIDDGBE_GET_TARGETPOSEID_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define NHKOBIDDGBE_GET_TARGETREGIONID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define NHKOBIDDGBE_GFMHJDBKIJA_OFFSET UNITYSDK_OFFSET(0x3DAFF30)
#define NHKOBIDDGBE_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x3DAFFB0)
#define NHKOBIDDGBE_IEGKLLNGDFE_OFFSET UNITYSDK_OFFSET(0x3DB0010)
#define NHKOBIDDGBE_JFCIGONIPOF_OFFSET UNITYSDK_OFFSET(0x3DAFFF0)
#define NHKOBIDDGBE_JLFCDCLGEHE_OFFSET UNITYSDK_OFFSET(0x3DB0030)
#define NHKOBIDDGBE_KGOIAOOHGDG_OFFSET UNITYSDK_OFFSET(0x3DAFE70)
#define NHKOBIDDGBE_OFEEJECDCCA_OFFSET UNITYSDK_OFFSET(0x723600)
#define NHKOBIDDGBE_PGEHFODBEKE_OFFSET UNITYSDK_OFFSET(0x6C28C0)

inline static constexpr unsigned int NHKOBIDDGBE_TypeDefinitionIndex = 61822;

	struct alignas(4) NHKOBIDDGBE
	{
		::System::Int32 _TargetRegionID_k__BackingField; // 0x10
		::System::UInt32 _TargetPoseID_k__BackingField; // 0x14
		::System::Boolean KDEGKPMCEKF; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BCAGKLKAFCF; // 0x1C
		::System::UInt32 MLMBNKMFAIO; // 0x20
		::UnityEngine::Matrix4x4 AFHKPELKHDE; // 0x24
		::BINEKJFCLMP LEJEEOFDHHN; // 0x64
		::System::Void _ctor(::BINEKJFCLMP a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BINEKJFCLMP, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::NHKOBIDDGBE BBNJCKPKPDN(::BINEKJFCLMP a1)
		{
			return ((::NHKOBIDDGBE(*)(::BINEKJFCLMP))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		::System::Void KGOIAOOHGDG(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_KGOIAOOHGDG_OFFSET))(this, a1);
		}

		::System::Boolean GFMHJDBKIJA(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_GFMHJDBKIJA_OFFSET))(this, a1);
		}

		::System::Boolean ENKPHKGECEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_ENKPHKGECEJ_OFFSET))(this);
		}

		::System::Int32 get_TargetRegionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_GET_TARGETREGIONID_OFFSET))(this);
		}

		::System::Boolean BAOHKIJPJFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_BAOHKIJPJFG_OFFSET))(this);
		}

		::System::UInt32 get_TargetPoseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_GET_TARGETPOSEID_OFFSET))(this);
		}

		::System::UInt32 PGEHFODBEKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_PGEHFODBEKE_OFFSET))(this);
		}

		::System::UInt32 OFEEJECDCCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_OFEEJECDCCA_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_CECMCADBMDE_OFFSET))(this);
		}

		::UnityEngine::Vector3 JFCIGONIPOF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_JFCIGONIPOF_OFFSET))(this);
		}

		::UnityEngine::Quaternion IEGKLLNGDFE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_IEGKLLNGDFE_OFFSET))(this);
		}

		::BINEKJFCLMP JLFCDCLGEHE()
		{
			return ((::BINEKJFCLMP(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKOBIDDGBE_JLFCDCLGEHE_OFFSET))(this);
		}

	};
