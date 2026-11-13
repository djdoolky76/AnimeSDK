#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingEffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BNAIELOHEFF_BBDNLHJDGAF_OFFSET UNITYSDK_OFFSET(0x1A756FC0)
#define BNAIELOHEFF_CNKOGGMCNBM_OFFSET UNITYSDK_OFFSET(0x1A757130)
#define BNAIELOHEFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A751980)
#define BNAIELOHEFF_EPBMGKNMLLG_OFFSET UNITYSDK_OFFSET(0x1A756CF0)
#define BNAIELOHEFF_FCGMOEBFDML_OFFSET UNITYSDK_OFFSET(0x1A757080)
#define BNAIELOHEFF_GHMLKGCJJPD_OFFSET UNITYSDK_OFFSET(0x1A756E90)
#define BNAIELOHEFF_GLGCBKPOMEJ_OFFSET UNITYSDK_OFFSET(0x1A756F70)
#define BNAIELOHEFF_JEKEJLFJOHK_OFFSET UNITYSDK_OFFSET(0x1A756D50)
#define BNAIELOHEFF_KCJCIJGEOOA_OFFSET UNITYSDK_OFFSET(0x1A756F30)
#define BNAIELOHEFF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A756BE0)
#define BNAIELOHEFF_LENMCLGCGAC_OFFSET UNITYSDK_OFFSET(0x1A7570E0)
#define BNAIELOHEFF_MPINOKJDNGC_OFFSET UNITYSDK_OFFSET(0x1A756E50)
#define BNAIELOHEFF_OLOBIGFDGLF_OFFSET UNITYSDK_OFFSET(0x1A756C90)

inline static constexpr unsigned int BNAIELOHEFF_TypeDefinitionIndex = 77339;

	class BNAIELOHEFF : public ::System::Object
	{
	public:
		::RPG::GameCore::SwordTrainingEffectRow* IBPBJBOKKMF; // 0x10
		::System::UInt32 FOHCEJOHBKF; // 0x18
		::System::Boolean ONEHPHAMKKB; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt64 EIHNNIAJLAA; // 0x20
		// static const ::System::Object GDBGNJNPHLN; // 0x0
		// static const ::System::Object DGNBLHDKEGB; // 0x0
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAIELOHEFF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EPBMGKNMLLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAIELOHEFF_EPBMGKNMLLG_OFFSET))(this);
		}

		::System::Boolean JEKEJLFJOHK(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_JEKEJLFJOHK_OFFSET))(this, a1);
		}

		::System::Boolean GHMLKGCJJPD(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_GHMLKGCJJPD_OFFSET))(this, a1);
		}

		::System::Void MPINOKJDNGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAIELOHEFF_MPINOKJDNGC_OFFSET))(this);
		}

		::System::Boolean KCJCIJGEOOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAIELOHEFF_KCJCIJGEOOA_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GLGCBKPOMEJ()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAIELOHEFF_GLGCBKPOMEJ_OFFSET))(this);
		}

		::System::Boolean BBDNLHJDGAF(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_BBDNLHJDGAF_OFFSET))(this, a1);
		}

		::System::Boolean FCGMOEBFDML(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_FCGMOEBFDML_OFFSET))(this, a1);
		}

		::System::Void LENMCLGCGAC(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_LENMCLGCGAC_OFFSET))(this, a1);
		}

		::System::Void OLOBIGFDGLF(::RPG::GameCore::SwordTrainingEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectType))((::PBYTE)hIl2Cpp + BNAIELOHEFF_OLOBIGFDGLF_OFFSET))(this, a1);
		}

		::System::Boolean CNKOGGMCNBM(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + BNAIELOHEFF_CNKOGGMCNBM_OFFSET))(this, a1);
		}

	};
