#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFOHALPDCLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC03BB0)
#define JFOHALPDCLG_EDGMCHKCECD_OFFSET UNITYSDK_OFFSET(0x1EC03B30)
#define JFOHALPDCLG_FFIAJHKGFLL_OFFSET UNITYSDK_OFFSET(0x1EC03B70)

inline static constexpr unsigned int JFOHALPDCLG_TypeDefinitionIndex = 35263;

	class JFOHALPDCLG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOHALPDCLG_CTOR_OFFSET))(this);
		}

		::System::Boolean EDGMCHKCECD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOHALPDCLG_EDGMCHKCECD_OFFSET))(this);
		}

		::System::Boolean FFIAJHKGFLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOHALPDCLG_FFIAJHKGFLL_OFFSET))(this);
		}

	};
