#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class NMNIJNNFPGP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CAJBDLAOBPF_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xC47AC50)
#define CAJBDLAOBPF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC47AC00)
#define CAJBDLAOBPF_CTOR_OFFSET UNITYSDK_OFFSET(0xC47B620)
#define CAJBDLAOBPF_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xC47ACB0)
#define CAJBDLAOBPF_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xC47ADA0)
#define CAJBDLAOBPF_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xC47AD50)
#define CAJBDLAOBPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC47AB60)
#define CAJBDLAOBPF_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xC47AE40)
#define CAJBDLAOBPF_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xC47AE80)
#define CAJBDLAOBPF_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xC47ADF0)
#define CAJBDLAOBPF_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xC47AD00)
#define CAJBDLAOBPF_LMDDJLGDPNP_OFFSET UNITYSDK_OFFSET(0xC47AF00)
#define CAJBDLAOBPF_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xC47ABB0)
#define CAJBDLAOBPF_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xC47AEC0)

inline static constexpr unsigned int CAJBDLAOBPF_TypeDefinitionIndex = 71956;

	class CAJBDLAOBPF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JDIDAGMBKEL; // 0x10
		::RPG::GameCore::GameEntity* FMEOBOJJHMH; // 0x18
		::System::String* MCCPCDDJOLC; // 0x20
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x28
		::System::Nullable_1<::System::Boolean> FHBNNGCEPFD; // 0x30
		::System::Nullable_1<::System::Boolean> PCLAGGCBHBO; // 0x32
		::System::Nullable_1<::System::Boolean> ACAPCHBDIBF; // 0x34
		::System::Nullable_1<::System::Boolean> HAECKDHIFMM; // 0x36
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_DISPOSE_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void LMDDJLGDPNP(::NMNIJNNFPGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + CAJBDLAOBPF_LMDDJLGDPNP_OFFSET))(this, a1);
		}

	};
