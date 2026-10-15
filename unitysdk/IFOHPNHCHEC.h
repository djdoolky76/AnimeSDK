#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class HAJJKFAIJBD;
class HCFLAPPBPOP;
class IFOHPNHCHEC;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IFOHPNHCHEC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15F30A10)
#define IFOHPNHCHEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F30AC0)
#define IFOHPNHCHEC_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x15F309B0)
#define IFOHPNHCHEC_MEGLNFOFMEH_OFFSET UNITYSDK_OFFSET(0x15F309C0)

inline static constexpr unsigned int IFOHPNHCHEC_TypeDefinitionIndex = 78066;

	class IFOHPNHCHEC
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IFOHPNHCHEC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOHPNHCHEC_JOHPKPGOGHD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HAJJKFAIJBD*>* MEGLNFOFMEH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HAJJKFAIJBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOHPNHCHEC_MEGLNFOFMEH_OFFSET))(this);
		}

		static ::IFOHPNHCHEC* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::IFOHPNHCHEC*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IFOHPNHCHEC_BPLPBPMEODA_OFFSET))(a1);
		}

	};
