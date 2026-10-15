#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenIncidentStepState.h"
#include "unitysdk/System/Object.h"
class JCHBFEIOIHA;
class OEECGAHNFDI;
class PKBOFOOJCGL;
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCHBFEIOIHA_AKPIEMKIKEP_OFFSET UNITYSDK_OFFSET(0x1658B300)
#define JCHBFEIOIHA_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1658ACA0)
#define JCHBFEIOIHA_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0x1658B340)
#define JCHBFEIOIHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1658AD50)
#define JCHBFEIOIHA_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x1658AC90)
#define JCHBFEIOIHA_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1658ACE0)
#define JCHBFEIOIHA_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1658B130)
#define JCHBFEIOIHA_IMMJILGKOMM_OFFSET UNITYSDK_OFFSET(0x1658AFA0)
#define JCHBFEIOIHA_MGNBLKKHPLM_OFFSET UNITYSDK_OFFSET(0x1658B380)
#define JCHBFEIOIHA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1658AE00)

inline static constexpr unsigned int JCHBFEIOIHA_TypeDefinitionIndex = 75553;

	class JCHBFEIOIHA : public ::System::Object
	{
	public:
		::PKBOFOOJCGL* _Controller_k__BackingField; // 0x10
		::System::Action* BBAONIHHGGL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::OEECGAHNFDI*>*>* EFBHGNCEAEE; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState DLNIGFGLPLJ; // 0x28
		::System::Void _ctor(::PKBOFOOJCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_CTOR_OFFSET))(this, a1);
		}

		::PKBOFOOJCGL* get_Controller()
		{
			return ((::PKBOFOOJCGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_GET_CONTROLLER_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentStepState))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void IMMJILGKOMM(::OEECGAHNFDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEECGAHNFDI*))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_IMMJILGKOMM_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_HFKFNFKIEON_OFFSET))(this);
		}

		::JCHBFEIOIHA* AKPIEMKIKEP()
		{
			return ((::JCHBFEIOIHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_AKPIEMKIKEP_OFFSET))(this);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_CNKLGPEIBGI_OFFSET))(this);
		}

		::System::Void MGNBLKKHPLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHBFEIOIHA_MGNBLKKHPLM_OFFSET))(this);
		}

	};
