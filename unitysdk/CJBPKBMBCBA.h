#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class CJBPKBMBCBA;
class HCFLAPPBPOP;
class LIELJCGKNJN;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CJBPKBMBCBA_BJOAIDBLNNB_OFFSET UNITYSDK_OFFSET(0xCF92EB0)
#define CJBPKBMBCBA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF92F00)
#define CJBPKBMBCBA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF92FB0)
#define CJBPKBMBCBA_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xCF92EA0)

inline static constexpr unsigned int CJBPKBMBCBA_TypeDefinitionIndex = 78077;

	class CJBPKBMBCBA
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + CJBPKBMBCBA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBPKBMBCBA_JOHPKPGOGHD_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::LIELJCGKNJN*>* BJOAIDBLNNB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::LIELJCGKNJN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBPKBMBCBA_BJOAIDBLNNB_OFFSET))(this);
		}

		static ::CJBPKBMBCBA* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::CJBPKBMBCBA*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + CJBPKBMBCBA_BPLPBPMEODA_OFFSET))(a1);
		}

	};
