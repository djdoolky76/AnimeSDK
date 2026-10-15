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

#define EJOBDMJKJGE_AGANFOOPFDD_OFFSET UNITYSDK_OFFSET(0x154E6550)
#define EJOBDMJKJGE_BBFKJMDFGNB_OFFSET UNITYSDK_OFFSET(0x154E61C0)
#define EJOBDMJKJGE_CTOR_OFFSET UNITYSDK_OFFSET(0x154E6870)
#define EJOBDMJKJGE_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x154E60A0)
#define EJOBDMJKJGE_GBBODEIFAMF_OFFSET UNITYSDK_OFFSET(0x154E65F0)
#define EJOBDMJKJGE_NGFGKIFCEMB_OFFSET UNITYSDK_OFFSET(0x154E62E0)
#define EJOBDMJKJGE_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x154E5E40)
#define EJOBDMJKJGE_OFEMKJPLDNN_OFFSET UNITYSDK_OFFSET(0x154E67D0)
#define EJOBDMJKJGE__ONBIND_OFFSET UNITYSDK_OFFSET(0x154E5B90)

inline static constexpr unsigned int EJOBDMJKJGE_TypeDefinitionIndex = 72259;

	class EJOBDMJKJGE : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* HCMEOAMDOJA; // 0x60
		::UnityEngine::UI::Button* MDFBLLAGKPF; // 0x68
		::RPG::GameCore::GridFightManager* LKIGACIFAAA; // 0x70
		::UnityEngine::Animation* LEEJFLHCOPK; // 0x78
		::UnityEngine::UI::GridLayoutGroup* MBCDOOEGKKF; // 0x80
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
		::UnityEngine::UI::Button* ACHGKGCEDEH; // 0x90
		::RPG::Client::StaticListView* MHLINDENENF; // 0x98
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOBDMJKJGE_EKGCGIDIFJJ_OFFSET))(this);
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
