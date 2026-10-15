#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelNpcDitherInNode; }

#define PPNBJAPBFHI_CTOR_OFFSET UNITYSDK_OFFSET(0xC395200)
#define PPNBJAPBFHI_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xC395120)

inline static constexpr unsigned int PPNBJAPBFHI_TypeDefinitionIndex = 77688;

	class PPNBJAPBFHI : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcDitherInNode* EABKOHGCHFP; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType PLAGBMGBOAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBJAPBFHI_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + PPNBJAPBFHI_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
