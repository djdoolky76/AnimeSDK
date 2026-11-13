#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
class BCFDAHOHJEA;
class LJABAMCMDLI;
namespace System { class Type; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define HLKPNJNJBPK_CTOR_OFFSET UNITYSDK_OFFSET(0x198A7610)
#define HLKPNJNJBPK_FFJMOKPAHBJ_OFFSET UNITYSDK_OFFSET(0x198A72F0)
#define HLKPNJNJBPK_FKDFBDLNOEK_OFFSET UNITYSDK_OFFSET(0x198A7380)
#define HLKPNJNJBPK_GHIPHJJKJLL_OFFSET UNITYSDK_OFFSET(0x198A6FF0)
#define HLKPNJNJBPK_KAAAEJMAFOB_OFFSET UNITYSDK_OFFSET(0x198A7460)
#define HLKPNJNJBPK_KKKBKILKBNC_OFFSET UNITYSDK_OFFSET(0x198A6F50)
#define HLKPNJNJBPK_LKPPMLFJDJL_OFFSET UNITYSDK_OFFSET(0x198A71E0)
#define HLKPNJNJBPK_LMKGKDGNAHB_OFFSET UNITYSDK_OFFSET(0x198A7550)
#define HLKPNJNJBPK_LNCEPCEJBON_OFFSET UNITYSDK_OFFSET(0x198A7500)
#define HLKPNJNJBPK_MFNFLPJPHEP_OFFSET UNITYSDK_OFFSET(0x198A75A0)
#define HLKPNJNJBPK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x198A6D10)
#define HLKPNJNJBPK__ONBIND_OFFSET UNITYSDK_OFFSET(0x198A6B30)

inline static constexpr unsigned int HLKPNJNJBPK_TypeDefinitionIndex = 73479;

	class HLKPNJNJBPK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DABBIHKFEDI; // 0x60
		::UnityEngine::Transform* GLMKPJJNPAG; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::UnityEngine::Transform* CBFEKJKIHLN; // 0x78
		::UnityEngine::Transform* HJGEJKLHFPD; // 0x80
		::BCFDAHOHJEA* CIKIBLPEIBJ; // 0x88
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::LJABAMCMDLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJABAMCMDLI*))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void FFJMOKPAHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_FFJMOKPAHBJ_OFFSET))(this);
		}

		::System::Void FKDFBDLNOEK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_FKDFBDLNOEK_OFFSET))(this, a1, a2);
		}

		::System::Void KAAAEJMAFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_KAAAEJMAFOB_OFFSET))(this);
		}

		::System::Void LNCEPCEJBON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_LNCEPCEJBON_OFFSET))(this);
		}

		::System::Void LMKGKDGNAHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_LMKGKDGNAHB_OFFSET))(this);
		}

		::System::Boolean MFNFLPJPHEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_MFNFLPJPHEP_OFFSET))(this);
		}

		::System::Void LKPPMLFJDJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_LKPPMLFJDJL_OFFSET))(this, a1);
		}

		::BCFDAHOHJEA* GHIPHJJKJLL(::RPG::GameCore::SpecialBPDisplayStyle a1)
		{
			return ((::BCFDAHOHJEA*(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_GHIPHJJKJLL_OFFSET))(this, a1);
		}

		::System::Type* KKKBKILKBNC(::RPG::GameCore::SpecialBPDisplayStyle a1)
		{
			return ((::System::Type*(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + HLKPNJNJBPK_KKKBKILKBNC_OFFSET))(this, a1);
		}

	};
