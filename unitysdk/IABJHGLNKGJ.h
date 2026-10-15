#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class HCFLAPPBPOP;
class IABJHGLNKGJ;
class PJPAOLMBKEC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IABJHGLNKGJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DFC4A0)
#define IABJHGLNKGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFC550)
#define IABJHGLNKGJ_EDBBIALDNPO_OFFSET UNITYSDK_OFFSET(0x15DFC450)
#define IABJHGLNKGJ_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0x15DFC440)

inline static constexpr unsigned int IABJHGLNKGJ_TypeDefinitionIndex = 78065;

	class IABJHGLNKGJ
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IABJHGLNKGJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + IABJHGLNKGJ_JOHPKPGOGHD_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>* EDBBIALDNPO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PJPAOLMBKEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABJHGLNKGJ_EDBBIALDNPO_OFFSET))(this);
		}

		static ::IABJHGLNKGJ* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::IABJHGLNKGJ*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + IABJHGLNKGJ_BPLPBPMEODA_OFFSET))(a1);
		}

	};
