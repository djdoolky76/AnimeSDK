#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HOOGEAAEJMG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12E93690)
#define HOOGEAAEJMG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12E93550)
#define HOOGEAAEJMG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12E939E0)
#define HOOGEAAEJMG__CTOR_OFFSET UNITYSDK_OFFSET(0x12E938E0)

inline static constexpr unsigned int HOOGEAAEJMG_TypeDefinitionIndex = 56659;

class HOOGEAAEJMG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OODJPDHFBHE; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOGEAAEJMG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOGEAAEJMG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HOOGEAAEJMG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOGEAAEJMG_GDEOPIBNOIN_OFFSET))(this);
	}
};
