#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class KEJINFHIHMM;
class PKKECHFNBLK;
namespace Nap::NapECS { class EcsWorld; }

#define HEHNCJMEJOC_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x16CEAB80)
#define HEHNCJMEJOC_CDPDFIDKIGK_OFFSET UNITYSDK_OFFSET(0x16CEA9D0)
#define HEHNCJMEJOC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16CEA6B0)
#define HEHNCJMEJOC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16CEAD70)
#define HEHNCJMEJOC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16CEAC20)
#define HEHNCJMEJOC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16CEA810)
#define HEHNCJMEJOC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEA960)

inline static constexpr unsigned int HEHNCJMEJOC_TypeDefinitionIndex = 84304;

class HEHNCJMEJOC : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHNCJMEJOC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void CDPDFIDKIGK(::KEJINFHIHMM* DOJPDJKKAPG, ::PKKECHFNBLK* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::KEJINFHIHMM*, ::PKKECHFNBLK*))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_CDPDFIDKIGK_OFFSET))(DOJPDJKKAPG, AOKHOHCJNFJ);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void OKJCHFGIKBH(::KEJINFHIHMM* DOJPDJKKAPG)
	{
		return ((::System::Void(*)(::KEJINFHIHMM*))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_OKJCHFGIKBH_OFFSET))(DOJPDJKKAPG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HEHNCJMEJOC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
