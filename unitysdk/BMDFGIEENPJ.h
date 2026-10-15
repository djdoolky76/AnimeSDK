#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class BMDFGIEENPJ;
class HCFLAPPBPOP;
class LLOLFGCKKJB;
class PFMAAAJFLOA;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BMDFGIEENPJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBDA2A60)
#define BMDFGIEENPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA2B10)
#define BMDFGIEENPJ_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0xBDA29F0)
#define BMDFGIEENPJ_IFCJKAMCFIK_OFFSET UNITYSDK_OFFSET(0xBDA2A10)
#define BMDFGIEENPJ_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xBDA2A00)

	class BMDFGIEENPJ
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + BMDFGIEENPJ_CTOR_OFFSET))(this, a1);
		}

		::LLOLFGCKKJB* HIGMHCHDPDL()
		{
			return ((::LLOLFGCKKJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDFGIEENPJ_HIGMHCHDPDL_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDFGIEENPJ_JOHPKPGOGHD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::PFMAAAJFLOA*>* IFCJKAMCFIK()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::PFMAAAJFLOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDFGIEENPJ_IFCJKAMCFIK_OFFSET))(this);
		}

		static ::BMDFGIEENPJ* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::BMDFGIEENPJ*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + BMDFGIEENPJ_BPLPBPMEODA_OFFSET))(a1);
		}

	};
