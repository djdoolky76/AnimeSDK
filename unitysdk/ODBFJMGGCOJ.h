#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ODBFJMGGCOJ;

#define ODBFJMGGCOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2269A0)
#define ODBFJMGGCOJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D226820)

inline static constexpr unsigned int ODBFJMGGCOJ_TypeDefinitionIndex = 11551;

	class ODBFJMGGCOJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType PHFMCACHFIJ; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFJMGGCOJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ODBFJMGGCOJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ODBFJMGGCOJ*))((::PBYTE)hIl2Cpp + ODBFJMGGCOJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
