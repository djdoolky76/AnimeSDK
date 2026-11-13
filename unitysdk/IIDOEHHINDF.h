#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
class NJKFOJJDGGG;

#define IIDOEHHINDF_CTOR_OFFSET UNITYSDK_OFFSET(0x193CC270)
#define IIDOEHHINDF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x193CBFA0)
#define IIDOEHHINDF_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x193CC120)
#define IIDOEHHINDF_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x193CC0D0)
#define IIDOEHHINDF_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x193CC080)
#define IIDOEHHINDF_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x193CC030)
#define IIDOEHHINDF_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x193CBFF0)

inline static constexpr unsigned int IIDOEHHINDF_TypeDefinitionIndex = 66390;

	class IIDOEHHINDF : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Boolean EMINADBJHLG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IIDOEHHINDF_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEDONE_OFFSET))(this);
		}

	};
