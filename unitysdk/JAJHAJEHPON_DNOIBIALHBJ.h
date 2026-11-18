#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJLCGNBIDJP;

#define JAJHAJEHPON_DNOIBIALHBJ_LAOIAJIJCON_OFFSET UNITYSDK_OFFSET(0x19446E30)
#define JAJHAJEHPON_DNOIBIALHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19446E20)

inline static constexpr unsigned int JAJHAJEHPON_DNOIBIALHBJ_TypeDefinitionIndex = 55491;

class JAJHAJEHPON_DNOIBIALHBJ : public ::System::Object
{
public:
	::System::Int32 HKHLHBBGLFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_DNOIBIALHBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LAOIAJIJCON(::AJLCGNBIDJP* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJLCGNBIDJP*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_DNOIBIALHBJ_LAOIAJIJCON_OFFSET))(this, HMMMOCJAEOA);
	}
};
