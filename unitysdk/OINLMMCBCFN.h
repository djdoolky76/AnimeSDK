#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OINLMMCBCFN;

#define OINLMMCBCFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2597D0)
#define OINLMMCBCFN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2596E0)

inline static constexpr unsigned int OINLMMCBCFN_TypeDefinitionIndex = 13076;

	class OINLMMCBCFN : public ::System::Object
	{
	public:
		::System::UInt32 DBLDCKODNEN; // 0x10
		::System::UInt32 NCKAICABJIK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINLMMCBCFN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OINLMMCBCFN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OINLMMCBCFN*))((::PBYTE)hIl2Cpp + OINLMMCBCFN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
