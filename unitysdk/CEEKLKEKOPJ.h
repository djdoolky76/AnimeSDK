#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class VCameraConfig; }

#define CEEKLKEKOPJ_BFNODBLADGH_OFFSET UNITYSDK_OFFSET(0xC782430)
#define CEEKLKEKOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC7826C0)
#define CEEKLKEKOPJ_IBHHKLMDAMF_OFFSET UNITYSDK_OFFSET(0xC7825E0)
#define CEEKLKEKOPJ_JONAFIMDHJL_OFFSET UNITYSDK_OFFSET(0xC782650)
#define CEEKLKEKOPJ_NKKOKCJDEJM_OFFSET UNITYSDK_OFFSET(0xC7824F0)
#define CEEKLKEKOPJ_OGPCBOFHLPI_OFFSET UNITYSDK_OFFSET(0xC7822E0)

inline static constexpr unsigned int CEEKLKEKOPJ_TypeDefinitionIndex = 52068;

	class CEEKLKEKOPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::VCameraConfig* OGPCBOFHLPI(::System::Single a1)
		{
			return ((::RPG::GameCore::VCameraConfig*(*)(::System::Single))((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_OGPCBOFHLPI_OFFSET))(a1);
		}

		static ::RPG::GameCore::VCameraConfig* BFNODBLADGH()
		{
			return ((::RPG::GameCore::VCameraConfig*(*)())((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_BFNODBLADGH_OFFSET))();
		}

		static ::RPG::GameCore::VCameraConfig* NKKOKCJDEJM()
		{
			return ((::RPG::GameCore::VCameraConfig*(*)())((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_NKKOKCJDEJM_OFFSET))();
		}

		static ::System::Void IBHHKLMDAMF(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_IBHHKLMDAMF_OFFSET))(a1);
		}

		static ::System::Void JONAFIMDHJL(::RPG::GameCore::CRPVirtualCameraConfig* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfig*))((::PBYTE)hIl2Cpp + CEEKLKEKOPJ_JONAFIMDHJL_OFFSET))(a1);
		}

	};
