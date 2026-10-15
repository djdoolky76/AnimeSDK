#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/UnityEngine/Color.h"
class GDGKGOGKPCG;

#define IDCFNANLPDK_BADPCENABCL_OFFSET UNITYSDK_OFFSET(0x15EA0FF0)
#define IDCFNANLPDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5E290)
#define IDCFNANLPDK_HEGENHLOKGE_OFFSET UNITYSDK_OFFSET(0x15E5E2E0)
#define IDCFNANLPDK_IEACPFOKFBG_OFFSET UNITYSDK_OFFSET(0x15E5E570)
#define IDCFNANLPDK_LAMPEHHKEIA_OFFSET UNITYSDK_OFFSET(0x15EA1300)
#define IDCFNANLPDK_MIHGOCNHAKE_OFFSET UNITYSDK_OFFSET(0x15EA11B0)
#define IDCFNANLPDK_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x15EA1120)
#define IDCFNANLPDK__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E5E800)
#define IDCFNANLPDK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15E5E5F0)

inline static constexpr unsigned int IDCFNANLPDK_TypeDefinitionIndex = 73104;

	class IDCFNANLPDK : public ::RPG::Client::UIController
	{
	public:
		::System::Single CJJADBBPGME; // 0x190
		::System::Single APCLDBABACD; // 0x194
		::RPG::GameCore::ScreenTransferMode GIDCEIHBPAG; // 0x198
		::System::Boolean IAMCONEKFEG; // 0x19C
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
