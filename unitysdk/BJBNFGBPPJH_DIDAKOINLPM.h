#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DHGMDONDOHI_CMJEIBJMJMF.h"

class BJBNFGBPPJH_NKGNINAFHIL;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define BJBNFGBPPJH_DIDAKOINLPM_CEOPCGBGFNI_OFFSET UNITYSDK_OFFSET(0x18680950)
#define BJBNFGBPPJH_DIDAKOINLPM_IGDAFGDFHKF_OFFSET UNITYSDK_OFFSET(0x186807D0)
#define BJBNFGBPPJH_DIDAKOINLPM__CTOR_OFFSET UNITYSDK_OFFSET(0x186807C0)

inline static constexpr unsigned int BJBNFGBPPJH_DIDAKOINLPM_TypeDefinitionIndex = 46914;

class BJBNFGBPPJH_DIDAKOINLPM : public ::System::Object
{
public:
	::BJBNFGBPPJH_NKGNINAFHIL* FGBNBFHOKAA; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18
	::System::Action_1<::System::Object*>* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNFGBPPJH_DIDAKOINLPM__CTOR_OFFSET))(this);
	}

	::System::Void IGDAFGDFHKF(::DHGMDONDOHI_CMJEIBJMJMF HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::DHGMDONDOHI_CMJEIBJMJMF))((::PBYTE)hIl2Cpp + BJBNFGBPPJH_DIDAKOINLPM_IGDAFGDFHKF_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void CEOPCGBGFNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNFGBPPJH_DIDAKOINLPM_CEOPCGBGFNI_OFFSET))(this);
	}
};
