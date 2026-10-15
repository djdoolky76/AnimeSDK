#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKMDDDHPCG.h"
#include "unitysdk/GHIBEJPCHIP.h"
#include "unitysdk/LHALCLMCBEB.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityChan { class SpringManager; }

#define GNHDAPGOBAE_CBIBAOGNMMD_OFFSET UNITYSDK_OFFSET(0x2E7CB70)
#define GNHDAPGOBAE_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x2E7CB30)
#define GNHDAPGOBAE_LGBCLGCBHNJ_OFFSET UNITYSDK_OFFSET(0x2E7CB40)

inline static constexpr unsigned int GNHDAPGOBAE_TypeDefinitionIndex = 68488;

	struct alignas(8) GNHDAPGOBAE
	{
		::System::Boolean FKPPFNENHLL; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OPMGDNNAEJF; // 0x14
		::UnityEngine::Vector3 IOALDJANLJG; // 0x20
		::System::Byte _padding1[0x4];
		::GHIBEJPCHIP LANBGGMNMIA; // 0x30
		::LHALCLMCBEB ALHMAJCACHA; // 0x1E0
		::ABKMDDDHPCG BCGFOJIILJI; // 0x1F0
		::RPG::Client::LookAtTargetConstraint* PDCDDOENJGK; // 0x210
		::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x218
		::System::Single ECELMOEGBJE; // 0x228
		::System::Single MLCHADOKMFI; // 0x22C
		::System::Single JJGLCFNABDK; // 0x230
		::System::Single IBFOFGPGPFF; // 0x234
		::System::Single OFJJGLAKABN; // 0x238
		::System::Boolean KBHABLKIAGA; // 0x23C
		::System::Byte _padding2[0x3];
		::UnityChan::SpringManager* CDPDHAFJGKF; // 0x240
		::System::Single OKHGNDNGKMM; // 0x248
		::System::Boolean DBEIGNBMHLA; // 0x24C
		::System::Boolean EJDNONKINOM; // 0x24D
		::System::Boolean CIJDJDICMMM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNHDAPGOBAE_CIJDJDICMMM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LGBCLGCBHNJ(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GNHDAPGOBAE_LGBCLGCBHNJ_OFFSET))(this, a1, a2);
		}

		::System::Void CBIBAOGNMMD(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHDAPGOBAE_CBIBAOGNMMD_OFFSET))(this, a1, a2);
		}

	};
