#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowSkillCutIn; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HFLDLFGEKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7BF90)
#define HFLDLFGEKFN_DBDOKHNNAKM_OFFSET UNITYSDK_OFFSET(0x15C7C780)
#define HFLDLFGEKFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C7BFA0)
#define HFLDLFGEKFN_EGLMCGOPKBB_OFFSET UNITYSDK_OFFSET(0x15C7CDE0)
#define HFLDLFGEKFN_FPJHLJOLEKM_OFFSET UNITYSDK_OFFSET(0x15C7CB50)
#define HFLDLFGEKFN_GPFNMLHMNCP_OFFSET UNITYSDK_OFFSET(0x15C7C5B0)
#define HFLDLFGEKFN_JMIIJBFHMNA_OFFSET UNITYSDK_OFFSET(0x15C7C9C0)
#define HFLDLFGEKFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C7BFE0)
#define HFLDLFGEKFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C7CCB0)
#define HFLDLFGEKFN_PAHPEBOPJIB_OFFSET UNITYSDK_OFFSET(0x15C7C310)
#define HFLDLFGEKFN_TICK_OFFSET UNITYSDK_OFFSET(0x15C7CD60)

inline static constexpr unsigned int HFLDLFGEKFN_TypeDefinitionIndex = 56452;

	class HFLDLFGEKFN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowSkillCutIn* OFKGLJOAMLD; // 0x20
		::System::Single DEIKJNCEEOD; // 0x28
		// static const ::System::Object MKIAIOPGPDE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillCutIn*))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_TICK_OFFSET))(this, a1);
		}

		::System::Void PAHPEBOPJIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_PAHPEBOPJIB_OFFSET))(this);
		}

		::System::Void GPFNMLHMNCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_GPFNMLHMNCP_OFFSET))(this);
		}

		::System::Void JMIIJBFHMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_JMIIJBFHMNA_OFFSET))(this);
		}

		::System::Void DBDOKHNNAKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_DBDOKHNNAKM_OFFSET))(this);
		}

		::System::Void EGLMCGOPKBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_EGLMCGOPKBB_OFFSET))(this, a1);
		}

		::System::Single FPJHLJOLEKM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLDLFGEKFN_FPJHLJOLEKM_OFFSET))(this);
		}

	};
