#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BFHIMEJGBAK;
namespace RPG::Client { class LocalizedText; }

#define IKKHGBKGPAO_CTOR_OFFSET UNITYSDK_OFFSET(0x16484950)
#define IKKHGBKGPAO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16484840)
#define IKKHGBKGPAO__ONBIND_OFFSET UNITYSDK_OFFSET(0x164847C0)

inline static constexpr unsigned int IKKHGBKGPAO_TypeDefinitionIndex = 71600;

	class IKKHGBKGPAO : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKHGBKGPAO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKHGBKGPAO__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::BFHIMEJGBAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHIMEJGBAK*))((::PBYTE)hIl2Cpp + IKKHGBKGPAO_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
