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

#define IMENCDLHKAI_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0x1A5D0CC0)
#define IMENCDLHKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D12C0)
#define IMENCDLHKAI_EHGMEHPJPBD_OFFSET UNITYSDK_OFFSET(0x1A5D0900)
#define IMENCDLHKAI_GHONAOFLCIO_OFFSET UNITYSDK_OFFSET(0x1A5D0DB0)
#define IMENCDLHKAI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1A5D0860)
#define IMENCDLHKAI_KCFDDCKPFPE_OFFSET UNITYSDK_OFFSET(0x1A5D0C10)
#define IMENCDLHKAI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A5D0750)
#define IMENCDLHKAI_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x1A5D1250)
#define IMENCDLHKAI_LMLFAEBBMFA_OFFSET UNITYSDK_OFFSET(0x1A5D0E20)
#define IMENCDLHKAI_LMLOIPHLPPM_OFFSET UNITYSDK_OFFSET(0x1A5D12B0)
#define IMENCDLHKAI_MKEHPLBJICO_OFFSET UNITYSDK_OFFSET(0x1A5D1070)

inline static constexpr unsigned int IMENCDLHKAI_TypeDefinitionIndex = 59053;

	class IMENCDLHKAI : public ::System::Object
	{
	public:
		::MOIKMFOGHAO GOPMOPPKFPH; // 0x10
		::HLCPCNFMECN* HNJMIKCEINB; // 0x30
		::System::String* FJEJHABHCPH; // 0x38
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x40
		::Il2CppArray<::HEKOMMJCPJF*>* EKONIPGDFNE; // 0x48
		::AIBOPLOBAFN* BHIBFLIGINF; // 0x50
		::System::Int32 EMPOLDLHGPA; // 0x58
		::System::Int32 MFDBOIFKJFK; // 0x5C
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

		::System::Void MKEHPLBJICO(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IMENCDLHKAI_MKEHPLBJICO_OFFSET))(this, a1, a2);
		}

		::System::Void EHGMEHPJPBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMENCDLHKAI_EHGMEHPJPBD_OFFSET))(this, a1);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_LEHKGLNGAGF_OFFSET))(this);
		}

		::System::Int32 LMLOIPHLPPM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI_LMLOIPHLPPM_OFFSET))(this);
		}

		::System::Int32 GHONAOFLCIO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMENCDLHKAI_GHONAOFLCIO_OFFSET))(this, a1);
		}

	};
