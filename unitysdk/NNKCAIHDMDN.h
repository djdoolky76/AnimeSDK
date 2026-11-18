#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NNKCAIHDMDN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xED3A880)
#define NNKCAIHDMDN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xED3ABB0)
#define NNKCAIHDMDN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xED3B680)
#define NNKCAIHDMDN_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0xED3B5F0)
#define NNKCAIHDMDN_MOMHHMOHHDC_OFFSET UNITYSDK_OFFSET(0xED3AE90)
#define NNKCAIHDMDN__CCTOR_OFFSET UNITYSDK_OFFSET(0xED3AE80)
#define NNKCAIHDMDN__CTOR_OFFSET UNITYSDK_OFFSET(0xED3AE30)

inline static constexpr unsigned int NNKCAIHDMDN_TypeDefinitionIndex = 39465;

class NNKCAIHDMDN : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_ALMLDENGPGJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NNKCAIHDMDN_TypeDefinitionIndex)->GetStaticField(0xD070);
	}
	::Nap::NapECS::EcsFilter* MEGJPJDKNJL; // 0x20
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCAIHDMDN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKCAIHDMDN__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NNKCAIHDMDN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCAIHDMDN_LATEUPDATE_OFFSET))(this);
	}

	::System::Void MOMHHMOHHDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNKCAIHDMDN_MOMHHMOHHDC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKCAIHDMDN_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NNKCAIHDMDN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
