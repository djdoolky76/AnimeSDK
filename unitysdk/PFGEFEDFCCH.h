#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class GridFightPrepTutorialOP; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PFGEFEDFCCH_CTOR_OFFSET UNITYSDK_OFFSET(0xC20E9A0)
#define PFGEFEDFCCH_DKPFKIICAFB_OFFSET UNITYSDK_OFFSET(0xC20EDC0)
#define PFGEFEDFCCH_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xC20E9B0)
#define PFGEFEDFCCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC20EAD0)
#define PFGEFEDFCCH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC20ED10)
#define PFGEFEDFCCH_PLJCFNAELAG_OFFSET UNITYSDK_OFFSET(0xC20EA10)

inline static constexpr unsigned int PFGEFEDFCCH_TypeDefinitionIndex = 53584;

	class PFGEFEDFCCH : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::GridFightPrepTutorialOP* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepTutorialOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepTutorialOP*))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void DKPFKIICAFB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_DKPFKIICAFB_OFFSET))(this, a1);
		}

		::System::Void PLJCFNAELAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGEFEDFCCH_PLJCFNAELAG_OFFSET))(this);
		}

	};
