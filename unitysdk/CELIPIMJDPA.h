#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class DBPJGJICHOI;
class KDCNOMHGMNO;
namespace RPG::GameCore { class TaskContext; }

#define CELIPIMJDPA_CTOR_OFFSET UNITYSDK_OFFSET(0x18820680)
#define CELIPIMJDPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18820790)

inline static constexpr unsigned int CELIPIMJDPA_TypeDefinitionIndex = 55024;

	class CELIPIMJDPA
	{
	public:
		::KDCNOMHGMNO* PMEOEIDANPD; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBPJGJICHOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBPJGJICHOI*))((::PBYTE)hIl2Cpp + CELIPIMJDPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELIPIMJDPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
