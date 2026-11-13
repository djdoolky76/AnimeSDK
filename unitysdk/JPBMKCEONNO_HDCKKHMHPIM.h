#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JPBMKCEONNO_HDCKKHMHPIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EF4A0)
#define JPBMKCEONNO_HDCKKHMHPIM_GKGNJABNLNH_OFFSET UNITYSDK_OFFSET(0x1B4EF3D0)

inline static constexpr unsigned int JPBMKCEONNO_HDCKKHMHPIM_TypeDefinitionIndex = 58849;

	class JPBMKCEONNO_HDCKKHMHPIM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* NKFDJFFLDEA; // 0x10
		::RPG::GameCore::GameEntity* LBGJHODBAEA; // 0x18
		::System::UInt32 AIKAABAKHLG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_HDCKKHMHPIM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GKGNJABNLNH(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_HDCKKHMHPIM_GKGNJABNLNH_OFFSET))(this, a1);
		}

	};
