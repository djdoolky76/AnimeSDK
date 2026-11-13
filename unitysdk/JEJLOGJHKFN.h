#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define JEJLOGJHKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x13074430)
#define JEJLOGJHKFN_FGAOIFDPGFO_OFFSET UNITYSDK_OFFSET(0x130740C0)
#define JEJLOGJHKFN_GHMPLFGCFIH_OFFSET UNITYSDK_OFFSET(0x13074000)
#define JEJLOGJHKFN_GJFNGHECENA_OFFSET UNITYSDK_OFFSET(0x13073ED0)
#define JEJLOGJHKFN_HLMBMNLADOI_OFFSET UNITYSDK_OFFSET(0x13074270)
#define JEJLOGJHKFN_HNHIPAEIGIB_OFFSET UNITYSDK_OFFSET(0x13074310)
#define JEJLOGJHKFN_LMPHIKNNFIO_OFFSET UNITYSDK_OFFSET(0x13074060)
#define JEJLOGJHKFN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x13073F20)
#define JEJLOGJHKFN_OLGBOANHKAB_OFFSET UNITYSDK_OFFSET(0x130743C0)
#define JEJLOGJHKFN__ONBIND_OFFSET UNITYSDK_OFFSET(0x13073A80)

inline static constexpr unsigned int JEJLOGJHKFN_TypeDefinitionIndex = 74337;

	class JEJLOGJHKFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* HCKIBDHBPMH; // 0x60
		::RPG::Client::MonoUIColorSwitcher* IKMCLKPAKKC; // 0x68
		::UnityEngine::Transform* KPHBEFNBLFG; // 0x70
		::UnityEngine::Transform* OKAHFPJGBOE; // 0x78
		::RPG::Client::GridFightItemConfig* DBNHBLLNBEJ; // 0x80
		::UnityEngine::Transform* MNLPJDCDACO; // 0x88
		::UnityEngine::Transform* DPLPOKFHDCL; // 0x90
		::UnityEngine::UI::Text* FDFONIKBFMN; // 0x98
		::UnityEngine::Transform* HLGFPEKMBNN; // 0xA0
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0xA8
		::System::Boolean HDCJMCDEDJI; // 0xB0
		// static const ::System::String* BDACPPLKLGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLOGJHKFN__ONBIND_OFFSET))(this);
		}

		::System::Void GJFNGHECENA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_GJFNGHECENA_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void GHMPLFGCFIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_GHMPLFGCFIH_OFFSET))(this, a1);
		}

		::System::Void LMPHIKNNFIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_LMPHIKNNFIO_OFFSET))(this, a1);
		}

		::System::Void FGAOIFDPGFO(::RPG::Client::GridFightItemFrameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemFrameInfo*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_FGAOIFDPGFO_OFFSET))(this, a1);
		}

		::System::Void HNHIPAEIGIB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_HNHIPAEIGIB_OFFSET))(this, a1);
		}

		::System::Void OLGBOANHKAB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_OLGBOANHKAB_OFFSET))(this, a1);
		}

		::System::Void HLMBMNLADOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_HLMBMNLADOI_OFFSET))(this, a1);
		}

	};
