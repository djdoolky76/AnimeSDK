#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
class PPMNNDCCGIP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSetupTwoStateUITrigger; }
namespace RPG::GameCore { class TaskContext; }

#define LJGPNCKBGOF_CTOR_OFFSET UNITYSDK_OFFSET(0x17330290)
#define LJGPNCKBGOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17330B90)
#define LJGPNCKBGOF_FGNPKGBGFEM_OFFSET UNITYSDK_OFFSET(0x17330980)
#define LJGPNCKBGOF_GMKMDKJKMBN_OFFSET UNITYSDK_OFFSET(0x17330770)
#define LJGPNCKBGOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173302C0)

inline static constexpr unsigned int LJGPNCKBGOF_TypeDefinitionIndex = 59611;

	class LJGPNCKBGOF
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::PPMNNDCCGIP* GALAHGAJODG; // 0x30
		::RPG::GameCore::PropComponent* PEDKDCGPHAM; // 0x38
		::System::Boolean OMOOBJJFMFH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupTwoStateUITrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupTwoStateUITrigger*))((::PBYTE)hIl2Cpp + LJGPNCKBGOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPNCKBGOF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPNCKBGOF_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TextID GMKMDKJKMBN()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPNCKBGOF_GMKMDKJKMBN_OFFSET))(this);
		}

		::RPG::Client::TextID FGNPKGBGFEM()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGPNCKBGOF_FGNPKGBGFEM_OFFSET))(this);
		}

	};
