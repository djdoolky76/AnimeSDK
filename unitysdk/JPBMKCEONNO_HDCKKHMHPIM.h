#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JPBMKCEONNO_HDCKKHMHPIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B3CD0)
#define JPBMKCEONNO_HDCKKHMHPIM_GKGNJABNLNH_OFFSET UNITYSDK_OFFSET(0xB2B3C00)

	class JPBMKCEONNO_HDCKKHMHPIM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* LBGJHODBAEA; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* NKFDJFFLDEA; // 0x18
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
