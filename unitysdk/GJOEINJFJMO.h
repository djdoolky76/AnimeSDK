#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define GJOEINJFJMO_BFEBJGOFFHH_OFFSET UNITYSDK_OFFSET(0x169B7A50)
#define GJOEINJFJMO_CTOR_OFFSET UNITYSDK_OFFSET(0x169B7E80)
#define GJOEINJFJMO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x169B7690)
#define GJOEINJFJMO_IJGLDFFKGHI_OFFSET UNITYSDK_OFFSET(0x169B7E20)
#define GJOEINJFJMO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x169B7980)
#define GJOEINJFJMO_OFPDAFCJKEC_OFFSET UNITYSDK_OFFSET(0x169B7CC0)
#define GJOEINJFJMO_PKKLNCNMNIH_OFFSET UNITYSDK_OFFSET(0x169B7B60)
#define GJOEINJFJMO__ONBIND_OFFSET UNITYSDK_OFFSET(0x169B72B0)
#define GJOEINJFJMO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x169B79F0)
#define GJOEINJFJMO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x169B7610)
#define GJOEINJFJMO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x169B7750)

inline static constexpr unsigned int GJOEINJFJMO_TypeDefinitionIndex = 74441;

	class GJOEINJFJMO : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* IBPBJBOKKMF; // 0x60
		::RPG::Client::AnimatorButton* CHBLDOPEEBE; // 0x68
		::RPG::Client::MonoInControlButton* HPODAOJOJMN; // 0x70
		::RPG::Client::LocalizedText* DMCFNALLLMO; // 0x78
		::UnityEngine::Coroutine* FCDGNGBHHJD; // 0x80
		::RPG::Client::MonoInControlButton* FDBAPJJPMMG; // 0x88
		::RPG::Client::AnimatorButton* HPMCPFLHFPO; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
		::System::Boolean KMIJLOANOJD; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GJOEINJFJMO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BFEBJGOFFHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJOEINJFJMO_BFEBJGOFFHH_OFFSET))(this, a1);
		}

		::System::Void PKKLNCNMNIH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJOEINJFJMO_PKKLNCNMNIH_OFFSET))(this, a1);
		}

		::System::Void OFPDAFCJKEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJOEINJFJMO_OFPDAFCJKEC_OFFSET))(this, a1);
		}

		::System::Void IJGLDFFKGHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOEINJFJMO_IJGLDFFKGHI_OFFSET))(this);
		}

	};
