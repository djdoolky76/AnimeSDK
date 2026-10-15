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

#define GIPOOAFFGMM_BILDNHAOGBA_OFFSET UNITYSDK_OFFSET(0x15A547A0)
#define GIPOOAFFGMM_BOPCPAJLFDL_OFFSET UNITYSDK_OFFSET(0x15A54EC0)
#define GIPOOAFFGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A55170)
#define GIPOOAFFGMM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15A54D70)
#define GIPOOAFFGMM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15A549E0)
#define GIPOOAFFGMM_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x15A548D0)
#define GIPOOAFFGMM_LEOBKLCBGLL_OFFSET UNITYSDK_OFFSET(0x15A55080)
#define GIPOOAFFGMM_NFPHAJMIOIE_OFFSET UNITYSDK_OFFSET(0x15A54DF0)
#define GIPOOAFFGMM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15A54BA0)
#define GIPOOAFFGMM_PGIJAGHKJLN_OFFSET UNITYSDK_OFFSET(0x15A54E30)

inline static constexpr unsigned int GIPOOAFFGMM_TypeDefinitionIndex = 72060;

	class GIPOOAFFGMM : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::DFLJJBDNMCJ*>* PKNCJCNIICJ; // 0x60
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x68
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x70
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0x78
		::Il2CppArray<::System::Object*>* DNJLAHPLLFB; // 0x80
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GIPOOAFFGMM_DHHDFAAJMMC_OFFSET))(this, a1);
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
