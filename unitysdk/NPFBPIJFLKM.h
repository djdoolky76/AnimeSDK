#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EHLKMDOAFOB;
class IMOAFBKNDGG;
namespace RPG::Client { class SPProgress; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPFBPIJFLKM_BMHFHBNDHJB_OFFSET UNITYSDK_OFFSET(0x19CF7980)
#define NPFBPIJFLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7A70)
#define NPFBPIJFLKM_DGAILJAOCEL_OFFSET UNITYSDK_OFFSET(0x19CF78E0)
#define NPFBPIJFLKM_DLACHOIGDHG_OFFSET UNITYSDK_OFFSET(0x19CF7710)
#define NPFBPIJFLKM_DOCGCMJPCKN_OFFSET UNITYSDK_OFFSET(0x19CF7A20)
#define NPFBPIJFLKM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x19CF7520)
#define NPFBPIJFLKM_MAPCLPHECGP_OFFSET UNITYSDK_OFFSET(0x19CF75D0)
#define NPFBPIJFLKM__ONBIND_OFFSET UNITYSDK_OFFSET(0x19CF7150)
#define NPFBPIJFLKM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19CF7490)

inline static constexpr unsigned int NPFBPIJFLKM_TypeDefinitionIndex = 73891;

	class NPFBPIJFLKM : public ::FMPCODLIOLG
	{
	public:
		::EHLKMDOAFOB* APPIHABBCGK; // 0x60
		::UnityEngine::Transform* JHOHLNJDJCE; // 0x68
		::UnityEngine::Transform* DILJKKIJCCL; // 0x70
		::UnityEngine::Transform* EHCGMIMEPCI; // 0x78
		::RPG::Client::SPProgress* NIFIIGPEMJA; // 0x80
		::System::Collections::Generic::List_1<::IMOAFBKNDGG*>* HICJMOPEGCA; // 0x88
		::System::Nullable_1<::System::Int32> IOBINHIJKEJ; // 0x90
		::System::Boolean AKBPNMEFGAO; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NPFBPIJFLKM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void DOCGCMJPCKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_DOCGCMJPCKN_OFFSET))(this, a1);
		}

		::System::Void MAPCLPHECGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_MAPCLPHECGP_OFFSET))(this);
		}

		::System::Void DLACHOIGDHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_DLACHOIGDHG_OFFSET))(this);
		}

		::System::Void DGAILJAOCEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_DGAILJAOCEL_OFFSET))(this);
		}

		::System::Void BMHFHBNDHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_BMHFHBNDHJB_OFFSET))(this);
		}

	};
