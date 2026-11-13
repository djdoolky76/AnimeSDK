#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIDMPBAABII;
namespace RPG::GameCore { class FiveDimMusicDirectorComponentConfig; }

#define FFLDDNKKIOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20A640)

inline static constexpr unsigned int FFLDDNKKIOB_TypeDefinitionIndex = 44383;

	class FFLDDNKKIOB : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimMusicDirectorComponentConfig* EABKOHGCHFP; // 0x10
		::DIDMPBAABII* MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLDDNKKIOB_CTOR_OFFSET))(this);
		}

	};
