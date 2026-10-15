#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KCMGAIFFBPL;
class MIHPAKHLACK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define GPMFOHDCMFF_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x15B61330)
#define GPMFOHDCMFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B61630)
#define GPMFOHDCMFF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15B60550)
#define GPMFOHDCMFF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15B608E0)
#define GPMFOHDCMFF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B60760)
#define GPMFOHDCMFF_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x15B60EC0)
#define GPMFOHDCMFF_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x15B614B0)
#define GPMFOHDCMFF_LCJLLGBJENF_1_OFFSET UNITYSDK_OFFSET(0x15B60FB0)
#define GPMFOHDCMFF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x15B60F10)
#define GPMFOHDCMFF_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x15B61160)
#define GPMFOHDCMFF_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x15B60C20)
#define GPMFOHDCMFF_MOGOAGHNDJA_OFFSET UNITYSDK_OFFSET(0x15B60F60)
#define GPMFOHDCMFF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15B605B0)
#define GPMFOHDCMFF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15B607B0)

inline static constexpr unsigned int GPMFOHDCMFF_TypeDefinitionIndex = 71752;

	class GPMFOHDCMFF : public ::FMPCODLIOLG
	{
	public:
		::MIHPAKHLACK* GAFPHDDABLJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ONRETURN_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_MIIHAJHPKAF_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LCJLLGBJENF_OFFSET))(this, a1);
		}

		::System::Void MOGOAGHNDJA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_MOGOAGHNDJA_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LCJLLGBJENF_1_OFFSET))(this, a1);
		}

		::System::Void LEHJAPMONNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPMFOHDCMFF_JMBFOHAMFGI_OFFSET))(this, a1);
		}

	};
