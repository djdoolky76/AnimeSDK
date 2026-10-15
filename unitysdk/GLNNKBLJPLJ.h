#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GLNNKBLJPLJ;

#define GLNNKBLJPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE387A0)
#define GLNNKBLJPLJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE38510)

inline static constexpr unsigned int GLNNKBLJPLJ_TypeDefinitionIndex = 13778;

	class GLNNKBLJPLJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint IAEADDEKAAB; // 0x10
		::RPG::GameCore::FixPoint PEDFLGGDHDP; // 0x18
		::RPG::GameCore::FixPoint OEELKOMPNIM; // 0x20
		::RPG::GameCore::FixPoint AAGBLKOLIGF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNNKBLJPLJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GLNNKBLJPLJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLNNKBLJPLJ*))((::PBYTE)hIl2Cpp + GLNNKBLJPLJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
