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

#define GJFKCILFLKP_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0x169A1230)
#define GJFKCILFLKP_AHGNKLBHFGK_OFFSET UNITYSDK_OFFSET(0x169A15A0)
#define GJFKCILFLKP_CTOR_OFFSET UNITYSDK_OFFSET(0x169A18B0)
#define GJFKCILFLKP_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x169A1630)
#define GJFKCILFLKP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x169A0BD0)
#define GJFKCILFLKP_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x169A14B0)
#define GJFKCILFLKP_GHDJIGFHAGK_OFFSET UNITYSDK_OFFSET(0x169A16E0)
#define GJFKCILFLKP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x169A1070)
#define GJFKCILFLKP_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x169A11A0)
#define GJFKCILFLKP_MBMEKCOIPOI_OFFSET UNITYSDK_OFFSET(0x169A0FB0)
#define GJFKCILFLKP__ONBIND_OFFSET UNITYSDK_OFFSET(0x169A0A00)
#define GJFKCILFLKP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x169A10E0)
#define GJFKCILFLKP__ONTICK_OFFSET UNITYSDK_OFFSET(0x169A0F50)
#define GJFKCILFLKP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169A0CF0)

inline static constexpr unsigned int GJFKCILFLKP_TypeDefinitionIndex = 73639;

	class GJFKCILFLKP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x68
		::KGDBHKBCNGJ* GPBIMKJCJEG; // 0x70
		::RPG::GameCore::TeamDataComponent* DDBFHLLLICJ; // 0x78
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x80
		::RPG::GameCore::TeamDataComponent* OHACPLHFMLK; // 0x88
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFKCILFLKP__SETUPVIEW_OFFSET))(this);
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
