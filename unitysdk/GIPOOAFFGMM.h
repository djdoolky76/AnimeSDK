#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class DFLJJBDNMCJ;
class FMPCODLIOLG;
class GIPOOAFFGMM;
class KOAOAKKCCPK;
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIPOOAFFGMM_BILDNHAOGBA_OFFSET UNITYSDK_OFFSET(0x1698FE00)
#define GIPOOAFFGMM_BOPCPAJLFDL_OFFSET UNITYSDK_OFFSET(0x16990510)
#define GIPOOAFFGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x169907C0)
#define GIPOOAFFGMM_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x1698FF30)
#define GIPOOAFFGMM_LEOBKLCBGLL_OFFSET UNITYSDK_OFFSET(0x169906D0)
#define GIPOOAFFGMM_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0x16990440)
#define GIPOOAFFGMM_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0x16990480)
#define GIPOOAFFGMM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x169901F0)
#define GIPOOAFFGMM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x169903C0)
#define GIPOOAFFGMM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16990040)

inline static constexpr unsigned int GIPOOAFFGMM_TypeDefinitionIndex = 74091;

	class GIPOOAFFGMM : public ::FMPCODLIOLG
	{
	public:
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x60
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x68
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x70
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x78
		::System::Collections::Generic::List_1<::DFLJJBDNMCJ*>* PKNCJCNIICJ; // 0x80
		::RPG::GameCore::StageType LFJEGJMCEBD; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_CTOR_OFFSET))(this);
		}

		::System::Boolean BILDNHAOGBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_BILDNHAOGBA_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GIPOOAFFGMM__ONINITPARAMS_OFFSET))(this, a1);
		}

		static ::System::Boolean NFPHAJMIOIE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPOOAFFGMM_NFPHAJMIOIE_OFFSET))();
		}

		static ::FMPCODLIOLG* PGIJAGHKJLN(::GIPOOAFFGMM* a1)
		{
			return ((::FMPCODLIOLG*(*)(::GIPOOAFFGMM*))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_PGIJAGHKJLN_OFFSET))(a1);
		}

		static ::System::Boolean BOPCPAJLFDL()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPOOAFFGMM_BOPCPAJLFDL_OFFSET))();
		}

		static ::FMPCODLIOLG* LEOBKLCBGLL(::GIPOOAFFGMM* a1)
		{
			return ((::FMPCODLIOLG*(*)(::GIPOOAFFGMM*))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_LEOBKLCBGLL_OFFSET))(a1);
		}

	};
