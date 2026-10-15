#pragma once
#include "unitysdk/unitysdk.h"
class BNBOAMEBAOE;
class KIKKCLCAIFJ;
namespace RPG::GameCore { class TaskContext; }

#define CPDBECGBAOA_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xDCC9920)
#define CPDBECGBAOA_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC98F0)
#define CPDBECGBAOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCC9970)

inline static constexpr unsigned int CPDBECGBAOA_TypeDefinitionIndex = 52808;

	class CPDBECGBAOA
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KIKKCLCAIFJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KIKKCLCAIFJ*))((::PBYTE)hIl2Cpp + CPDBECGBAOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + CPDBECGBAOA_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPDBECGBAOA_ONTASKBEGIN_OFFSET))(this);
		}

	};
