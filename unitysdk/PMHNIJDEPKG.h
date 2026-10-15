#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PMHNIJDEPKG_APIKODKFJAB_OFFSET UNITYSDK_OFFSET(0xC317820)
#define PMHNIJDEPKG_CKFCBJDOJHB_OFFSET UNITYSDK_OFFSET(0xC3178E0)
#define PMHNIJDEPKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC317A40)
#define PMHNIJDEPKG_KCOKMIEDKGG_OFFSET UNITYSDK_OFFSET(0xC317880)
#define PMHNIJDEPKG__ONBIND_OFFSET UNITYSDK_OFFSET(0xC317990)

inline static constexpr unsigned int PMHNIJDEPKG_TypeDefinitionIndex = 71830;

	class PMHNIJDEPKG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* DNICBKPAIDN; // 0x60
		::UnityEngine::Transform* DPHGGCPKAPF; // 0x68
		::System::String* OLOIFNNLKJP; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHNIJDEPKG_CTOR_OFFSET))(this);
		}

		::System::Void APIKODKFJAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHNIJDEPKG_APIKODKFJAB_OFFSET))(this);
		}

		::System::Void KCOKMIEDKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHNIJDEPKG_KCOKMIEDKGG_OFFSET))(this);
		}

		::System::Void CKFCBJDOJHB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMHNIJDEPKG_CKFCBJDOJHB_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHNIJDEPKG__ONBIND_OFFSET))(this);
		}

	};
