#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class DHOKPKHPKCH;
class IIDDHOJEPAH;

#define IIDDHOJEPAH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1642AA80)
#define IIDDHOJEPAH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1642AAF0)
#define IIDDHOJEPAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1642ADE0)
#define IIDDHOJEPAH_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1642ACF0)
#define IIDDHOJEPAH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1642ABE0)

inline static constexpr unsigned int IIDDHOJEPAH_TypeDefinitionIndex = 65899;

	class IIDDHOJEPAH : public ::MLKDDLHNNHH
	{
	public:
		::DHOKPKHPKCH* MJKBBDNJFDN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDDHOJEPAH_CTOR_OFFSET))(this);
		}

		static ::IIDDHOJEPAH* BPLPBPMEODA()
		{
			return ((::IIDDHOJEPAH*(*)())((::PBYTE)hIl2Cpp + IIDDHOJEPAH_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDDHOJEPAH_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDDHOJEPAH_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDDHOJEPAH_LGAOOKPFIMF_OFFSET))(this);
		}

	};
