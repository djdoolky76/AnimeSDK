#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AFBIFCALFED;

#define AFBIFCALFED_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD5B7650)
#define AFBIFCALFED_CLEAR_OFFSET UNITYSDK_OFFSET(0xD5B76C0)
#define AFBIFCALFED_CTOR_OFFSET UNITYSDK_OFFSET(0xD5B77F0)
#define AFBIFCALFED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD5B7720)

inline static constexpr unsigned int AFBIFCALFED_TypeDefinitionIndex = 67815;

	class AFBIFCALFED : public ::MLKDDLHNNHH
	{
	public:
		::System::Boolean LEPAFEFDNEN; // 0x20
		::System::Boolean NIKJBBKEFCL; // 0x21
		::System::Boolean COILICFBDCD; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 GDIMKFNECOK; // 0x24
		::System::Int32 LKELCEMCLED; // 0x28
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
