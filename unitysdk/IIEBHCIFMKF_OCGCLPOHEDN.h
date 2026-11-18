#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IIEBHCIFMKF_OCGCLPOHEDN_JJFHKNIMHJJ_OFFSET UNITYSDK_OFFSET(0x10148A90)
#define IIEBHCIFMKF_OCGCLPOHEDN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10148A40)
#define IIEBHCIFMKF_OCGCLPOHEDN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x10148BE0)
#define IIEBHCIFMKF_OCGCLPOHEDN__CTOR_OFFSET UNITYSDK_OFFSET(0x10148A20)

inline static constexpr unsigned int IIEBHCIFMKF_OCGCLPOHEDN_TypeDefinitionIndex = 43649;

class IIEBHCIFMKF_OCGCLPOHEDN : public ::System::Object
{
public:
	::System::Single GIEAJJLIDJL; // 0x10
	::UnityEngine::Quaternion EEDDICPIOCN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_OCGCLPOHEDN__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_OCGCLPOHEDN_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Quaternion JJFHKNIMHJJ(::UnityEngine::Vector3 MMGKMLFBMEM, ::System::Single PBCAAADNEPK)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_OCGCLPOHEDN_JJFHKNIMHJJ_OFFSET))(this, MMGKMLFBMEM, PBCAAADNEPK);
	}

	::UnityEngine::Quaternion OKJCHFGIKBH(::UnityEngine::Vector3 MMGKMLFBMEM, ::UnityEngine::Vector3 NJJNJBLDLBC, ::System::Single PBCAAADNEPK)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IIEBHCIFMKF_OCGCLPOHEDN_OKJCHFGIKBH_OFFSET))(this, MMGKMLFBMEM, NJJNJBLDLBC, PBCAAADNEPK);
	}
};
