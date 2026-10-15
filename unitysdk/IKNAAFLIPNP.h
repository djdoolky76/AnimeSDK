#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAGNDEHIOI.h"
class EHGIBDJKDFH;
class EKDCBAAGNJH;
class GHNDHIKGIFB;
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define IKNAAFLIPNP_AAKIBAALGPM_OFFSET UNITYSDK_OFFSET(0x1648F0C0)
#define IKNAAFLIPNP_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x1648F240)
#define IKNAAFLIPNP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1648F660)
#define IKNAAFLIPNP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1648F7A0)
#define IKNAAFLIPNP_CFBIBGCIGNB_OFFSET UNITYSDK_OFFSET(0x1648F310)
#define IKNAAFLIPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1648F8C0)
#define IKNAAFLIPNP_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x1648F050)
#define IKNAAFLIPNP_EGGFKAADJDK_OFFSET UNITYSDK_OFFSET(0x1648EDD0)
#define IKNAAFLIPNP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1648F150)
#define IKNAAFLIPNP_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0x1648EEC0)
#define IKNAAFLIPNP_JHEPCILNLMI_OFFSET UNITYSDK_OFFSET(0x1648F570)
#define IKNAAFLIPNP_JKLFLAAJHKJ_OFFSET UNITYSDK_OFFSET(0x1648EF20)
#define IKNAAFLIPNP_MFGMFILAAIC_OFFSET UNITYSDK_OFFSET(0x1648F3A0)
#define IKNAAFLIPNP_MPDGHOJHPAO_OFFSET UNITYSDK_OFFSET(0x1648F4B0)
#define IKNAAFLIPNP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1648EA20)

inline static constexpr unsigned int IKNAAFLIPNP_TypeDefinitionIndex = 72253;

	class IKNAAFLIPNP : public ::AGAGNDEHIOI
	{
	public:
		::EKDCBAAGNJH* PEBKCFNHNLN; // 0x78
		::EHGIBDJKDFH* MAMNINMDENK; // 0x80
		::GHNDHIKGIFB* LMOMJGDIBBE; // 0x88
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0x90
		::System::Boolean JHLKDDEIHFG; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP__ONBIND_OFFSET))(this);
		}

		::LEEEHNMHAAP* FIADDJLKIGB(::GIPFFGFJCBF_PBICBEEGHJO* a1)
		{
			return ((::LEEEHNMHAAP*(*)(::PVOID, ::GIPFFGFJCBF_PBICBEEGHJO*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_FIADDJLKIGB_OFFSET))(this, a1);
		}

		::System::Void JKLFLAAJHKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_JKLFLAAJHKJ_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void AAKIBAALGPM(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_AAKIBAALGPM_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarDataComponent* CFBIBGCIGNB()
		{
			return ((::RPG::GameCore::AvatarDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_CFBIBGCIGNB_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightAvatarData* EGGFKAADJDK()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_EGGFKAADJDK_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* MFGMFILAAIC()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_MFGMFILAAIC_OFFSET))(this);
		}

		::System::Void MPDGHOJHPAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_MPDGHOJHPAO_OFFSET))(this, a1);
		}

		::System::Void JHEPCILNLMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_JHEPCILNLMI_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
