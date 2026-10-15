#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class MOGBNBGMIHF;
namespace UnityEngine { class Transform; }

#define PEAOEHAEJPG_CLONE_OFFSET UNITYSDK_OFFSET(0xC025040)
#define PEAOEHAEJPG_CTOR_OFFSET UNITYSDK_OFFSET(0xC025480)
#define PEAOEHAEJPG_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0xC025120)
#define PEAOEHAEJPG_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC0252C0)
#define PEAOEHAEJPG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC0253A0)
#define PEAOEHAEJPG_REVERSE_OFFSET UNITYSDK_OFFSET(0xC0250B0)
#define PEAOEHAEJPG_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC0251D0)

inline static constexpr unsigned int PEAOEHAEJPG_TypeDefinitionIndex = 73518;

	class PEAOEHAEJPG : public ::MOGBNBGMIHF
	{
	public:
		::MOGBNBGMIHF* IIOOPADILHE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_CTOR_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_REVERSE_OFFSET))(this);
		}

		::System::Boolean EJLDDHIMBEM(::MOGBNBGMIHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOGBNBGMIHF*))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_EJLDDHIMBEM_OFFSET))(this, a1);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEAOEHAEJPG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
