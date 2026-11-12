#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FAODCLALLME;
class LHBDMLAPLLP;
class MNGBPAKGEME;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace System { class String; }

#define HHEIPELCNLH_CTOR_OFFSET UNITYSDK_OFFSET(0x16C17500)
#define HHEIPELCNLH_KGBKOEOLDNJ_OFFSET UNITYSDK_OFFSET(0x16C17B40)
#define HHEIPELCNLH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16C175D0)
#define HHEIPELCNLH_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0x16C17630)

inline static constexpr unsigned int HHEIPELCNLH_TypeDefinitionIndex = 83982;

	class HHEIPELCNLH : public ::System::Object
	{
	public:
		::LHBDMLAPLLP* NABLOINKCCC; // 0x10
		::FAODCLALLME* ILMLNDPKFNO; // 0x18
		::MNGBPAKGEME* LGFABLFAJBI; // 0x20
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* ACFBFHAOFFI; // 0x30
		::RPG::Client::TextID BHIOBDFAHLD; // 0x38
		::System::Void _ctor(::FAODCLALLME* a1, ::RPG::Client::FateRin::Logging::ILogger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FAODCLALLME*, ::RPG::Client::FateRin::Logging::ILogger*))((::PBYTE)hIl2Cpp + HHEIPELCNLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::TextID a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + HHEIPELCNLH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::String* OACBGCFADMP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HHEIPELCNLH_OACBGCFADMP_OFFSET))(this, a1);
		}

		::System::Void KGBKOEOLDNJ(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HHEIPELCNLH_KGBKOEOLDNJ_OFFSET))(this, a1, a2);
		}

	};
