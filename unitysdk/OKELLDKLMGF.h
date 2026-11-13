#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OKELLDKLMGF;
namespace RPG::GameCore { class StageMonsterRewardItem; }

#define OKELLDKLMGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA06EC0)
#define OKELLDKLMGF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA06DD0)

inline static constexpr unsigned int OKELLDKLMGF_TypeDefinitionIndex = 15301;

	class OKELLDKLMGF : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageMonsterRewardItem*>* DJOBNPIAEJP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKELLDKLMGF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKELLDKLMGF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKELLDKLMGF*))((::PBYTE)hIl2Cpp + OKELLDKLMGF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
