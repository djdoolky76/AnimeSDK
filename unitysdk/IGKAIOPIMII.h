#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EJFAHBINDIN;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGKAIOPIMII_CTOR_OFFSET UNITYSDK_OFFSET(0x16402BC0)
#define IGKAIOPIMII_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x16402BD0)
#define IGKAIOPIMII_FHILIJNOGAJ_OFFSET UNITYSDK_OFFSET(0x16402DE0)
#define IGKAIOPIMII_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16402E00)
#define IGKAIOPIMII_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0x16402EC0)

inline static constexpr unsigned int IGKAIOPIMII_TypeDefinitionIndex = 57762;

	class IGKAIOPIMII : public ::System::Object
	{
	public:
		::RPG::GameCore::AIDecisionGroup* DDKJFDOFGLC; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::EJFAHBINDIN*>* MJEPDDDKCEN; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* APLHOPPLHBJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::AIDecisionGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + IGKAIOPIMII_CTOR_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + IGKAIOPIMII_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKAIOPIMII_KHGIKBFDLFB_OFFSET))(this);
		}

		::EJFAHBINDIN* LNBBIGFDAEH()
		{
			return ((::EJFAHBINDIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKAIOPIMII_LNBBIGFDAEH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* FHILIJNOGAJ()
		{
			return ((::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKAIOPIMII_FHILIJNOGAJ_OFFSET))(this);
		}

	};
