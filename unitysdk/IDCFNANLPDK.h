#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"
class GDGKGOGKPCG;

#define IDCFNANLPDK_BADPCENABCL_OFFSET UNITYSDK_OFFSET(0x15EACF00)
#define IDCFNANLPDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EAC570)
#define IDCFNANLPDK_HEGENHLOKGE_OFFSET UNITYSDK_OFFSET(0x15EAC5C0)
#define IDCFNANLPDK_IEACPFOKFBG_OFFSET UNITYSDK_OFFSET(0x15EAC8D0)
#define IDCFNANLPDK_LAMPEHHKEIA_OFFSET UNITYSDK_OFFSET(0x15EAD170)
#define IDCFNANLPDK_MIHGOCNHAKE_OFFSET UNITYSDK_OFFSET(0x15EAD020)
#define IDCFNANLPDK_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x15EAC850)
#define IDCFNANLPDK__ONTICK_OFFSET UNITYSDK_OFFSET(0x15EACB60)
#define IDCFNANLPDK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15EAC950)

	class IDCFNANLPDK : public ::RPG::Client::UIController
	{
	public:
		::System::Boolean IAMCONEKFEG; // 0x190
		::System::Byte _padding0[0x3];
		::System::Single APCLDBABACD; // 0x194
		::RPG::GameCore::ScreenTransferMode GIDCEIHBPAG; // 0x198
		::System::Single CJJADBBPGME; // 0x19C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNANLPDK_CTOR_OFFSET))(this);
		}

		::System::Void HEGENHLOKGE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCFNANLPDK_HEGENHLOKGE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNANLPDK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCFNANLPDK__ONTICK_OFFSET))(this, a1);
		}

		::UnityEngine::Color IEACPFOKFBG()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNANLPDK_IEACPFOKFBG_OFFSET))(this);
		}

		::UnityEngine::Color BADPCENABCL()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNANLPDK_BADPCENABCL_OFFSET))(this);
		}

		::UnityEngine::Color MIHGOCNHAKE(::System::Single a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCFNANLPDK_MIHGOCNHAKE_OFFSET))(this, a1);
		}

		::System::Single LAMPEHHKEIA(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + IDCFNANLPDK_LAMPEHHKEIA_OFFSET))(this, a1, a2);
		}

		::GDGKGOGKPCG* OICGPNAMNAI()
		{
			return ((::GDGKGOGKPCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCFNANLPDK_OICGPNAMNAI_OFFSET))(this);
		}

	};
