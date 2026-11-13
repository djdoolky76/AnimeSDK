#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FNAMGCIEJNC;

#define FNAMGCIEJNC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17F11110)
#define FNAMGCIEJNC_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F11180)
#define FNAMGCIEJNC_CTOR_OFFSET UNITYSDK_OFFSET(0x17F112B0)
#define FNAMGCIEJNC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17F111E0)

inline static constexpr unsigned int FNAMGCIEJNC_TypeDefinitionIndex = 67806;

	class FNAMGCIEJNC : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 LKELCEMCLED; // 0x20
		::System::Int32 GDIMKFNECOK; // 0x24
		::System::Boolean NIKJBBKEFCL; // 0x28
		::System::Boolean COILICFBDCD; // 0x29
		::System::Boolean LEPAFEFDNEN; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMGCIEJNC_CTOR_OFFSET))(this);
		}

		static ::FNAMGCIEJNC* BPLPBPMEODA()
		{
			return ((::FNAMGCIEJNC*(*)())((::PBYTE)hIl2Cpp + FNAMGCIEJNC_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMGCIEJNC_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAMGCIEJNC_ONEXECUTE_OFFSET))(this);
		}

	};
