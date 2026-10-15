#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class ClockFaceEmotion; }
namespace UnityEngine { class Transform; }

#define NOBAGHLADKD_AJGAABMFMFA_OFFSET UNITYSDK_OFFSET(0xBCE08F0)
#define NOBAGHLADKD_ANKKFGAFOBE_OFFSET UNITYSDK_OFFSET(0xBCE0360)
#define NOBAGHLADKD_CHCPDIEIFOB_OFFSET UNITYSDK_OFFSET(0xBCE05C0)
#define NOBAGHLADKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE0C40)
#define NOBAGHLADKD_DCOABNGDEPI_OFFSET UNITYSDK_OFFSET(0xBCE04E0)
#define NOBAGHLADKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCDFCE0)
#define NOBAGHLADKD_EMDCNBBGPHO_OFFSET UNITYSDK_OFFSET(0xBCE0A60)
#define NOBAGHLADKD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBCE0280)
#define NOBAGHLADKD_LNOECEIGFMJ_OFFSET UNITYSDK_OFFSET(0xBCE0200)
#define NOBAGHLADKD_NCECPNPEDIL_OFFSET UNITYSDK_OFFSET(0xBCE0870)
#define NOBAGHLADKD_NPMCAJFGGHA_OFFSET UNITYSDK_OFFSET(0xBCE0420)
#define NOBAGHLADKD_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xBCDFDA0)
#define NOBAGHLADKD_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBCDFD50)
#define NOBAGHLADKD_PKGNNMHJIJO_OFFSET UNITYSDK_OFFSET(0xBCDFDF0)

inline static constexpr unsigned int NOBAGHLADKD_TypeDefinitionIndex = 57229;

	class NOBAGHLADKD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Transform* NPGGDHBEBKJ; // 0x18
		::RPG::GameCore::ClockFaceEmotion* PMAPIEMDKKA; // 0x20
		::UnityEngine::Transform* LCGDIIIMKOA; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Single OGDADCGDHGE; // 0x34
		::System::Single AAFJIGIJILI; // 0x38
		::System::Int32 MPBNACJJDPH; // 0x3C
		::System::Single NOPJIODGDEL; // 0x40
		::System::Single BBNIHAFFFIC; // 0x44
		::System::Single LOIPHFHOOJF; // 0x48
		// static const ::System::String* NMGBOBCLBGO; // 0x0
		// static const ::System::String* AADCBDCIIJJ; // 0x0
		// static const ::System::Object MABGLMNLKFO; // 0x0
		// static const ::System::Object GCIINIGMGIA; // 0x0
		// static const ::System::Object NFNLICNAKPJ; // 0x0
		// static const ::System::Object JOHJMMPELJO; // 0x0
		// static const ::System::Object OLKEFGGJHCF; // 0x0
		// static const ::System::Object HLOEIELHANP; // 0x0
		// static const ::System::Object FMKHFLKKOIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBAGHLADKD_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void NPMCAJFGGHA(::RPG::GameCore::ClockFaceEmotion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockFaceEmotion*))((::PBYTE)hIl2Cpp + NOBAGHLADKD_NPMCAJFGGHA_OFFSET))(this, a1);
		}

		::System::Void PKGNNMHJIJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_PKGNNMHJIJO_OFFSET))(this);
		}

		::System::Void CHCPDIEIFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_CHCPDIEIFOB_OFFSET))(this);
		}

		::System::Single NCECPNPEDIL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBAGHLADKD_NCECPNPEDIL_OFFSET))(this, a1);
		}

		::System::Void ANKKFGAFOBE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBAGHLADKD_ANKKFGAFOBE_OFFSET))(this, a1);
		}

		::System::Void DCOABNGDEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_DCOABNGDEPI_OFFSET))(this);
		}

		::System::Void LNOECEIGFMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBAGHLADKD_LNOECEIGFMJ_OFFSET))(this);
		}

		::System::Void EMDCNBBGPHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBAGHLADKD_EMDCNBBGPHO_OFFSET))(this, a1);
		}

		::System::Void AJGAABMFMFA(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + NOBAGHLADKD_AJGAABMFMFA_OFFSET))(this, a1, a2);
		}

	};
