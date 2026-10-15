#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCFPLEDCJKF;
class FCFPLEDCJKF_ANJIEBKBMKG;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryStateInfo; }

#define FCFPLEDCJKF_ANJIEBKBMKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156ADDA0)
#define FCFPLEDCJKF_ANJIEBKBMKG_CTOR_OFFSET UNITYSDK_OFFSET(0x156AEDE0)
#define FCFPLEDCJKF_ANJIEBKBMKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156AECC0)

inline static constexpr unsigned int FCFPLEDCJKF_ANJIEBKBMKG_TypeDefinitionIndex = 69308;

	class FCFPLEDCJKF_ANJIEBKBMKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_ANJIEBKBMKG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_ANJIEBKBMKG_DISPOSE_OFFSET))(this);
		}

		static ::FCFPLEDCJKF_ANJIEBKBMKG* BPLPBPMEODA(::FCFPLEDCJKF* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo* a2)
		{
			return ((::FCFPLEDCJKF_ANJIEBKBMKG*(*)(::FCFPLEDCJKF*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryStateInfo*))((::PBYTE)hIl2Cpp + FCFPLEDCJKF_ANJIEBKBMKG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
