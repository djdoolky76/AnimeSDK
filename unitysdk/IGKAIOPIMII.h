#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EJFAHBINDIN;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGKAIOPIMII_CTOR_OFFSET UNITYSDK_OFFSET(0x1640FF30)
#define IGKAIOPIMII_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1640FF40)
#define IGKAIOPIMII_FHILIJNOGAJ_OFFSET UNITYSDK_OFFSET(0x16410150)
#define IGKAIOPIMII_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16410170)
#define IGKAIOPIMII_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0x16410230)

	class IGKAIOPIMII : public ::System::Object
	{
	public:
		::RPG::GameCore::AIDecisionGroup* DDKJFDOFGLC; // 0x10
		::System::Collections::Generic::List_1<::EJFAHBINDIN*>* MJEPDDDKCEN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
