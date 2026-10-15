#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EKFMIDBJDIA;
class KGDBHKBCNGJ;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }

#define GJFKCILFLKP_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0x15A65E30)
#define GJFKCILFLKP_AHGNKLBHFGK_OFFSET UNITYSDK_OFFSET(0x15A661A0)
#define GJFKCILFLKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A664A0)
#define GJFKCILFLKP_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x15A66230)
#define GJFKCILFLKP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15A657D0)
#define GJFKCILFLKP_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x15A660B0)
#define GJFKCILFLKP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15A658F0)
#define GJFKCILFLKP_GHDJIGFHAGK_OFFSET UNITYSDK_OFFSET(0x15A662E0)
#define GJFKCILFLKP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15A65C70)
#define GJFKCILFLKP_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x15A65DA0)
#define GJFKCILFLKP_MBMEKCOIPOI_OFFSET UNITYSDK_OFFSET(0x15A65BB0)
#define GJFKCILFLKP__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A65720)
#define GJFKCILFLKP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15A65CD0)
#define GJFKCILFLKP__ONTICK_OFFSET UNITYSDK_OFFSET(0x15A65B50)

	class GJFKCILFLKP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x68
		::RPG::GameCore::TeamDataComponent* OHACPLHFMLK; // 0x70
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x80
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x88
		::KGDBHKBCNGJ* GPBIMKJCJEG; // 0x90
		::RPG::GameCore::TeamDataComponent* DDBFHLLLICJ; // 0x98
		::System::Boolean FGFLMPNLGPF; // 0xA0
		// static const ::System::String* IAJEFHLDLCD; // 0x0
		// static const ::System::String* CDFNBCHKFPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJFKCILFLKP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJFKCILFLKP_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJFKCILFLKP_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFKCILFLKP_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFKCILFLKP_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void AHGNKLBHFGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFKCILFLKP_AHGNKLBHFGK_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GJFKCILFLKP_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void GHDJIGFHAGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFKCILFLKP_GHDJIGFHAGK_OFFSET))(this, a1);
		}

		::System::Void MBMEKCOIPOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP_MBMEKCOIPOI_OFFSET))(this);
		}

	};
