#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LECHNIOHAEF;

#define LECHNIOHAEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E950FD0)
#define LECHNIOHAEF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E950EA0)

inline static constexpr unsigned int LECHNIOHAEF_TypeDefinitionIndex = 11218;

	class LECHNIOHAEF : public ::System::Object
	{
	public:
		::System::UInt32 HCDEOKNIGKG; // 0x10
		::RPG::GameCore::IngredientKind KAPIKEEGEPA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECHNIOHAEF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LECHNIOHAEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LECHNIOHAEF*))((::PBYTE)hIl2Cpp + LECHNIOHAEF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
