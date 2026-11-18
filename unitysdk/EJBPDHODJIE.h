#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/System/Object.h"

class LOHPBEPDLOG;
namespace MoleMole { class CameraShotData; }
namespace Nap::NapECS { class EcsWorld; }

#define EJBPDHODJIE_BCJFEKPBGAJ_OFFSET UNITYSDK_OFFSET(0xF9D29E0)
#define EJBPDHODJIE_EILHANNLKFD_OFFSET UNITYSDK_OFFSET(0xF9D29D0)
#define EJBPDHODJIE_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0xF9D2950)
#define EJBPDHODJIE_GGJHMEGKBFP_OFFSET UNITYSDK_OFFSET(0xF9D2940)
#define EJBPDHODJIE_ICCHPOPKAAA_OFFSET UNITYSDK_OFFSET(0xF9D2930)
#define EJBPDHODJIE_ISCONTEXTOF_OFFSET UNITYSDK_OFFSET(0xF9D2960)
#define EJBPDHODJIE_LBLOIAPHGEM_OFFSET UNITYSDK_OFFSET(0xF9D29C0)
#define EJBPDHODJIE__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D29B0)

inline static constexpr unsigned int EJBPDHODJIE_TypeDefinitionIndex = 82774;

class EJBPDHODJIE : public ::System::Object
{
public:
	::LOHPBEPDLOG* _LDLHKDJKDBH_k__BackingField; // 0x10
	::Nap::NapECS::EcsWorld* _NHKFGJHNPGL_k__BackingField; // 0x18
	::MoleMole::CameraShotData* _HKEOBPLDOME_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPDHODJIE__CTOR_OFFSET))(this);
	}

	::MoleMole::CameraShotData* ICCHPOPKAAA()
	{
		return ((::MoleMole::CameraShotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPDHODJIE_ICCHPOPKAAA_OFFSET))(this);
	}

	::LOHPBEPDLOG* GGJHMEGKBFP()
	{
		return ((::LOHPBEPDLOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPDHODJIE_GGJHMEGKBFP_OFFSET))(this);
	}

	::Nap::NapECS::EcsWorld* EODBBODDHIL()
	{
		return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPDHODJIE_EODBBODDHIL_OFFSET))(this);
	}

	::System::Boolean IsContextOf(::CNGOPCAEJMN OFCNFADIBGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::CNGOPCAEJMN))((::PBYTE)hIl2Cpp + EJBPDHODJIE_ISCONTEXTOF_OFFSET))(this, OFCNFADIBGJ);
	}

	::System::Void LBLOIAPHGEM(::MoleMole::CameraShotData* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraShotData*))((::PBYTE)hIl2Cpp + EJBPDHODJIE_LBLOIAPHGEM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EILHANNLKFD(::Nap::NapECS::EcsWorld* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EJBPDHODJIE_EILHANNLKFD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BCJFEKPBGAJ(::LOHPBEPDLOG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + EJBPDHODJIE_BCJFEKPBGAJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
