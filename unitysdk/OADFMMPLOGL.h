#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJFNJCPHFDM;
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OADFMMPLOGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1BD50)
#define OADFMMPLOGL_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBD1BD60)

	class OADFMMPLOGL : public ::System::Object
	{
	public:
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x10
		::System::Void _ctor(::FJFNJCPHFDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + OADFMMPLOGL_CTOR_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*))((::PBYTE)hIl2Cpp + OADFMMPLOGL_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

	};
