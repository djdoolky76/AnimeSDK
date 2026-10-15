#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define MBMOLIHNGAG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB867F30)
#define MBMOLIHNGAG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8680B0)
#define MBMOLIHNGAG_CNIFJPFGJJO_OFFSET UNITYSDK_OFFSET(0xB867C50)
#define MBMOLIHNGAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB867180)
#define MBMOLIHNGAG_DPEAECJLNHL_OFFSET UNITYSDK_OFFSET(0xB867E70)
#define MBMOLIHNGAG_FEEEEAFOKGH_OFFSET UNITYSDK_OFFSET(0xB867CF0)
#define MBMOLIHNGAG_HEFKJKDFHNO_OFFSET UNITYSDK_OFFSET(0xB867DB0)
#define MBMOLIHNGAG_IJAFPIDPMOH_OFFSET UNITYSDK_OFFSET(0xB867A20)
#define MBMOLIHNGAG_JCFDCEBMDEE_OFFSET UNITYSDK_OFFSET(0xB867A90)
#define MBMOLIHNGAG_JNMDIHGCDBK_OFFSET UNITYSDK_OFFSET(0xB867C00)
#define MBMOLIHNGAG_NCIIKKGNKOG_OFFSET UNITYSDK_OFFSET(0xB867540)
#define MBMOLIHNGAG_ODEAEJCPKEN_OFFSET UNITYSDK_OFFSET(0xB867CA0)
#define MBMOLIHNGAG_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB867050)
#define MBMOLIHNGAG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB8670C0)
#define MBMOLIHNGAG__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xB8676B0)
#define MBMOLIHNGAG__ONTICK_OFFSET UNITYSDK_OFFSET(0xB867800)
#define MBMOLIHNGAG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB867410)

inline static constexpr unsigned int MBMOLIHNGAG_TypeDefinitionIndex = 72026;

	class MBMOLIHNGAG : public ::RPG::Client::UIController
	{
	public:
		::UnityEngine::UI::Image* MPBNGLKAOAC; // 0x190
		::System::Single LLEAJIENJKP; // 0x198
		::System::Single BEPJIFHGKCL; // 0x19C
		::System::Single NHGFCDCCBNL; // 0x1A0
		::System::Single OKFMABJGOPI; // 0x1A4
		::RPG::GameCore::BattleTalkBGType LMLIFDOGNIM; // 0x1A8
		::System::Boolean HOLOCCCIKBH; // 0x1AC
		::System::Boolean CFNBGPMIDEF; // 0x1AD
		::System::Boolean PLNMBALOAJH; // 0x1AE
		// static const ::System::Object HGJIBGPGDKK; // 0x0
		// static const ::System::Object LMCEDLDIAAG; // 0x0
		// static const ::System::String* LEELCCBIHPD; // 0x0
		// static const ::System::String* IAFLGGCIHNJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::BattleTalkBGType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTalkBGType, ::System::Single))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnExitPreStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG__ONEXITPRESTEP_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBMOLIHNGAG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NCIIKKGNKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_NCIIKKGNKOG_OFFSET))(this);
		}

		::System::Void JCFDCEBMDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_JCFDCEBMDEE_OFFSET))(this);
		}

		::System::Void IJAFPIDPMOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_IJAFPIDPMOH_OFFSET))(this);
		}

		::System::Void JNMDIHGCDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_JNMDIHGCDBK_OFFSET))(this);
		}

		::System::Void CNIFJPFGJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_CNIFJPFGJJO_OFFSET))(this);
		}

		::System::Void ODEAEJCPKEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_ODEAEJCPKEN_OFFSET))(this);
		}

		::System::Void FEEEEAFOKGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_FEEEEAFOKGH_OFFSET))(this, a1);
		}

		::System::Void HEFKJKDFHNO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_HEFKJKDFHNO_OFFSET))(this, a1);
		}

		::System::Void DPEAECJLNHL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_DPEAECJLNHL_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMOLIHNGAG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
