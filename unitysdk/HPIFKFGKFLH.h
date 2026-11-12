#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPIFKFGKFLH;

#define HPIFKFGKFLH_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0x16D71AA0)
#define HPIFKFGKFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D71BA0)
#define HPIFKFGKFLH_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x16D71BB0)

inline static constexpr unsigned int HPIFKFGKFLH_TypeDefinitionIndex = 70181;

	class HPIFKFGKFLH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFKFGKFLH_CTOR_OFFSET))(this);
		}

		static ::HPIFKFGKFLH* BFADFAELKLJ()
		{
			return ((::HPIFKFGKFLH*(*)())((::PBYTE)hIl2Cpp + HPIFKFGKFLH_BFADFAELKLJ_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIFKFGKFLH_FFHNOMIDEDE_OFFSET))(this);
		}

	};
