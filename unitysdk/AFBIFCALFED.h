#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AFBIFCALFED;

#define AFBIFCALFED_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCEFEA90)
#define AFBIFCALFED_CLEAR_OFFSET UNITYSDK_OFFSET(0xCEFEB00)
#define AFBIFCALFED_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFEC30)
#define AFBIFCALFED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCEFEB60)

inline static constexpr unsigned int AFBIFCALFED_TypeDefinitionIndex = 65883;

	class AFBIFCALFED : public ::MLKDDLHNNHH
	{
	public:
		::System::Int32 LKELCEMCLED; // 0x20
		::System::Int32 GDIMKFNECOK; // 0x24
		::System::Boolean NIKJBBKEFCL; // 0x28
		::System::Boolean LEPAFEFDNEN; // 0x29
		::System::Boolean COILICFBDCD; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBIFCALFED_CTOR_OFFSET))(this);
		}

		static ::AFBIFCALFED* BPLPBPMEODA()
		{
			return ((::AFBIFCALFED*(*)())((::PBYTE)hIl2Cpp + AFBIFCALFED_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBIFCALFED_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBIFCALFED_ONEXECUTE_OFFSET))(this);
		}

	};
