#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFLBMMLNLGC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define FFLBMMLNLGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3550)
#define FFLBMMLNLGC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFC35C0)
#define FFLBMMLNLGC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFC34C0)

inline static constexpr unsigned int FFLBMMLNLGC_TypeDefinitionIndex = 24569;

	class FFLBMMLNLGC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::UITextNode*>* KDIAKCHPLMN; // 0x18
		::System::String* OLOIFNNLKJP; // 0x20
		::System::String* JKMABBEGEAH; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::System::String* ECLCEDOLOBG; // 0x38
		::RPG::GameCore::DynamicFloat* JADMAPDKLKL; // 0x40
		::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x48
		::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x50
		::System::String* KOOOKCNNPFE; // 0x58
		::System::String* FCAHMLGMDMN; // 0x60
		::RPG::GameCore::DynamicFloat* OFBPKCNCGFG; // 0x68
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x70
		::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x78
		::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x7C
		::RPG::GameCore::BoolEx IOBJFEJFLJP; // 0x80
		::System::Int32 EIADCADKKDN; // 0x84
		::System::Int32 EOIHOACNHDH; // 0x88
		::RPG::GameCore::EnergyBarState MEPFOEEGBEA; // 0x8C
		::System::Int32 IMPAJLCMHFP; // 0x90
		::RPG::GameCore::BoolEx BGCEFKAHBDE; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLBMMLNLGC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFLBMMLNLGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFLBMMLNLGC*))((::PBYTE)hIl2Cpp + FFLBMMLNLGC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFLBMMLNLGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFLBMMLNLGC*))((::PBYTE)hIl2Cpp + FFLBMMLNLGC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
