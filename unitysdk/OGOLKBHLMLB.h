#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoLayoutElementProcessor;

#define OGOLKBHLMLB_AKBBGLNJIHA_OFFSET UNITYSDK_OFFSET(0x13A609D0)
#define OGOLKBHLMLB_BNOMIHAHMPB_OFFSET UNITYSDK_OFFSET(0x13A602F0)
#define OGOLKBHLMLB_DGONCNOAKFG_OFFSET UNITYSDK_OFFSET(0x13A61010)
#define OGOLKBHLMLB_FOLAPEFFMIK_OFFSET UNITYSDK_OFFSET(0x13A603B0)
#define OGOLKBHLMLB_IECCGEHLFCO_OFFSET UNITYSDK_OFFSET(0x13A60230)
#define OGOLKBHLMLB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x13A60480)
#define OGOLKBHLMLB_LHDADKDGBNP_OFFSET UNITYSDK_OFFSET(0x13A60350)
#define OGOLKBHLMLB_ODNIJDFHJCD_OFFSET UNITYSDK_OFFSET(0x13A60410)
#define OGOLKBHLMLB_PIGADFPOLNM_OFFSET UNITYSDK_OFFSET(0x13A60290)
#define OGOLKBHLMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A60470)

inline static constexpr unsigned int OGOLKBHLMLB_TypeDefinitionIndex = 84832;

class OGOLKBHLMLB : public ::System::Object
{
public:
	::MonoLayoutElementProcessor* KDOIHCNOKIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOLKBHLMLB__CTOR_OFFSET))(this);
	}

	::System::Single IECCGEHLFCO(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_IECCGEHLFCO_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single PIGADFPOLNM(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_PIGADFPOLNM_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single BNOMIHAHMPB(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_BNOMIHAHMPB_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single LHDADKDGBNP(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_LHDADKDGBNP_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single FOLAPEFFMIK(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_FOLAPEFFMIK_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Single ODNIJDFHJCD(::System::Single BAGLLCBFGED)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_ODNIJDFHJCD_OFFSET))(this, BAGLLCBFGED);
	}

	::System::Void KKFNPONHGEM(::MonoLayoutElementProcessor* CHNABJHAHLD)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLayoutElementProcessor*))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_KKFNPONHGEM_OFFSET))(this, CHNABJHAHLD);
	}

	::System::Void AKBBGLNJIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_AKBBGLNJIHA_OFFSET))(this);
	}

	::System::Void DGONCNOAKFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOLKBHLMLB_DGONCNOAKFG_OFFSET))(this);
	}
};
