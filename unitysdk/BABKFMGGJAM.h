#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BABKFMGGJAM;
class FCOEMCEDLNL;
namespace System { class String; }

#define BABKFMGGJAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF0300)
#define BABKFMGGJAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCF0310)
#define BABKFMGGJAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCF02C0)

inline static constexpr unsigned int BABKFMGGJAM_TypeDefinitionIndex = 21939;

	class BABKFMGGJAM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OENAMINOLLF; // 0x18
		::System::Boolean DIOGHCPEMMB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABKFMGGJAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BABKFMGGJAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BABKFMGGJAM*))((::PBYTE)hIl2Cpp + BABKFMGGJAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BABKFMGGJAM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BABKFMGGJAM*))((::PBYTE)hIl2Cpp + BABKFMGGJAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
