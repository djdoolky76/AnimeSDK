#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOIKMFOGHAO.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class HEKOMMJCPJF;
class HLCPCNFMECN;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define IMENCDLHKAI_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0x164C48D0)
#define IMENCDLHKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x164C4BD0)
#define IMENCDLHKAI_EHGMEHPJPBD_OFFSET UNITYSDK_OFFSET(0x164C4510)
#define IMENCDLHKAI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x164C4470)
#define IMENCDLHKAI_KCFDDCKPFPE_OFFSET UNITYSDK_OFFSET(0x164C4820)
#define IMENCDLHKAI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164C4360)
#define IMENCDLHKAI_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x164C4B70)
#define IMENCDLHKAI_LMLFAEBBMFA_OFFSET UNITYSDK_OFFSET(0x164C4970)

inline static constexpr unsigned int IMENCDLHKAI_TypeDefinitionIndex = 57818;

	class IMENCDLHKAI : public ::System::Object
	{
	public:
		::System::String* FJEJHABHCPH; // 0x10
		::HLCPCNFMECN* HNJMIKCEINB; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::Il2CppArray<::HEKOMMJCPJF*>* EKONIPGDFNE; // 0x28
		::MOIKMFOGHAO GOPMOPPKFPH; // 0x30
		::AIBOPLOBAFN* BHIBFLIGINF; // 0x50
		::System::Int32 EMPOLDLHGPA; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::HEKOMMJCPJF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::HEKOMMJCPJF*>*))((::PBYTE)hIl2Cpp + IMENCDLHKAI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KCFDDCKPFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_KCFDDCKPFPE_OFFSET))(this);
		}

		::System::Void BFLENEMBIBM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMENCDLHKAI_BFLENEMBIBM_OFFSET))(this, a1);
		}

		::System::Void LMLFAEBBMFA(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IMENCDLHKAI_LMLFAEBBMFA_OFFSET))(this, a1, a2);
		}

		::System::Void EHGMEHPJPBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMENCDLHKAI_EHGMEHPJPBD_OFFSET))(this, a1);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_LEHKGLNGAGF_OFFSET))(this);
		}

	};
