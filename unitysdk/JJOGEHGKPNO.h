#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDEAGMMAPE;
class HCIGJNOLKGG;
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }

#define JJOGEHGKPNO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBA1390)
#define JJOGEHGKPNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA1470)

	class JJOGEHGKPNO : public ::System::Object
	{
	public:
		::HCIGJNOLKGG* FKIBGPJNCIJ; // 0x10
		::RPG::GameCore::MiniGameCollectCoinConfig* EABKOHGCHFP; // 0x18
		::EDDEAGMMAPE* NNANJMDMAOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOGEHGKPNO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOGEHGKPNO_CLEAR_OFFSET))(this);
		}

	};
