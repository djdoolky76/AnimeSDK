#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/CNCJJIGLMAL_DDFFIJADFPH.h"

class CNCJJIGLMAL;
class CNCJJIGLMAL_JOJEKHDLJII;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOCFLENBOFJ_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0xFF92FE0)
#define BOCFLENBOFJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFF92C90)
#define BOCFLENBOFJ_DOIMIMEOLOH_OFFSET UNITYSDK_OFFSET(0xFF93270)
#define BOCFLENBOFJ_JECPJNNIPPC_OFFSET UNITYSDK_OFFSET(0xFF93070)
#define BOCFLENBOFJ_LJDHJMMDPNA_OFFSET UNITYSDK_OFFSET(0xFF93480)
#define BOCFLENBOFJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xFF93970)
#define BOCFLENBOFJ_UPDATE_OFFSET UNITYSDK_OFFSET(0xFF92E20)
#define BOCFLENBOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFF92F90)

inline static constexpr unsigned int BOCFLENBOFJ_TypeDefinitionIndex = 74869;

class BOCFLENBOFJ : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFLENBOFJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void JECPJNNIPPC(::System::Collections::Generic::List_1<::System::UInt32>* ABMGGPOONHJ, ::CNCJJIGLMAL* GBELIHABEDH, ::CNCJJIGLMAL_DDFFIJADFPH PNFBGMGOGHF, ::CNCJJIGLMAL_JOJEKHDLJII* PLBEAIIJADM, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::CNCJJIGLMAL*, ::CNCJJIGLMAL_DDFFIJADFPH, ::CNCJJIGLMAL_JOJEKHDLJII*, ::System::Single))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_JECPJNNIPPC_OFFSET))(ABMGGPOONHJ, GBELIHABEDH, PNFBGMGOGHF, PLBEAIIJADM, CAOPDAMCNCN);
	}

	static ::System::Void DOIMIMEOLOH(::System::Collections::Generic::List_1<::System::UInt32>* ABMGGPOONHJ)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_DOIMIMEOLOH_OFFSET))(ABMGGPOONHJ);
	}

	static ::System::Void LJDHJMMDPNA(::System::Collections::Generic::List_1<::System::UInt32>* ABMGGPOONHJ, ::CNCJJIGLMAL* GBELIHABEDH)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::CNCJJIGLMAL*))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_LJDHJMMDPNA_OFFSET))(ABMGGPOONHJ, GBELIHABEDH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BOCFLENBOFJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
