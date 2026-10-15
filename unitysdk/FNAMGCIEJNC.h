#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FNAMGCIEJNC;

#define FNAMGCIEJNC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1586A070)
#define FNAMGCIEJNC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1586A0E0)
#define FNAMGCIEJNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1586A210)
#define FNAMGCIEJNC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1586A140)

inline static constexpr unsigned int FNAMGCIEJNC_TypeDefinitionIndex = 65874;

	class FNAMGCIEJNC : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 LKELCEMCLED; // 0x20
		::System::Boolean COILICFBDCD; // 0x24
		::System::Boolean LEPAFEFDNEN; // 0x25
		::System::Boolean NIKJBBKEFCL; // 0x26
		::System::Byte _padding0[0x1];
		::System::Int32 GDIMKFNECOK; // 0x28
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
