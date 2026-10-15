#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCHBFEIOIHA.h"
class HBPBHGILAMK;
class NOOOONKMGIG;
class PKBOFOOJCGL;
namespace RPG::GameCore { class HipplenIncidentCommitConfig; }

#define NOOOONKMGIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBCF7AF0)
#define NOOOONKMGIG_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0xBCF7C90)
#define NOOOONKMGIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7C00)
#define NOOOONKMGIG_EPJPICKMJLF_OFFSET UNITYSDK_OFFSET(0xBCF7E80)

	class NOOOONKMGIG : public ::JCHBFEIOIHA
	{
	public:
		::RPG::GameCore::HipplenIncidentCommitConfig* IGHAHBNLIJA; // 0x30
		::System::Boolean JABLOGLPLOP; // 0x38
		::System::Void _ctor(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentCommitConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + NOOOONKMGIG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::NOOOONKMGIG* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::NOOOONKMGIG*(*)(::RPG::GameCore::HipplenIncidentCommitConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + NOOOONKMGIG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOOONKMGIG_CNKLGPEIBGI_OFFSET))(this);
		}

		::System::Void EPJPICKMJLF(::HBPBHGILAMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPBHGILAMK*))((::PBYTE)hIl2Cpp + NOOOONKMGIG_EPJPICKMJLF_OFFSET))(this, a1);
		}

	};
