#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MJCABDDEGOE_CLOGOGOBBEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9622D0)
#define MJCABDDEGOE_CLOGOGOBBEN_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0xB9622F0)
#define MJCABDDEGOE_CLOGOGOBBEN_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0xB9623E0)
#define MJCABDDEGOE_CLOGOGOBBEN_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xB962340)
#define MJCABDDEGOE_CLOGOGOBBEN_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0xB962390)

inline static constexpr unsigned int MJCABDDEGOE_CLOGOGOBBEN_TypeDefinitionIndex = 62360;

	class MJCABDDEGOE_CLOGOGOBBEN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLOGOGOBBEN_CTOR_OFFSET))(this);
		}

		::System::Single get_DrawRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLOGOGOBBEN_GET_DRAWRATIO_OFFSET))(this);
		}

		::System::Single get_StraightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLOGOGOBBEN_GET_STRAIGHTRATIO_OFFSET))(this);
		}

		::System::Single get_TurnRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLOGOGOBBEN_GET_TURNRATIO_OFFSET))(this);
		}

		::System::Single get_RollbackRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_CLOGOGOBBEN_GET_ROLLBACKRATIO_OFFSET))(this);
		}

	};
