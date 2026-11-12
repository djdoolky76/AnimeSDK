#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace XLua { class LuaTable; }

#define EJOBDMJKJGE_AGANFOOPFDD_OFFSET UNITYSDK_OFFSET(0x1643A160)
#define EJOBDMJKJGE_BBFKJMDFGNB_OFFSET UNITYSDK_OFFSET(0x16439DD0)
#define EJOBDMJKJGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1643A480)
#define EJOBDMJKJGE_GBBODEIFAMF_OFFSET UNITYSDK_OFFSET(0x1643A200)
#define EJOBDMJKJGE_NGFGKIFCEMB_OFFSET UNITYSDK_OFFSET(0x16439EF0)
#define EJOBDMJKJGE_OFEMKJPLDNN_OFFSET UNITYSDK_OFFSET(0x1643A3E0)
#define EJOBDMJKJGE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16439A40)
#define EJOBDMJKJGE__ONBIND_OFFSET UNITYSDK_OFFSET(0x164395C0)
#define EJOBDMJKJGE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16439CB0)

inline static constexpr unsigned int EJOBDMJKJGE_TypeDefinitionIndex = 74335;

	class EJOBDMJKJGE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::GridLayoutGroup* MBCDOOEGKKF; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* HCMEOAMDOJA; // 0x68
		::UnityEngine::UI::Button* ACHGKGCEDEH; // 0x70
		::UnityEngine::UI::Button* MDFBLLAGKPF; // 0x78
		::UnityEngine::Animation* LEEJFLHCOPK; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
		::RPG::Client::StaticListView* MHLINDENENF; // 0x90
		::RPG::GameCore::GridFightManager* LKIGACIFAAA; // 0x98
		::System::Boolean OEBHPNCLIAH; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object IOAGJCLKELH; // 0x0
		// static const ::System::Object OJMDMIEOKDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void BBFKJMDFGNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_BBFKJMDFGNB_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* NGFGKIFCEMB(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_NGFGKIFCEMB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGANFOOPFDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_AGANFOOPFDD_OFFSET))(this, a1);
		}

		::System::Void OFEMKJPLDNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_OFEMKJPLDNN_OFFSET))(this, a1);
		}

		::System::Void GBBODEIFAMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_GBBODEIFAMF_OFFSET))(this, a1);
		}

	};
