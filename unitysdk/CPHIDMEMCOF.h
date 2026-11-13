#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCHBFEIOIHA.h"
class CPHIDMEMCOF;
class JCHBFEIOIHA;
class PKBOFOOJCGL;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class HipplenIncidentLevelGraphStepConfig; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace System { class String; }

#define CPHIDMEMCOF_AKPIEMKIKEP_OFFSET UNITYSDK_OFFSET(0x191800D0)
#define CPHIDMEMCOF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1917FC20)
#define CPHIDMEMCOF_CGBCEMIBBGL_OFFSET UNITYSDK_OFFSET(0x1917FD40)
#define CPHIDMEMCOF_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0x1917FCE0)
#define CPHIDMEMCOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1917FCC0)
#define CPHIDMEMCOF_DHBJHMFMLCI_OFFSET UNITYSDK_OFFSET(0x19180110)
#define CPHIDMEMCOF_KNPLJDMAPIC_OFFSET UNITYSDK_OFFSET(0x19180070)
#define CPHIDMEMCOF_MGNBLKKHPLM_OFFSET UNITYSDK_OFFSET(0x1917FFF0)

inline static constexpr unsigned int CPHIDMEMCOF_TypeDefinitionIndex = 77873;

	class CPHIDMEMCOF : public ::JCHBFEIOIHA
	{
	public:
		::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x30
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x38
		::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* IGHAHBNLIJA; // 0x40
		::System::Void _ctor(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::CPHIDMEMCOF* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::CPHIDMEMCOF*(*)(::RPG::GameCore::HipplenIncidentLevelGraphStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_CNKLGPEIBGI_OFFSET))(this);
		}

		::System::Void MGNBLKKHPLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_MGNBLKKHPLM_OFFSET))(this);
		}

		::JCHBFEIOIHA* AKPIEMKIKEP()
		{
			return ((::JCHBFEIOIHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_AKPIEMKIKEP_OFFSET))(this);
		}

		::System::Boolean CGBCEMIBBGL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_CGBCEMIBBGL_OFFSET))(this, a1);
		}

		::System::Boolean KNPLJDMAPIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_KNPLJDMAPIC_OFFSET))(this);
		}

		::System::Void DHBJHMFMLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHIDMEMCOF_DHBJHMFMLCI_OFFSET))(this);
		}

	};
