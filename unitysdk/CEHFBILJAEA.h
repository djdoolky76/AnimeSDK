#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class SetNavigationTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CEHFBILJAEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC9D54E0)
#define CEHFBILJAEA_DCJOBBMDGFB_OFFSET UNITYSDK_OFFSET(0xC9D55A0)
#define CEHFBILJAEA_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xC9D5890)
#define CEHFBILJAEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9D54F0)
#define CEHFBILJAEA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9D5840)

inline static constexpr unsigned int CEHFBILJAEA_TypeDefinitionIndex = 58562;

	class CEHFBILJAEA : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::SetNavigationTarget* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNavigationTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNavigationTarget*))((::PBYTE)hIl2Cpp + CEHFBILJAEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHFBILJAEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHFBILJAEA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEHFBILJAEA_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::System::Void DCJOBBMDGFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHFBILJAEA_DCJOBBMDGFB_OFFSET))(this);
		}

	};
