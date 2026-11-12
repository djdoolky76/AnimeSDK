#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
class NJKFOJJDGGG;

#define IJHIMGPONLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1743B210)
#define IJHIMGPONLJ_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1743A970)
#define IJHIMGPONLJ_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x1743ACE0)

inline static constexpr unsigned int IJHIMGPONLJ_TypeDefinitionIndex = 66883;

	class IJHIMGPONLJ : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHIMGPONLJ_CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IJHIMGPONLJ_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IJHIMGPONLJ_UPDATEROLE_OFFSET))(this, a1);
		}

	};
