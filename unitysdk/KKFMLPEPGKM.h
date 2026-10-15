#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KKFMLPEPGKM;

#define KKFMLPEPGKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D09CD80)
#define KKFMLPEPGKM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D09CC90)

inline static constexpr unsigned int KKFMLPEPGKM_TypeDefinitionIndex = 11555;

	class KKFMLPEPGKM : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::UInt32 KGOOAOJLLDA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMLPEPGKM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KKFMLPEPGKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KKFMLPEPGKM*))((::PBYTE)hIl2Cpp + KKFMLPEPGKM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
