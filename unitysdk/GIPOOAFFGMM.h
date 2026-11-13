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

#define GIPOOAFFGMM_BILDNHAOGBA_OFFSET UNITYSDK_OFFSET(0x1A3F9D80)
#define GIPOOAFFGMM_BOPCPAJLFDL_OFFSET UNITYSDK_OFFSET(0x1A3FA490)
#define GIPOOAFFGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FA740)
#define GIPOOAFFGMM_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x1A3F9EB0)
#define GIPOOAFFGMM_LEOBKLCBGLL_OFFSET UNITYSDK_OFFSET(0x1A3FA650)
#define GIPOOAFFGMM_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0x1A3FA3C0)
#define GIPOOAFFGMM_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0x1A3FA400)
#define GIPOOAFFGMM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A3FA170)
#define GIPOOAFFGMM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A3FA340)
#define GIPOOAFFGMM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A3F9FC0)

inline static constexpr unsigned int GIPOOAFFGMM_TypeDefinitionIndex = 74090;

	class GIPOOAFFGMM : public ::FMPCODLIOLG
	{
	public:
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x60
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x68
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x70
		::System::Collections::Generic::List_1<::DFLJJBDNMCJ*>* PKNCJCNIICJ; // 0x78
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x80
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
