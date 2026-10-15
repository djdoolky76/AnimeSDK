#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Object.h"
class CJADIOHCKFH;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MDILEMALGNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8AC3F0)
#define MDILEMALGNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AC3E0)
#define MDILEMALGNC_FMLAODJELFJ_OFFSET UNITYSDK_OFFSET(0xB8AC590)
#define MDILEMALGNC_JBIKAAECIEL_OFFSET UNITYSDK_OFFSET(0xB8AC540)
#define MDILEMALGNC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8AC4B0)

	class MDILEMALGNC : public ::System::Object
	{
	public:
		::RPG::Client::CameraModuleConfigCollection* OLJOLFIABHF; // 0x10
		::RPG::Client::PipelineCameraGlobalConfig* LNJOKGMKCCH; // 0x18
		::RPG::Client::PipelineCameraEngine* CFCHNJIKNCH; // 0x20
		::RPG::Client::CameraDataAndFlags* FJCAKOIDONG; // 0x28
		::RPG::Client::CameraModuleType GMPGDEINODK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDILEMALGNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + MDILEMALGNC_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + MDILEMALGNC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JBIKAAECIEL(::CJADIOHCKFH* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJADIOHCKFH*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + MDILEMALGNC_JBIKAAECIEL_OFFSET))(this, a1, a2);
		}

		::System::Void FMLAODJELFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDILEMALGNC_FMLAODJELFJ_OFFSET))(this);
		}

	};
