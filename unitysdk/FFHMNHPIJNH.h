#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFHMNHPIJNH;
namespace RPG::GameCore { class BattleBulletCommentItem; }

#define FFHMNHPIJNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE6B70)
#define FFHMNHPIJNH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE6B80)
#define FFHMNHPIJNH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE6B40)

	class FFHMNHPIJNH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleBulletCommentItem*>* IMDFBNPIFIJ; // 0x18
		::System::Boolean IOBJFEJFLJP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHMNHPIJNH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFHMNHPIJNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFHMNHPIJNH*))((::PBYTE)hIl2Cpp + FFHMNHPIJNH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFHMNHPIJNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFHMNHPIJNH*))((::PBYTE)hIl2Cpp + FFHMNHPIJNH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
