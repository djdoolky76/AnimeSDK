#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/UI/MonoBaseIcon.h"
#include "unitysdk/B39AAAD1233537D7/FEDE619E1873776A.h"
#include "unitysdk/E68AA4EB51923C98/E1D35B3BB6EBB217.h"

class B122DFB4F77F08CF;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define ABC_UI_MONOAVATARICON_A3580EF2384BDA73_OFFSET UNITYSDK_OFFSET(0x1FB6620)
#define ABC_UI_MONOAVATARICON_A44E7D9799570938_OFFSET UNITYSDK_OFFSET(0x1FB6550)
#define ABC_UI_MONOAVATARICON_AABB0BE957DCC298_OFFSET UNITYSDK_OFFSET(0x1FB6770)
#define ABC_UI_MONOAVATARICON_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x1FB6260)
#define ABC_UI_MONOAVATARICON_AB6E11B4BEA48C80_OFFSET UNITYSDK_OFFSET(0x1FB7330)
#define ABC_UI_MONOAVATARICON_AEA5033A27AE946C_1_OFFSET UNITYSDK_OFFSET(0x1FB69F0)
#define ABC_UI_MONOAVATARICON_AEA5033A27AE946C_OFFSET UNITYSDK_OFFSET(0x1FB6950)
#define ABC_UI_MONOAVATARICON_B34AD84704B23BB0_OFFSET UNITYSDK_OFFSET(0x1FB67F0)
#define ABC_UI_MONOAVATARICON_B3F56D93C4FBD3E6_OFFSET UNITYSDK_OFFSET(0x1FB7320)
#define ABC_UI_MONOAVATARICON_BC0056FCAD4A3012_OFFSET UNITYSDK_OFFSET(0x1FB6C20)
#define ABC_UI_MONOAVATARICON_E248926B003EED6A_OFFSET UNITYSDK_OFFSET(0x1FB7350)
#define ABC_UI_MONOAVATARICON_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x1FB6F70)
#define ABC_UI_MONOAVATARICON_E4C0AFD5CF5AE1F2_OFFSET UNITYSDK_OFFSET(0x1FB6A90)
#define ABC_UI_MONOAVATARICON_E5EE9363574FFF0C_OFFSET UNITYSDK_OFFSET(0x1FB7340)
#define ABC_UI_MONOAVATARICON_E702243EEE5E5AAB_OFFSET UNITYSDK_OFFSET(0x1FB6B90)
#define ABC_UI_MONOAVATARICON_EA08B4CB1B2FBB88_OFFSET UNITYSDK_OFFSET(0x1FB68E0)
#define ABC_UI_MONOAVATARICON_F1BD71C4E2E2C043_OFFSET UNITYSDK_OFFSET(0x1FB7220)
#define ABC_UI_MONOAVATARICON_F7A5876E3576EEDD_OFFSET UNITYSDK_OFFSET(0x1FB6B20)
#define ABC_UI_MONOAVATARICON_F7C815777BC5DEEF_OFFSET UNITYSDK_OFFSET(0x1FB6CA0)
#define ABC_UI_MONOAVATARICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7360)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoAvatarIcon_TypeDefinitionIndex = 6868;

	class MonoAvatarIcon : public ::ABC::UI::MonoBaseIcon
	{
	public:
		::UnityEngine::Transform* TeamIdx; // 0x78
		::ABC::UI::MonoLocalizedTmp* TeamIdxText; // 0x80
		::UnityEngine::Transform* LeaderMarkTrans; // 0x88
		::UnityEngine::UI::Image* RarityImg; // 0x90
		::ABC::UI::MonoPrefabLoader* TraitIconLoader; // 0x98
		::ABC::UI::MonoPrefabLoader* RankStarLoader; // 0xA0
		::ABC::UI::MonoPrefabLoader* RedDotLoader; // 0xA8
		::UnityEngine::RectTransform* LevelPanel; // 0xB0
		::ABC::UI::MonoLocalizedTmp* LevelText; // 0xB8
		::UnityEngine::RectTransform* RankIconPanel; // 0xC0
		::ABC::UI::MonoLocalizedTmp* RankText; // 0xC8
		::UnityEngine::RectTransform* PanelFollow; // 0xD0
		::UnityEngine::Animation* FilterAnim; // 0xD8
		::UnityEngine::GameObject* FilterGO; // 0xE0
		::ABC::UI::MonoPrefabLoader* TrialTipLoader; // 0xE8
		::UnityEngine::RectTransform* RedDotTransform; // 0xF0
		::UnityEngine::RectTransform* NewTransform; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E3BB9B66467C9791; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AF41A128CA036E68; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* B2BE8D0841068CA9; // 0x110
		::UnityEngine::GameObject* AF53609D181C1E68; // 0x118
		::UnityEngine::GameObject* B432638FB28A3138; // 0x120

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F1BD71C4E2E2C043(::System::Boolean A450CAA3C0C5E2B4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_F1BD71C4E2E2C043_OFFSET))(this, A450CAA3C0C5E2B4);
		}

		::System::Void F7C815777BC5DEEF(::System::Collections::Generic::List_1<::System::Int32>* E42C647AD6F6DBE5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_F7C815777BC5DEEF_OFFSET))(this, E42C647AD6F6DBE5);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON__CTOR_OFFSET))(this);
		}

		::System::Void B3F56D93C4FBD3E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_B3F56D93C4FBD3E6_OFFSET))(this);
		}

		::System::Void B34AD84704B23BB0(::System::UInt32 F3851C787B08F75B)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_B34AD84704B23BB0_OFFSET))(this, F3851C787B08F75B);
		}

		::System::Void AEA5033A27AE946C(::System::UInt32 B28130503AE8B243, ::E68AA4EB51923C98::E1D35B3BB6EBB217 BB0959721158C25F)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::E68AA4EB51923C98::E1D35B3BB6EBB217))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_AEA5033A27AE946C_OFFSET))(this, B28130503AE8B243, BB0959721158C25F);
		}

		::System::Void E5EE9363574FFF0C(::System::UInt32 EF750947C30CE985)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_E5EE9363574FFF0C_OFFSET))(this, EF750947C30CE985);
		}

		::System::Void E3D815C5535F6868(::B122DFB4F77F08CF* B4A02C0E29F48225, ::System::Action* FABBF4F55603A392, ::E68AA4EB51923C98::E1D35B3BB6EBB217 BB0959721158C25F)
		{
			return ((::System::Void(*)(::PVOID, ::B122DFB4F77F08CF*, ::System::Action*, ::E68AA4EB51923C98::E1D35B3BB6EBB217))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_E3D815C5535F6868_OFFSET))(this, B4A02C0E29F48225, FABBF4F55603A392, BB0959721158C25F);
		}

		::System::Void AABB0BE957DCC298()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_AABB0BE957DCC298_OFFSET))(this);
		}

		::System::Void A3580EF2384BDA73(::System::Boolean BBBEBFE092CEF855, ::System::Boolean F7EA18171EC17A3B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_A3580EF2384BDA73_OFFSET))(this, BBBEBFE092CEF855, F7EA18171EC17A3B);
		}

		::System::Void A44E7D9799570938(::System::Boolean A450CAA3C0C5E2B4, ::System::String* F2AFD5AEF9D79076)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_A44E7D9799570938_OFFSET))(this, A450CAA3C0C5E2B4, F2AFD5AEF9D79076);
		}

		::System::Void EA08B4CB1B2FBB88(::System::UInt32 E14961743E675799)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_EA08B4CB1B2FBB88_OFFSET))(this, E14961743E675799);
		}

		::System::Void BC0056FCAD4A3012(::System::Boolean B26E9B7ED2F1352E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_BC0056FCAD4A3012_OFFSET))(this, B26E9B7ED2F1352E);
		}

		::System::Void E4C0AFD5CF5AE1F2(::B39AAAD1233537D7::FEDE619E1873776A B0241461F7917A81)
		{
			return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::FEDE619E1873776A))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_E4C0AFD5CF5AE1F2_OFFSET))(this, B0241461F7917A81);
		}

		::System::Void E702243EEE5E5AAB(::System::Int32 AA292D26F1CE96C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_E702243EEE5E5AAB_OFFSET))(this, AA292D26F1CE96C4);
		}

		::System::Void AEA5033A27AE946C_1(::System::Int32 B28130503AE8B243, ::E68AA4EB51923C98::E1D35B3BB6EBB217 BB0959721158C25F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::E68AA4EB51923C98::E1D35B3BB6EBB217))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_AEA5033A27AE946C_1_OFFSET))(this, B28130503AE8B243, BB0959721158C25F);
		}

		::System::Void F7A5876E3576EEDD(::System::Boolean A1B2645136D69016)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_F7A5876E3576EEDD_OFFSET))(this, A1B2645136D69016);
		}

		::System::Void E248926B003EED6A(::System::UInt32 EF750947C30CE985, ::E68AA4EB51923C98::E1D35B3BB6EBB217 A468C50BBCDB925A)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::E68AA4EB51923C98::E1D35B3BB6EBB217))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_E248926B003EED6A_OFFSET))(this, EF750947C30CE985, A468C50BBCDB925A);
		}

		::System::Void AB6E11B4BEA48C80()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOAVATARICON_AB6E11B4BEA48C80_OFFSET))(this);
		}
	};
}
