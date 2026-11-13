#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGAGNDEHIOI.h"
class EHGIBDJKDFH;
class EKDCBAAGNJH;
class FJJDEHFCIIL;
class GHNDHIKGIFB;
class GIPFFGFJCBF_PBICBEEGHJO;
class LEEEHNMHAAP;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define IKNAAFLIPNP_AAKIBAALGPM_OFFSET UNITYSDK_OFFSET(0x1B57E200)
#define IKNAAFLIPNP_AOCANOGJPDC_OFFSET UNITYSDK_OFFSET(0x1B57E750)
#define IKNAAFLIPNP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B57EBD0)
#define IKNAAFLIPNP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B57ED50)
#define IKNAAFLIPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B57EEB0)
#define IKNAAFLIPNP_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x1B57E190)
#define IKNAAFLIPNP_EGGFKAADJDK_OFFSET UNITYSDK_OFFSET(0x1B57DDF0)
#define IKNAAFLIPNP_FIADDJLKIGB_OFFSET UNITYSDK_OFFSET(0x1B57DE70)
#define IKNAAFLIPNP_IOEBHFGLHPK_OFFSET UNITYSDK_OFFSET(0x1B57E370)
#define IKNAAFLIPNP_JHEPCILNLMI_OFFSET UNITYSDK_OFFSET(0x1B57E9F0)
#define IKNAAFLIPNP_JKLFLAAJHKJ_OFFSET UNITYSDK_OFFSET(0x1B57DED0)
#define IKNAAFLIPNP_KOGPAOGHLIK_OFFSET UNITYSDK_OFFSET(0x1B57EAE0)
#define IKNAAFLIPNP_MPDGHOJHPAO_OFFSET UNITYSDK_OFFSET(0x1B57E930)
#define IKNAAFLIPNP__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B57D840)
#define IKNAAFLIPNP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B57E540)

inline static constexpr unsigned int IKNAAFLIPNP_TypeDefinitionIndex = 74323;

	class IKNAAFLIPNP : public ::AGAGNDEHIOI
	{
	public:
		::UnityEngine::Transform* GEIOBEDPEOC; // 0x78
		::FJJDEHFCIIL* GOJLHNMDGKD; // 0x80
		::EHGIBDJKDFH* MAMNINMDENK; // 0x88
		::UnityEngine::UI::Button* NHNPPHCCPGA; // 0x90
		::GHNDHIKGIFB* LMOMJGDIBBE; // 0x98
		::EKDCBAAGNJH* PEBKCFNHNLN; // 0xA0
		::System::Boolean JHLKDDEIHFG; // 0xA8
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

		::System::Void IOEBHFGLHPK(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_IOEBHFGLHPK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void AOCANOGJPDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_AOCANOGJPDC_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleGridFightAvatarData* EGGFKAADJDK()
		{
			return ((::RPG::GameCore::BattleGridFightAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_EGGFKAADJDK_OFFSET))(this);
		}

		::System::Void MPDGHOJHPAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_MPDGHOJHPAO_OFFSET))(this, a1);
		}

		::System::Void JHEPCILNLMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_JHEPCILNLMI_OFFSET))(this, a1);
		}

		::System::Void KOGPAOGHLIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKNAAFLIPNP_KOGPAOGHLIK_OFFSET))(this, a1);
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
