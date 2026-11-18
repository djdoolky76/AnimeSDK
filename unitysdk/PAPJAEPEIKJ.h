#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GALJGJIGMEK.h"
#include "unitysdk/System/Object.h"

class DDDAHJHLPJM;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define PAPJAEPEIKJ_AAMMFJBPPFF_OFFSET UNITYSDK_OFFSET(0x178AC970)
#define PAPJAEPEIKJ_ANCBPEEKPBG_OFFSET UNITYSDK_OFFSET(0x178AC6E0)
#define PAPJAEPEIKJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x178AC8F0)
#define PAPJAEPEIKJ_CLPAJKOJNKO_OFFSET UNITYSDK_OFFSET(0x178AC930)
#define PAPJAEPEIKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178ACA00)
#define PAPJAEPEIKJ_IAHFCDNLJME_OFFSET UNITYSDK_OFFSET(0x178ACC20)
#define PAPJAEPEIKJ_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x178AC9B0)
#define PAPJAEPEIKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178AC6A0)

inline static constexpr unsigned int PAPJAEPEIKJ_TypeDefinitionIndex = 83488;

class PAPJAEPEIKJ : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraDataAccessor* EFFAONJBCOG; // 0x10
	::DDDAHJHLPJM* GLPHJIFDEHC; // 0x18

	::System::Void _ctor(::DDDAHJHLPJM* ABIGMMNDAOF)
	{
		return ((::System::Void(*)(::PVOID, ::DDDAHJHLPJM*))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ__CTOR_OFFSET))(this, ABIGMMNDAOF);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_BBOMJDBNHIC_OFFSET))(this);
	}

	::GALJGJIGMEK CLPAJKOJNKO()
	{
		return ((::GALJGJIGMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_CLPAJKOJNKO_OFFSET))(this);
	}

	::System::Boolean AAMMFJBPPFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_AAMMFJBPPFF_OFFSET))(this);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_DISPOSE_OFFSET))(this);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* IAHFCDNLJME()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_IAHFCDNLJME_OFFSET))(this);
	}

	::System::Void ANCBPEEKPBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPJAEPEIKJ_ANCBPEEKPBG_OFFSET))(this);
	}
};
