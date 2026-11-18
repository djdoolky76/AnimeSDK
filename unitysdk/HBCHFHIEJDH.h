#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define HBCHFHIEJDH_CHKKELABKNO_1_OFFSET UNITYSDK_OFFSET(0x17E2AF60)
#define HBCHFHIEJDH_CHKKELABKNO_OFFSET UNITYSDK_OFFSET(0x17E2A670)
#define HBCHFHIEJDH_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x17E2AD70)
#define HBCHFHIEJDH_MJBPJACNOKO_OFFSET UNITYSDK_OFFSET(0x17E2A830)
#define HBCHFHIEJDH__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2A660)

inline static constexpr unsigned int HBCHFHIEJDH_TypeDefinitionIndex = 51095;

class HBCHFHIEJDH : public ::System::Object
{
public:
	::UnityEngine::Quaternion FOLNFOEAALK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCHFHIEJDH__CTOR_OFFSET))(this);
	}

	::System::Void CHKKELABKNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCHFHIEJDH_CHKKELABKNO_OFFSET))(this);
	}

	::UnityEngine::Quaternion MJBPJACNOKO(::UnityEngine::Quaternion& LDDJOFHAOHG, ::UnityEngine::Quaternion& CMDKBCFKKHC)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HBCHFHIEJDH_MJBPJACNOKO_OFFSET))(this, LDDJOFHAOHG, CMDKBCFKKHC);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCHFHIEJDH_COBPIICGJJA_OFFSET))(this);
	}

	::System::Void CHKKELABKNO_1(::UnityEngine::Quaternion JCHMGHPBCGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HBCHFHIEJDH_CHKKELABKNO_1_OFFSET))(this, JCHMGHPBCGP);
	}
};
