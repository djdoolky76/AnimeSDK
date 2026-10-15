#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KNHJKDBPNOI;
class MDFIHKILAPL;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FDIJNCADAHJ_CABHEAGLNDD_OFFSET UNITYSDK_OFFSET(0x156CF610)
#define FDIJNCADAHJ_CFPOLHDHFIB_OFFSET UNITYSDK_OFFSET(0x156CFC20)
#define FDIJNCADAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156CFF50)
#define FDIJNCADAHJ_EEDOOMCMFIN_OFFSET UNITYSDK_OFFSET(0x156CF9A0)
#define FDIJNCADAHJ_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0x156CFE50)
#define FDIJNCADAHJ_GNDFNHNEDAH_OFFSET UNITYSDK_OFFSET(0x156CFD90)
#define FDIJNCADAHJ_HABFIFCKMKG_OFFSET UNITYSDK_OFFSET(0x156CF650)
#define FDIJNCADAHJ_KFMJPMPNBAP_OFFSET UNITYSDK_OFFSET(0x156CFB10)
#define FDIJNCADAHJ_MDFCBIOFOOC_OFFSET UNITYSDK_OFFSET(0x156CF6A0)
#define FDIJNCADAHJ_NBDFJCDMKJF_OFFSET UNITYSDK_OFFSET(0x156CFD20)
#define FDIJNCADAHJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x156CF9F0)
#define FDIJNCADAHJ_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0x156CFEF0)
#define FDIJNCADAHJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x156CF3A0)

inline static constexpr unsigned int FDIJNCADAHJ_TypeDefinitionIndex = 72242;

	class FDIJNCADAHJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GOGNOECLBFD; // 0x60
		::UnityEngine::GameObject* NENPNKMPAAC; // 0x68
		::UnityEngine::Animation* PMOJILOJEPE; // 0x70
		::System::Action_1<::KNHJKDBPNOI*>* CIFOILLJFNF; // 0x78
		::RPG::Client::PrefabLoadMeta* OPJNPDLLGED; // 0x80
		::UnityEngine::Animation* OGFNFANKEKD; // 0x88
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x90
		::UnityEngine::UI::Image* AFJIGEDHIPO; // 0x98
		::RPG::GameCore::GridFightBattleEventHintType BDAGIIBEPJA; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* INHDCOPAFPF; // 0x0
		// static const ::System::String* EPJGKCKHNBO; // 0x0
		// static const ::System::String* EHJFHMEKFDI; // 0x0
		// static const ::System::String* OOPEGOAHGDF; // 0x0
		// static const ::System::String* JMFOMPCOHFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ__ONBIND_OFFSET))(this);
		}

		::System::Void CABHEAGLNDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_CABHEAGLNDD_OFFSET))(this);
		}

		::System::Void HABFIFCKMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_HABFIFCKMKG_OFFSET))(this);
		}

		::System::Void EEDOOMCMFIN(::System::Action_1<::KNHJKDBPNOI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KNHJKDBPNOI*>*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_EEDOOMCMFIN_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::MDFIHKILAPL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void KFMJPMPNBAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_KFMJPMPNBAP_OFFSET))(this, a1);
		}

		::System::Void CFPOLHDHFIB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_CFPOLHDHFIB_OFFSET))(this, a1);
		}

		::System::Void MDFCBIOFOOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_MDFCBIOFOOC_OFFSET))(this, a1);
		}

		::System::Void GNDFNHNEDAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_GNDFNHNEDAH_OFFSET))(this, a1);
		}

		::System::Void FKDPAGBEHFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_FKDPAGBEHFD_OFFSET))(this);
		}

		::System::Void NBDFJCDMKJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_NBDFJCDMKJF_OFFSET))(this);
		}

		::System::Void NPBLGGGDOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIJNCADAHJ_NPBLGGGDOLB_OFFSET))(this);
		}

	};
