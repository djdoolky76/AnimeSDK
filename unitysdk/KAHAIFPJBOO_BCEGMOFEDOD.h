#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KAHAIFPJBOO_KJHPPLMBPLK;
namespace System { class Action; }

#define KAHAIFPJBOO_BCEGMOFEDOD_FKEJFEDKCME_OFFSET UNITYSDK_OFFSET(0x17B61420)
#define KAHAIFPJBOO_BCEGMOFEDOD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B61410)

inline static constexpr unsigned int KAHAIFPJBOO_BCEGMOFEDOD_TypeDefinitionIndex = 54427;

class KAHAIFPJBOO_BCEGMOFEDOD : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::KAHAIFPJBOO_KJHPPLMBPLK* FGBNBFHOKAA; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_BCEGMOFEDOD__CTOR_OFFSET))(this);
	}

	::System::Void FKEJFEDKCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_BCEGMOFEDOD_FKEJFEDKCME_OFFSET))(this);
	}
};
