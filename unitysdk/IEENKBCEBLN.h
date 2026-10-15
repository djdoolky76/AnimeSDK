#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
class BGNDPIPJFCI;
class DBMBGHNGDCG;
class KLEFGGIHGMI;
class LEAKCHFEDDK;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define IEENKBCEBLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15EE9050)
#define IEENKBCEBLN_CEDIKGBJNIN_OFFSET UNITYSDK_OFFSET(0x15EE8900)
#define IEENKBCEBLN_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EE8410)
#define IEENKBCEBLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE83B0)
#define IEENKBCEBLN_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15EE89B0)
#define IEENKBCEBLN_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0x15EE8C90)
#define IEENKBCEBLN_GEDDJELNCGK_OFFSET UNITYSDK_OFFSET(0x15EE8E70)
#define IEENKBCEBLN_HJHGLIMIOOD_OFFSET UNITYSDK_OFFSET(0x15EE8B60)
#define IEENKBCEBLN_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0x15EE86C0)
#define IEENKBCEBLN_KEOBNDBABCP_OFFSET UNITYSDK_OFFSET(0x15EE8960)
#define IEENKBCEBLN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15EE85E0)
#define IEENKBCEBLN_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x15EE8BC0)
#define IEENKBCEBLN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EE8520)
#define IEENKBCEBLN_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0x15EE8650)
#define IEENKBCEBLN_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0x15EE8DE0)

inline static constexpr unsigned int IEENKBCEBLN_TypeDefinitionIndex = 73790;

	class IEENKBCEBLN : public ::HPKACEPPPCA
	{
	public:
		::UnityEngine::Object* FIBFENGIENJ; // 0x80
		::LEAKCHFEDDK* BNANADBMBNP; // 0x88
		::DBMBGHNGDCG* CMMGFDBIGPK; // 0x90
		::System::Action* JIBEAHHFBKA; // 0x98
		::System::Int32 JOMBDEFKEFK; // 0xA0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IEENKBCEBLN")->GetStaticField(0x47270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEENKBCEBLN_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::KLEFGGIHGMI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + IEENKBCEBLN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEENKBCEBLN_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::String* LNLHHJDJKBL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_LNLHHJDJKBL_OFFSET))(this);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + IEENKBCEBLN_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void KEOBNDBABCP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IEENKBCEBLN_KEOBNDBABCP_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + IEENKBCEBLN_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void HJHGLIMIOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_HJHGLIMIOOD_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Void ENNAMLJFOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_ENNAMLJFOLO_OFFSET))(this);
		}

		::System::Void CEDIKGBJNIN(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + IEENKBCEBLN_CEDIKGBJNIN_OFFSET))(this, a1);
		}

		::System::Void OGDLIONGCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_OGDLIONGCMP_OFFSET))(this);
		}

		::System::Void GEDDJELNCGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEENKBCEBLN_GEDDJELNCGK_OFFSET))(this);
		}

	};
