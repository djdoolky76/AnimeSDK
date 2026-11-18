#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEJGPNCJHBG;
class PNIHGNDLMIN;
namespace System { class Action; }

#define AEJGPNCJHBG_GLGFHENIPNJ_HNPOOLBNIPF_OFFSET UNITYSDK_OFFSET(0x16D69BD0)
#define AEJGPNCJHBG_GLGFHENIPNJ_MCKIAOHEDEG_OFFSET UNITYSDK_OFFSET(0x16D69AE0)
#define AEJGPNCJHBG_GLGFHENIPNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16D69AD0)

inline static constexpr unsigned int AEJGPNCJHBG_GLGFHENIPNJ_TypeDefinitionIndex = 75481;

class AEJGPNCJHBG_GLGFHENIPNJ : public ::System::Object
{
public:
	::AEJGPNCJHBG* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::PNIHGNDLMIN* MOBAIMPEPBM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_GLGFHENIPNJ__CTOR_OFFSET))(this);
	}

	::System::Void MCKIAOHEDEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_GLGFHENIPNJ_MCKIAOHEDEG_OFFSET))(this);
	}

	::System::Void HNPOOLBNIPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_GLGFHENIPNJ_HNPOOLBNIPF_OFFSET))(this);
	}
};
