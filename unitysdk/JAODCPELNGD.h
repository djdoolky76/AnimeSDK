#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define JAODCPELNGD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF889430)
#define JAODCPELNGD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xF889660)
#define JAODCPELNGD_IBPOAGJLPDN_OFFSET UNITYSDK_OFFSET(0xF889A00)
#define JAODCPELNGD_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xF889A10)
#define JAODCPELNGD_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0xF889970)
#define JAODCPELNGD_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0xF889890)
#define JAODCPELNGD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xF889AB0)
#define JAODCPELNGD_MONJNOKBFHO_OFFSET UNITYSDK_OFFSET(0xF889AA0)
#define JAODCPELNGD_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0xF8898E0)
#define JAODCPELNGD_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0xF889700)
#define JAODCPELNGD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF889610)
#define JAODCPELNGD_START_OFFSET UNITYSDK_OFFSET(0xF8895C0)
#define JAODCPELNGD__CTOR_OFFSET UNITYSDK_OFFSET(0xF889840)

inline static constexpr unsigned int JAODCPELNGD_TypeDefinitionIndex = 67163;

class JAODCPELNGD : public ::OAOOLPCNHKA
{
public:
	static ::JAODCPELNGD** StaticGet__KDHHJMKHLED_k__BackingField()
	{
		return (::JAODCPELNGD**)Il2CppClass::FromTypeDefinitionIndex(JAODCPELNGD_TypeDefinitionIndex)->GetStaticField(0x45B90);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JAODCPELNGD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_ONDESTROY_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void NOKDJPCOGOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_NOKDJPCOGOC_OFFSET))(this);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAODCPELNGD_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_INEGOEGIOKM_OFFSET))(this);
	}

	static ::JAODCPELNGD* IBPOAGJLPDN()
	{
		return ((::JAODCPELNGD*(*)())((::PBYTE)hIl2Cpp + JAODCPELNGD_IBPOAGJLPDN_OFFSET))();
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODCPELNGD_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Void MONJNOKBFHO(::JAODCPELNGD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::JAODCPELNGD*))((::PBYTE)hIl2Cpp + JAODCPELNGD_MONJNOKBFHO_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JAODCPELNGD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
