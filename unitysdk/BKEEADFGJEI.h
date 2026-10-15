#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DOBDMMLFKDL;
namespace RPG::Client::Prop::CoilPuzzle { class RigCoilPuzzleBoard; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshRenderer; }

#define BKEEADFGJEI_AFGKLOKCCBK_OFFSET UNITYSDK_OFFSET(0xB7AF2F0)
#define BKEEADFGJEI_CECAFEIIMOC_OFFSET UNITYSDK_OFFSET(0xB7AEC00)
#define BKEEADFGJEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AEA60)
#define BKEEADFGJEI_FNKHPHCABMP_OFFSET UNITYSDK_OFFSET(0xB7AEB40)
#define BKEEADFGJEI_LFNNEGFPEGD_OFFSET UNITYSDK_OFFSET(0xB7AEEB0)
#define BKEEADFGJEI_MDDOGMMFFEC_OFFSET UNITYSDK_OFFSET(0xB7AF890)
#define BKEEADFGJEI_MOGBIGMBOME_OFFSET UNITYSDK_OFFSET(0xB7AF7F0)
#define BKEEADFGJEI_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xB7AF930)
#define BKEEADFGJEI_PMMNBAJPPKG_OFFSET UNITYSDK_OFFSET(0xB7AF720)

	class BKEEADFGJEI : public ::System::Object
	{
	public:
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x10
		::UnityEngine::MeshRenderer* IFJJNBGGEKF; // 0x18
		::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* MIPPNCGOJNM; // 0x20
		::System::Boolean HAAPDBMKDLH; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 NMIEDIECAGH; // 0x2C
		::System::Void _ctor(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKEEADFGJEI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FNKHPHCABMP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKEEADFGJEI_FNKHPHCABMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CECAFEIIMOC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKEEADFGJEI_CECAFEIIMOC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 LFNNEGFPEGD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKEEADFGJEI_LFNNEGFPEGD_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 AFGKLOKCCBK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BKEEADFGJEI_AFGKLOKCCBK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 PMMNBAJPPKG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEEADFGJEI_PMMNBAJPPKG_OFFSET))(this);
		}

		::System::Void MOGBIGMBOME(::DOBDMMLFKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOBDMMLFKDL*))((::PBYTE)hIl2Cpp + BKEEADFGJEI_MOGBIGMBOME_OFFSET))(this, a1);
		}

		::System::Void MDDOGMMFFEC(::DOBDMMLFKDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOBDMMLFKDL*))((::PBYTE)hIl2Cpp + BKEEADFGJEI_MDDOGMMFFEC_OFFSET))(this, a1);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEEADFGJEI_NEKGALPLEOH_OFFSET))(this);
		}

	};
