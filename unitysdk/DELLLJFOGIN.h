#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DELLLJFOGIN;
class FCOEMCEDLNL;

#define DELLLJFOGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE57F0)
#define DELLLJFOGIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCE5800)
#define DELLLJFOGIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE5730)

inline static constexpr unsigned int DELLLJFOGIN_TypeDefinitionIndex = 23229;

	class DELLLJFOGIN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELLLJFOGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DELLLJFOGIN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DELLLJFOGIN*))((::PBYTE)hIl2Cpp + DELLLJFOGIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DELLLJFOGIN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DELLLJFOGIN*))((::PBYTE)hIl2Cpp + DELLLJFOGIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
