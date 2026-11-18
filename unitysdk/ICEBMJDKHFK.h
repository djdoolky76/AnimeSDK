#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKJMKBPMCC.h"
#include "unitysdk/MoleMole/CustomCollisionConfigData_CustomCollisionAlgorithm.h"
#include "unitysdk/Cinemachine/CameraState.h"

class GDEIEGKOLIH;
class HODGKGJJPCE;
class ICEBMJDKHFK_ECFKGKDJNFN;
class NEPOHJIFNNA;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define ICEBMJDKHFK_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16A91080)
#define ICEBMJDKHFK_IGCLJKPFEAH_OFFSET UNITYSDK_OFFSET(0x16A915A0)
#define ICEBMJDKHFK_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x16A90ED0)
#define ICEBMJDKHFK_MENPFLLPANP_OFFSET UNITYSDK_OFFSET(0x16A91130)
#define ICEBMJDKHFK_MODCHANABNO_OFFSET UNITYSDK_OFFSET(0x16A91610)
#define ICEBMJDKHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90D70)

inline static constexpr unsigned int ICEBMJDKHFK_TypeDefinitionIndex = 70788;

class ICEBMJDKHFK : public ::MCKJMKBPMCC
{
public:
	::ICEBMJDKHFK_ECFKGKDJNFN* MJODCBFMDMM; // 0x18
	::NEPOHJIFNNA* EJALIPLJCEP; // 0x20
	::HODGKGJJPCE* HJIDGOKGJEA; // 0x28
	::GDEIEGKOLIH* BIOMNNMDEPK; // 0x30

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + ICEBMJDKHFK__CTOR_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Boolean GIAOBHOJCDP(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::Boolean ABMOAEMEEGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_GIAOBHOJCDP_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, ABMOAEMEEGE);
	}

	::System::Boolean MENPFLLPANP(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm AMEAKDHBEBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_MENPFLLPANP_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, AMEAKDHBEBA);
	}

	::System::Void IGCLJKPFEAH(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_IGCLJKPFEAH_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void MODCHANABNO(::MoleMole::CameraModuleAvatarDataConfigExt* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + ICEBMJDKHFK_MODCHANABNO_OFFSET))(this, MIALFKCCCPI);
	}
};
