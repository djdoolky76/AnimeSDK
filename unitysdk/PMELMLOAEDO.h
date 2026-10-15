#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLOENPDAHE;

#define PMELMLOAEDO_ALEIBBGALHJ_OFFSET UNITYSDK_OFFSET(0xC311D80)
#define PMELMLOAEDO_ELKFFEIOGDN_OFFSET UNITYSDK_OFFSET(0xC311D20)
#define PMELMLOAEDO_MNINMMOJAOL_OFFSET UNITYSDK_OFFSET(0xC311CC0)

inline static constexpr unsigned int PMELMLOAEDO_TypeDefinitionIndex = 62099;

	class PMELMLOAEDO : public ::System::Object
	{
	public:
		static ::System::Boolean MNINMMOJAOL(::BJLOENPDAHE* a1)
		{
			return ((::System::Boolean(*)(::BJLOENPDAHE*))((::PBYTE)hIl2Cpp + PMELMLOAEDO_MNINMMOJAOL_OFFSET))(a1);
		}

		static ::System::Boolean ELKFFEIOGDN(::BJLOENPDAHE* a1)
		{
			return ((::System::Boolean(*)(::BJLOENPDAHE*))((::PBYTE)hIl2Cpp + PMELMLOAEDO_ELKFFEIOGDN_OFFSET))(a1);
		}

		static ::System::Single ALEIBBGALHJ(::BJLOENPDAHE* a1)
		{
			return ((::System::Single(*)(::BJLOENPDAHE*))((::PBYTE)hIl2Cpp + PMELMLOAEDO_ALEIBBGALHJ_OFFSET))(a1);
		}

	};
