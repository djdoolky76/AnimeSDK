#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/OIPMNNAHIFP.h"
namespace RPG::Client::Promises { class IPromise; }

#define CNFBBPCHCDG_BBGPODGJKNB_OFFSET UNITYSDK_OFFSET(0xDA44970)
#define CNFBBPCHCDG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA44960)
#define CNFBBPCHCDG_GHDFPNJPICE_OFFSET UNITYSDK_OFFSET(0xDA449D0)
#define CNFBBPCHCDG_GPEOAJJHAAG_OFFSET UNITYSDK_OFFSET(0xDA44780)
#define CNFBBPCHCDG_KOKOODEIEEO_OFFSET UNITYSDK_OFFSET(0xDA44590)

inline static constexpr unsigned int CNFBBPCHCDG_TypeDefinitionIndex = 62753;

	class CNFBBPCHCDG : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFBBPCHCDG_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KOKOODEIEEO(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + CNFBBPCHCDG_KOKOODEIEEO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GPEOAJJHAAG(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + CNFBBPCHCDG_GPEOAJJHAAG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* BBGPODGJKNB(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + CNFBBPCHCDG_BBGPODGJKNB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* GHDFPNJPICE(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + CNFBBPCHCDG_GHDFPNJPICE_OFFSET))(this, a1);
		}

	};
