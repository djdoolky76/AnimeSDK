#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KPHMLOHPAAD;

#define KPHMLOHPAAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D09CB50)
#define KPHMLOHPAAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D09CA20)

inline static constexpr unsigned int KPHMLOHPAAD_TypeDefinitionIndex = 11628;

	class KPHMLOHPAAD : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenStatGradeType GMPGDEINODK; // 0x10
		::System::UInt32 NNACKOBKFGE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHMLOHPAAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KPHMLOHPAAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KPHMLOHPAAD*))((::PBYTE)hIl2Cpp + KPHMLOHPAAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
