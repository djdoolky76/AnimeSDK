#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define HKMCLMPPAOF_BDEHPCDADFK_OFFSET UNITYSDK_OFFSET(0x16F42390)
#define HKMCLMPPAOF_GOGDFBBDGLP_OFFSET UNITYSDK_OFFSET(0x16F424D0)
#define HKMCLMPPAOF_NBFLMDMCIHH_OFFSET UNITYSDK_OFFSET(0x16F42640)
#define HKMCLMPPAOF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16F42250)

inline static constexpr unsigned int HKMCLMPPAOF_TypeDefinitionIndex = 51664;

class HKMCLMPPAOF : public ::System::Object
{
public:
	static ::System::Void OKJCHFGIKBH(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + HKMCLMPPAOF_OKJCHFGIKBH_OFFSET))(PNPMMLNCDNK);
	}

	static ::System::Void BDEHPCDADFK(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + HKMCLMPPAOF_BDEHPCDADFK_OFFSET))(PNPMMLNCDNK);
	}

	static ::Nap::NapECS::EcsFilter* GOGDFBBDGLP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HKMCLMPPAOF_GOGDFBBDGLP_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Void NBFLMDMCIHH(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + HKMCLMPPAOF_NBFLMDMCIHH_OFFSET))(IJFDCJBKCDF);
	}
};
