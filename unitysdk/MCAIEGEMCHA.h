#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEADPAIDJP.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }
namespace System { class Object; }

#define MCAIEGEMCHA_AKMNLCIMBDN_OFFSET UNITYSDK_OFFSET(0xB86C140)
#define MCAIEGEMCHA_BNGPCLFGKGJ_OFFSET UNITYSDK_OFFSET(0xB86BAC0)
#define MCAIEGEMCHA_CIHHEMJAFCE_OFFSET UNITYSDK_OFFSET(0xB86C5E0)
#define MCAIEGEMCHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB86BAB0)
#define MCAIEGEMCHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86BA60)
#define MCAIEGEMCHA_EFBPPOHMBPA_OFFSET UNITYSDK_OFFSET(0xB86BFC0)
#define MCAIEGEMCHA_GET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0xB86CC10)
#define MCAIEGEMCHA_HPBCEAJLFKO_OFFSET UNITYSDK_OFFSET(0xB86CB70)
#define MCAIEGEMCHA_IJCGEPKLDFA_OFFSET UNITYSDK_OFFSET(0xB86C550)
#define MCAIEGEMCHA_JJLGKGLFOCI_OFFSET UNITYSDK_OFFSET(0xB86C3D0)
#define MCAIEGEMCHA_KFPKFMKJPNB_OFFSET UNITYSDK_OFFSET(0xB86C740)
#define MCAIEGEMCHA_LGIEPEKGNKL_1_OFFSET UNITYSDK_OFFSET(0xB86CAB0)
#define MCAIEGEMCHA_LGIEPEKGNKL_OFFSET UNITYSDK_OFFSET(0xB86CA40)
#define MCAIEGEMCHA_NFHGCBHBJMM_OFFSET UNITYSDK_OFFSET(0xB86C870)
#define MCAIEGEMCHA_PHGGIHIIDBI_OFFSET UNITYSDK_OFFSET(0xB86C8E0)
#define MCAIEGEMCHA_SET_SNOWBALLCOUNT_OFFSET UNITYSDK_OFFSET(0xB86CC20)

inline static constexpr unsigned int MCAIEGEMCHA_TypeDefinitionIndex = 78868;

	class MCAIEGEMCHA : public ::System::Object
	{
	public:
		::Il2CppArray<::ELEADPAIDJP>* FBMEPHLHHHK; // 0x10
		::System::Object* CKOPHCLJMJB; // 0x18
		::System::Int32 _SnowballCount_k__BackingField; // 0x20
		::System::Int32 NLIFGOAGCCG; // 0x24
		::System::Int32 DCBJLCHENHJ; // 0x28
		::System::Int32 HHGBDMEDCLL; // 0x2C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_DISPOSE_OFFSET))(this);
		}

		::System::Void BNGPCLFGKGJ(::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>*))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_BNGPCLFGKGJ_OFFSET))(this, a1);
		}

		::System::Boolean EFBPPOHMBPA(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_EFBPPOHMBPA_OFFSET))(this, a1, a2);
		}

		::System::Int32 AKMNLCIMBDN(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::BlockPuzzleLogicFourDirection))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_AKMNLCIMBDN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JJLGKGLFOCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_JJLGKGLFOCI_OFFSET))(this);
		}

		::RPG::Client::Prop::SnowballPuzzleBlockType IJCGEPKLDFA(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::Prop::SnowballPuzzleBlockType(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_IJCGEPKLDFA_OFFSET))(this, a1);
		}

		::System::Boolean CIHHEMJAFCE(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_CIHHEMJAFCE_OFFSET))(this, a1);
		}

		::System::Boolean KFPKFMKJPNB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_KFPKFMKJPNB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int NFHGCBHBJMM(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_NFHGCBHBJMM_OFFSET))(this, a1);
		}

		::System::Boolean PHGGIHIIDBI(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_PHGGIHIIDBI_OFFSET))(this, a1);
		}

		::System::Int32 LGIEPEKGNKL(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_LGIEPEKGNKL_OFFSET))(this, a1);
		}

		::System::Int32 LGIEPEKGNKL_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_LGIEPEKGNKL_1_OFFSET))(this, a1);
		}

		::System::Int32 HPBCEAJLFKO(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_HPBCEAJLFKO_OFFSET))(this, a1);
		}

		::System::Int32 get_SnowballCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_GET_SNOWBALLCOUNT_OFFSET))(this);
		}

		::System::Void set_SnowballCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCAIEGEMCHA_SET_SNOWBALLCOUNT_OFFSET))(this, a1);
		}

	};
