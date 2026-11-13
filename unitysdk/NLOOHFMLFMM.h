#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
class NLOOHFMLFMM;
class NNCKBIHOFIP;
namespace RPG::Client { class GridFightOrbData; }
namespace System { template <typename T> class Action_1; }

#define NLOOHFMLFMM_CMIEMCPGBID_OFFSET UNITYSDK_OFFSET(0x1A437630)
#define NLOOHFMLFMM_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x1A437590)
#define NLOOHFMLFMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4376E0)
#define NLOOHFMLFMM_EGLHCCFNAGK_OFFSET UNITYSDK_OFFSET(0x1A4374D0)
#define NLOOHFMLFMM_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x1A437300)
#define NLOOHFMLFMM_HPCHPPILBAF_OFFSET UNITYSDK_OFFSET(0x1A437400)
#define NLOOHFMLFMM_HPKAAIMCAPC_OFFSET UNITYSDK_OFFSET(0x1A437360)
#define NLOOHFMLFMM_KOGJBOIEPOM_OFFSET UNITYSDK_OFFSET(0x1A437280)
#define NLOOHFMLFMM_NFFAGDNMDBJ_OFFSET UNITYSDK_OFFSET(0x1A4373B0)
#define NLOOHFMLFMM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A437100)
#define NLOOHFMLFMM_PKNBCMJNHDO_OFFSET UNITYSDK_OFFSET(0x1A437220)
#define NLOOHFMLFMM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A436EF0)

inline static constexpr unsigned int NLOOHFMLFMM_TypeDefinitionIndex = 74366;

	class NLOOHFMLFMM : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::NLOOHFMLFMM*>* HJLKNPIFNGI; // 0x60
		::NNCKBIHOFIP* PFKCKIOAOFO; // 0x68
		::RPG::Client::GridFightOrbData* OOEGMABOPEB; // 0x70
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
