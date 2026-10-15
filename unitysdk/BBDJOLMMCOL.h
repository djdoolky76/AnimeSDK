#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCHBFEIOIHA.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
class BBDJOLMMCOL;
class HBPBHGILAMK;
class MBAFPDAJNAK;
class PKBOFOOJCGL;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentOptionStepConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBDJOLMMCOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E854F0)
#define BBDJOLMMCOL_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0x15E85790)
#define BBDJOLMMCOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15E85590)
#define BBDJOLMMCOL_EPGNFOIJHAK_OFFSET UNITYSDK_OFFSET(0x15E85950)
#define BBDJOLMMCOL_EPJPICKMJLF_OFFSET UNITYSDK_OFFSET(0x15E85BB0)
#define BBDJOLMMCOL_JJHHOJFLOAK_OFFSET UNITYSDK_OFFSET(0x15E858C0)
#define BBDJOLMMCOL_OKAAGEKIOCD_OFFSET UNITYSDK_OFFSET(0x15E857E0)

inline static constexpr unsigned int BBDJOLMMCOL_TypeDefinitionIndex = 75551;

	class BBDJOLMMCOL : public ::JCHBFEIOIHA
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* DAKADOEFDKC; // 0x30
		::RPG::GameCore::HipplenIncidentOptionStepConfig* IGHAHBNLIJA; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* AMDDFDJAHCG; // 0x40
		::System::Boolean JABLOGLPLOP; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 ANBBJKEFNJH; // 0x4C
		::System::Void _ctor(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::BBDJOLMMCOL* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentOptionStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::BBDJOLMMCOL*(*)(::RPG::GameCore::HipplenIncidentOptionStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_CNKLGPEIBGI_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* JJHHOJFLOAK()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_JJHHOJFLOAK_OFFSET))(this);
		}

		::System::Void EPGNFOIJHAK(::MBAFPDAJNAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBAFPDAJNAK*))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_EPGNFOIJHAK_OFFSET))(this, a1);
		}

		::System::Void EPJPICKMJLF(::HBPBHGILAMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPBHGILAMK*))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_EPJPICKMJLF_OFFSET))(this, a1);
		}

		::System::Void OKAAGEKIOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDJOLMMCOL_OKAAGEKIOCD_OFFSET))(this);
		}

	};
