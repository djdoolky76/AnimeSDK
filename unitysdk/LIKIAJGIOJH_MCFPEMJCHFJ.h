#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraModuleConfigBase; }

#define LIKIAJGIOJH_MCFPEMJCHFJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x172EBEE0)
#define LIKIAJGIOJH_MCFPEMJCHFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x172EBF40)

inline static constexpr unsigned int LIKIAJGIOJH_MCFPEMJCHFJ_TypeDefinitionIndex = 71629;

	class LIKIAJGIOJH_MCFPEMJCHFJ : public ::System::Object
	{
	public:
		::RPG::Client::CameraModuleConfigBase* EABKOHGCHFP; // 0x10
		::System::Boolean IFMOPDPKAPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_MCFPEMJCHFJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_MCFPEMJCHFJ_CLEAR_OFFSET))(this);
		}

	};
