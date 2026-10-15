#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define JLCHPCEDGCL_CKFMOEMPHOF_OFFSET UNITYSDK_OFFSET(0xB2392B0)
#define JLCHPCEDGCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB238B00)
#define JLCHPCEDGCL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB238B50)
#define JLCHPCEDGCL_HFHAHMDHKEP_OFFSET UNITYSDK_OFFSET(0xB239050)
#define JLCHPCEDGCL_HJHENECMDAI_OFFSET UNITYSDK_OFFSET(0xB238D90)
#define JLCHPCEDGCL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB238B10)
#define JLCHPCEDGCL_NPDIJPHJGPF_OFFSET UNITYSDK_OFFSET(0xB238BA0)
#define JLCHPCEDGCL_OJNDJCPENBM_OFFSET UNITYSDK_OFFSET(0xB238EA0)
#define JLCHPCEDGCL_PNIPHOJJLFP_OFFSET UNITYSDK_OFFSET(0xB239110)

	class JLCHPCEDGCL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGPBBEOEPCB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HJHENECMDAI(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_HJHENECMDAI_OFFSET))(this, a1, a2);
		}

		::System::Void PNIPHOJJLFP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_PNIPHOJJLFP_OFFSET))(this, a1, a2);
		}

		::System::Void CKFMOEMPHOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_CKFMOEMPHOF_OFFSET))(this);
		}

		::System::Void OJNDJCPENBM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_OJNDJCPENBM_OFFSET))(this, a1);
		}

		::System::Void NPDIJPHJGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_NPDIJPHJGPF_OFFSET))(this);
		}

		::System::Void HFHAHMDHKEP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLCHPCEDGCL_HFHAHMDHKEP_OFFSET))(this, a1);
		}

	};
