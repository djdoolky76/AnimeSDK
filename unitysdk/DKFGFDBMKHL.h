#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFGFDBMKHL;
class FCOEMCEDLNL;

#define DKFGFDBMKHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD357F0)
#define DKFGFDBMKHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD356D0)

inline static constexpr unsigned int DKFGFDBMKHL_TypeDefinitionIndex = 13337;

	class DKFGFDBMKHL : public ::System::Object
	{
	public:
		::System::UInt32 OPJDGJNAKFF; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFGFDBMKHL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DKFGFDBMKHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKFGFDBMKHL*))((::PBYTE)hIl2Cpp + DKFGFDBMKHL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
