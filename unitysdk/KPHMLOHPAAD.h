#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KPHMLOHPAAD;

#define KPHMLOHPAAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CAA20)
#define KPHMLOHPAAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0CA8F0)

	class KPHMLOHPAAD : public ::System::Object
	{
	public:
		::System::UInt32 NNACKOBKFGE; // 0x10
		::RPG::GameCore::HipplenStatGradeType GMPGDEINODK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHMLOHPAAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KPHMLOHPAAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KPHMLOHPAAD*))((::PBYTE)hIl2Cpp + KPHMLOHPAAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
