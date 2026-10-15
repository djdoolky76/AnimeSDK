#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class AFBIFCALFED;

#define AFBIFCALFED_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF05E20)
#define AFBIFCALFED_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF05E90)
#define AFBIFCALFED_CTOR_OFFSET UNITYSDK_OFFSET(0xCF05FC0)
#define AFBIFCALFED_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCF05EF0)

	class AFBIFCALFED : public ::MLKDDLHNNHH
	{
	public:
		::System::Boolean NIKJBBKEFCL; // 0x20
		::System::Boolean LEPAFEFDNEN; // 0x21
		::System::Boolean COILICFBDCD; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 LKELCEMCLED; // 0x24
		::System::Int32 GDIMKFNECOK; // 0x28
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
