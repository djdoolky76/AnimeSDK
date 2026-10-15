#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNGNFMMPLJ.h"
#include "unitysdk/GHGAFNHHPAB.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtTargetConstraint; }

#define GHIBEJPCHIP_ELLMKODLNNE_OFFSET UNITYSDK_OFFSET(0x2E7CD20)
#define GHIBEJPCHIP_FNDBLJDOKIG_OFFSET UNITYSDK_OFFSET(0x2E7CDD0)
#define GHIBEJPCHIP_GFAJGFKJMLC_OFFSET UNITYSDK_OFFSET(0x2E7D1E0)
#define GHIBEJPCHIP_GPLCPLHKDNM_OFFSET UNITYSDK_OFFSET(0x2E7D090)
#define GHIBEJPCHIP_IBKDFECLAIN_OFFSET UNITYSDK_OFFSET(0x2E7D0B0)
#define GHIBEJPCHIP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x2E7CCE0)
#define GHIBEJPCHIP_JNDNGAKOKHP_OFFSET UNITYSDK_OFFSET(0x2E7CF00)
#define GHIBEJPCHIP_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0x2E7CCF0)
#define GHIBEJPCHIP_PBFDABKILKG_OFFSET UNITYSDK_OFFSET(0x2E7CDE0)

inline static constexpr unsigned int GHIBEJPCHIP_TypeDefinitionIndex = 68487;

	struct alignas(4) GHIBEJPCHIP
	{
		::System::Boolean JGCPBGGDEIN; // 0x10
		::System::Boolean CMMFHJEMKLJ; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 LOHDILLJMPB; // 0x14
		::System::Single APAKCBFMCAB; // 0x20
		::System::Byte _padding1[0x4];
		::EBNGNFMMPLJ HKPKPKDNADH; // 0x28
		::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x50
		::GHGAFNHHPAB PCKJJLKKAHK; // 0x60
		::UnityEngine::Vector3 HPCDFGDODHF; // 0x188
		::UnityEngine::Vector3 HPKPBIHADFF; // 0x194
		::UnityEngine::Vector3 IOPNOMCOKGH; // 0x1A0
		::UnityEngine::Vector3 HGCMEGBPGLB; // 0x1AC
		::System::Boolean ODFIMBNOOCI; // 0x1B8
		::System::Boolean KKJLMNLCMBK; // 0x1B9
		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::Client::LookAtTargetConstraint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LookAtTargetConstraint*))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LKFJFGPFEJJ(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_LKFJFGPFEJJ_OFFSET))(this, a1, a2);
		}

		::System::Void ELLMKODLNNE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_ELLMKODLNNE_OFFSET))(this, a1);
		}

		::System::Void FNDBLJDOKIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_FNDBLJDOKIG_OFFSET))(this, a1);
		}

		::System::Single PBFDABKILKG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_PBFDABKILKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNDNGAKOKHP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_JNDNGAKOKHP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GPLCPLHKDNM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_GPLCPLHKDNM_OFFSET))(this);
		}

		::UnityEngine::Vector3 IBKDFECLAIN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_IBKDFECLAIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 GFAJGFKJMLC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHIBEJPCHIP_GFAJGFKJMLC_OFFSET))(this);
		}

	};
