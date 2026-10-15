#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class AIHIOLBHIDK;
class DLLDHFAAHEP;
class ECDNGOHAPMA;
class FCGMIALABPJ;
class IIMJBIGBBJO;
class JHCCCINHFCK;
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CGDPAMEHOKC_ADBDBLGPEFK_OFFSET UNITYSDK_OFFSET(0xCC80FB0)
#define CGDPAMEHOKC_BACEDNGHBFM_OFFSET UNITYSDK_OFFSET(0xCC81830)
#define CGDPAMEHOKC_CBGHODPIFOC_OFFSET UNITYSDK_OFFSET(0xCC812B0)
#define CGDPAMEHOKC_CTOR_OFFSET UNITYSDK_OFFSET(0xCC81AA0)
#define CGDPAMEHOKC_HMDJCFLOAEL_OFFSET UNITYSDK_OFFSET(0xCC815E0)
#define CGDPAMEHOKC_IMPHCKIMGAF_OFFSET UNITYSDK_OFFSET(0xCC816E0)
#define CGDPAMEHOKC_KNOCEPMPFMJ_OFFSET UNITYSDK_OFFSET(0xCC80EB0)
#define CGDPAMEHOKC_LCMCHGFKGNG_OFFSET UNITYSDK_OFFSET(0xCC81760)
#define CGDPAMEHOKC_NBKDBNPLBBE_OFFSET UNITYSDK_OFFSET(0xCC81A30)
#define CGDPAMEHOKC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCC80E20)
#define CGDPAMEHOKC__ONBIND_OFFSET UNITYSDK_OFFSET(0xCC80CB0)
#define CGDPAMEHOKC___SETUPNORMALBUFFLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xCC81AD0)

inline static constexpr unsigned int CGDPAMEHOKC_TypeDefinitionIndex = 71184;

	class CGDPAMEHOKC : public ::FMPCODLIOLG
	{
	public:
		::AIHIOLBHIDK* EEJMCCOGIJF; // 0x60
		::UnityEngine::UI::Text* ONMLHPMENNP; // 0x68
		::RPG::Client::NodeListViewPanel_1<::DLLDHFAAHEP*>* ILKGDHECNMH; // 0x70
		::FCGMIALABPJ* OOBEFKJCMEB; // 0x78
		::JHCCCINHFCK* LHCBBMJEBIO; // 0x80
		::RPG::Client::BeneficialBuffViewData* AIJODBLPFHG; // 0x88
		::System::Collections::Generic::List_1<::ECDNGOHAPMA*>* FOFHDIOPKED; // 0x90
		// static const ::System::String* NKEHMEGIJHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::BeneficialBuffViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::IIMJBIGBBJO* HMDJCFLOAEL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::IIMJBIGBBJO*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_HMDJCFLOAEL_OFFSET))(this, a1);
		}

		::IIMJBIGBBJO* IMPHCKIMGAF()
		{
			return ((::IIMJBIGBBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_IMPHCKIMGAF_OFFSET))(this);
		}

		::System::Boolean LCMCHGFKGNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_LCMCHGFKGNG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BACEDNGHBFM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_BACEDNGHBFM_OFFSET))(this);
		}

		::System::Void KNOCEPMPFMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_KNOCEPMPFMJ_OFFSET))(this);
		}

		::System::Void ADBDBLGPEFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_ADBDBLGPEFK_OFFSET))(this);
		}

		::System::Void CBGHODPIFOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_CBGHODPIFOC_OFFSET))(this);
		}

		::System::Void NBKDBNPLBBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDPAMEHOKC_NBKDBNPLBBE_OFFSET))(this);
		}

		::System::Void __SetupNormalBuffList_b__11_0(::DLLDHFAAHEP* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLLDHFAAHEP*, ::System::Int32))((::PBYTE)hIl2Cpp + CGDPAMEHOKC___SETUPNORMALBUFFLIST_B__11_0_OFFSET))(this, a1, a2);
		}

	};
