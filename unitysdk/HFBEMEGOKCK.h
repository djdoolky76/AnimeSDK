#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define HFBEMEGOKCK_GOGDFBBDGLP_OFFSET UNITYSDK_OFFSET(0x15DA45E0)
#define HFBEMEGOKCK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15DA4750)
#define HFBEMEGOKCK_ONOANIPIJNE_OFFSET UNITYSDK_OFFSET(0x15DA4890)

inline static constexpr unsigned int HFBEMEGOKCK_TypeDefinitionIndex = 43055;

class HFBEMEGOKCK : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsFilter* GOGDFBBDGLP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HFBEMEGOKCK_GOGDFBBDGLP_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Void OKJCHFGIKBH(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + HFBEMEGOKCK_OKJCHFGIKBH_OFFSET))(PNPMMLNCDNK);
	}

	static ::System::Void ONOANIPIJNE(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + HFBEMEGOKCK_ONOANIPIJNE_OFFSET))(IJFDCJBKCDF);
	}
};
