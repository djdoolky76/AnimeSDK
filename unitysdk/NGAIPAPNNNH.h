#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGAIPAPNNNH;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define NGAIPAPNNNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D204C10)
#define NGAIPAPNNNH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D204C50)
#define NGAIPAPNNNH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D204BB0)

	class NGAIPAPNNNH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::System::Boolean BCOKPOLAFCG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAIPAPNNNH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGAIPAPNNNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGAIPAPNNNH*))((::PBYTE)hIl2Cpp + NGAIPAPNNNH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGAIPAPNNNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGAIPAPNNNH*))((::PBYTE)hIl2Cpp + NGAIPAPNNNH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
