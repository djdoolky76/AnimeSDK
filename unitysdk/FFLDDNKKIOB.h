#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIDMPBAABII;
namespace RPG::GameCore { class FiveDimMusicDirectorComponentConfig; }

#define FFLDDNKKIOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3FE80)

inline static constexpr unsigned int FFLDDNKKIOB_TypeDefinitionIndex = 43402;

	class FFLDDNKKIOB : public ::System::Object
	{
	public:
		::DIDMPBAABII* MEPFOEEGBEA; // 0x10
		::RPG::GameCore::FiveDimMusicDirectorComponentConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLDDNKKIOB_CTOR_OFFSET))(this);
		}

	};
