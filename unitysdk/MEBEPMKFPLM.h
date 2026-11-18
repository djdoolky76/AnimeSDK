#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLDJMKPPAHJ;
class ICIJJJLDLBM;

#define MEBEPMKFPLM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16C78950)
#define MEBEPMKFPLM_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x16C78680)
#define MEBEPMKFPLM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C78670)

inline static constexpr unsigned int MEBEPMKFPLM_TypeDefinitionIndex = 66468;

class MEBEPMKFPLM : public ::System::Object
{
public:
	::ICIJJJLDLBM* LBJBNPNCOHA; // 0x10
	::System::Int32 PEJBEDONNDI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBEPMKFPLM__CTOR_OFFSET))(this);
	}

	::System::Boolean JGECEJIHMLG(::DLDJMKPPAHJ*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::DLDJMKPPAHJ*&))((::PBYTE)hIl2Cpp + MEBEPMKFPLM_JGECEJIHMLG_OFFSET))(this, LJBPECKCCEA);
	}

	static ::MEBEPMKFPLM* JFDOOELFAOA(::ICIJJJLDLBM*& LKMJFHADBKG, ::System::Int32& MBCLEKLCOJN)
	{
		return ((::MEBEPMKFPLM*(*)(::ICIJJJLDLBM*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEBEPMKFPLM_JFDOOELFAOA_OFFSET))(LKMJFHADBKG, MBCLEKLCOJN);
	}
};
