#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
class NLOOHFMLFMM;
class NNCKBIHOFIP;
namespace RPG::Client { class GridFightOrbData; }
namespace System { template <typename T> class Action_1; }

#define NLOOHFMLFMM_CMIEMCPGBID_OFFSET UNITYSDK_OFFSET(0xBC78330)
#define NLOOHFMLFMM_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0xBC780E0)
#define NLOOHFMLFMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC78450)
#define NLOOHFMLFMM_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0xBC77FD0)
#define NLOOHFMLFMM_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0xBC77E00)
#define NLOOHFMLFMM_HPCHPPILBAF_OFFSET UNITYSDK_OFFSET(0xBC77F00)
#define NLOOHFMLFMM_HPKAAIMCAPC_OFFSET UNITYSDK_OFFSET(0xBC77E60)
#define NLOOHFMLFMM_KOGJBOIEPOM_OFFSET UNITYSDK_OFFSET(0xBC77D80)
#define NLOOHFMLFMM_NFFAGDNMDBJ_OFFSET UNITYSDK_OFFSET(0xBC77EB0)
#define NLOOHFMLFMM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBC77C00)
#define NLOOHFMLFMM_PKNBCMJNHDO_OFFSET UNITYSDK_OFFSET(0xBC77D20)
#define NLOOHFMLFMM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC779F0)

inline static constexpr unsigned int NLOOHFMLFMM_TypeDefinitionIndex = 72290;

	class NLOOHFMLFMM : public ::FMPCODLIOLG
	{
	public:
		::NNCKBIHOFIP* PFKCKIOAOFO; // 0x60
		::RPG::Client::GridFightOrbData* OOEGMABOPEB; // 0x68
		::System::Action_1<::NLOOHFMLFMM*>* HJLKNPIFNGI; // 0x70
		::System::UInt32 GFKPFMOAKCF; // 0x78
		::System::Boolean DCGIOALPDGL; // 0x7C
		// static const ::System::Object BLPIGNCHLJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::GridFightOrbData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightOrbType PKNBCMJNHDO()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_PKNBCMJNHDO_OFFSET))(this);
		}

		::System::Void KOGJBOIEPOM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_KOGJBOIEPOM_OFFSET))(this, a1);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void HPKAAIMCAPC(::System::Action_1<::NLOOHFMLFMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NLOOHFMLFMM*>*))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_HPKAAIMCAPC_OFFSET))(this, a1);
		}

		::System::Void NFFAGDNMDBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_NFFAGDNMDBJ_OFFSET))(this, a1);
		}

		::System::Void EGLHCCFNAGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_EGLHCCFNAGK_OFFSET))(this);
		}

		::System::Void COPGACEDIEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_COPGACEDIEI_OFFSET))(this);
		}

		::System::Void HPCHPPILBAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_HPCHPPILBAF_OFFSET))(this);
		}

		::System::Void CMIEMCPGBID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOOHFMLFMM_CMIEMCPGBID_OFFSET))(this);
		}

	};
