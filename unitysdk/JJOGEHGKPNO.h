#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDEAGMMAPE;
class HCIGJNOLKGG;
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }

#define JJOGEHGKPNO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DE184F0)
#define JJOGEHGKPNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE185E0)

inline static constexpr unsigned int JJOGEHGKPNO_TypeDefinitionIndex = 44361;

	class JJOGEHGKPNO : public ::System::Object
	{
	public:
		::EDDEAGMMAPE* NNANJMDMAOC; // 0x10
		::HCIGJNOLKGG* FKIBGPJNCIJ; // 0x18
		::RPG::GameCore::MiniGameCollectCoinConfig* EABKOHGCHFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOGEHGKPNO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOGEHGKPNO_CLEAR_OFFSET))(this);
		}

	};
