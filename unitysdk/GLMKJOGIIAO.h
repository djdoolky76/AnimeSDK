#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define GLMKJOGIIAO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10F08CB0)
#define GLMKJOGIIAO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x10F08B40)
#define GLMKJOGIIAO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10F08C20)
#define GLMKJOGIIAO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10F08AB0)
#define GLMKJOGIIAO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10F08B80)
#define GLMKJOGIIAO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10F08950)
#define GLMKJOGIIAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10F089C0)
#define GLMKJOGIIAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F08A30)
#define GLMKJOGIIAO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F08AA0)

inline static constexpr unsigned int GLMKJOGIIAO_TypeDefinitionIndex = 40004;

class GLMKJOGIIAO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9D; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMKJOGIIAO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMKJOGIIAO_CNHBDOMKKDE_OFFSET))(this);
	}
};
