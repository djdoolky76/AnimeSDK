#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHJGACLHFDJ.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NJIMHPJHICM;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DCJDAGKOPFB_CTOR_OFFSET UNITYSDK_OFFSET(0xE242170)
#define DCJDAGKOPFB_DHBFCHLKMHP_OFFSET UNITYSDK_OFFSET(0xE241D90)
#define DCJDAGKOPFB_EOPDCMGLONM_OFFSET UNITYSDK_OFFSET(0xE241CA0)
#define DCJDAGKOPFB_GDGEKGGJCBJ_OFFSET UNITYSDK_OFFSET(0xE241BB0)
#define DCJDAGKOPFB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE241DF0)
#define DCJDAGKOPFB_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xE241980)
#define DCJDAGKOPFB_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE241E70)

inline static constexpr unsigned int DCJDAGKOPFB_TypeDefinitionIndex = 49315;

	class DCJDAGKOPFB : public ::HHJGACLHFDJ
	{
	public:
		::NJIMHPJHICM* FEJCAMPDIOM; // 0x28
		::NJIMHPJHICM* EJLBGACMEKG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_CTOR_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_NLKPKABOIPJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GDGEKGGJCBJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_GDGEKGGJCBJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 EOPDCMGLONM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_EOPDCMGLONM_OFFSET))(this);
		}

		::System::Void DHBFCHLKMHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_DHBFCHLKMHP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DCJDAGKOPFB_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
