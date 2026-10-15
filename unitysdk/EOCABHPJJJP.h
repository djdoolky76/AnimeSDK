#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMAHFAIGEIJ.h"
#include "unitysdk/MLMFEFCOOIC.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"

#define EOCABHPJJJP_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x2E73C90)

	struct alignas(8) EOCABHPJJJP
	{
		::System::Single EMBOAAJDADC; // 0x10
		::System::Single GJCODLDEDOP; // 0x14
		::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x18
		::RootMotion::IKJob::IKTransformRef MFNKBADPJIH; // 0x28
		::Il2CppArray<::AMAHFAIGEIJ>* CKBMEBFDKGK; // 0x38
		::Il2CppArray<::MLMFEFCOOIC>* PEJOIJFLIBN; // 0x40
		::System::Boolean CIJDJDICMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCABHPJJJP_CIJDJDICMMM_OFFSET))(this);
		}

	};
