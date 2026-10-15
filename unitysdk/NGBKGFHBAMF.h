#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NGBKGFHBAMF;

#define NGBKGFHBAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D204FC0)
#define NGBKGFHBAMF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D204E30)

	class NGBKGFHBAMF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::RPG::GameCore::MechCraftEffectType GMPGDEINODK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBKGFHBAMF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGBKGFHBAMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGBKGFHBAMF*))((::PBYTE)hIl2Cpp + NGBKGFHBAMF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
