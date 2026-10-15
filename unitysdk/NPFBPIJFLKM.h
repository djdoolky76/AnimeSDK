#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EHLKMDOAFOB;
class IMOAFBKNDGG;
namespace RPG::Client { class SPProgress; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NPFBPIJFLKM_BMHFHBNDHJB_OFFSET UNITYSDK_OFFSET(0xBCFCA40)
#define NPFBPIJFLKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFCB30)
#define NPFBPIJFLKM_DGAILJAOCEL_OFFSET UNITYSDK_OFFSET(0xBCFC9A0)
#define NPFBPIJFLKM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBCFC550)
#define NPFBPIJFLKM_DLACHOIGDHG_OFFSET UNITYSDK_OFFSET(0xBCFC7D0)
#define NPFBPIJFLKM_DOCGCMJPCKN_OFFSET UNITYSDK_OFFSET(0xBCFCAE0)
#define NPFBPIJFLKM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBCFC5E0)
#define NPFBPIJFLKM_MAPCLPHECGP_OFFSET UNITYSDK_OFFSET(0xBCFC690)
#define NPFBPIJFLKM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBCFC260)

	class NPFBPIJFLKM : public ::FMPCODLIOLG
	{
	public:
		::EHLKMDOAFOB* APPIHABBCGK; // 0x60
		::RPG::Client::SPProgress* NIFIIGPEMJA; // 0x68
		::UnityEngine::Transform* JHOHLNJDJCE; // 0x70
		::UnityEngine::Transform* DILJKKIJCCL; // 0x78
		::System::Collections::Generic::List_1<::IMOAFBKNDGG*>* HICJMOPEGCA; // 0x80
		::UnityEngine::Transform* EHCGMIMEPCI; // 0x88
		::System::Nullable* IOBINHIJKEJ; // 0x90
		::System::Boolean AKBPNMEFGAO; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFBPIJFLKM__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NPFBPIJFLKM_DHHDFAAJMMC_OFFSET))(this, a1);
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
