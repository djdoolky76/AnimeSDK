#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
class LMLNNHKJEIP;
class PJMGBLIFDFP;
namespace RPG::Client { class BaseLobby; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FHPDDIGGNBH_DMHHNANJFOA_OFFSET UNITYSDK_OFFSET(0x15793AC0)
#define FHPDDIGGNBH_JDMMKOKJPPK_OFFSET UNITYSDK_OFFSET(0x15793890)
#define FHPDDIGGNBH_OJDLGADIJEL_OFFSET UNITYSDK_OFFSET(0x15793C00)
#define FHPDDIGGNBH_PDGBHFANJED_OFFSET UNITYSDK_OFFSET(0x15793F30)

inline static constexpr unsigned int FHPDDIGGNBH_TypeDefinitionIndex = 65776;

	class FHPDDIGGNBH : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseLobby* JDMMKOKJPPK(::FJPMJPEKLJL a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a3, ::System::UInt32 a4, ::PJMGBLIFDFP* a5)
		{
			return ((::RPG::Client::BaseLobby*(*)(::FJPMJPEKLJL, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*, ::System::UInt32, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + FHPDDIGGNBH_JDMMKOKJPPK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::BaseLobby* DMHHNANJFOA(::FJPMJPEKLJL a1, ::System::UInt64 a2, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>* a3, ::System::UInt32 a4, ::PJMGBLIFDFP* a5)
		{
			return ((::RPG::Client::BaseLobby*(*)(::FJPMJPEKLJL, ::System::UInt64, ::System::Collections::Generic::IReadOnlyList_1<::LMLNNHKJEIP*>*, ::System::UInt32, ::PJMGBLIFDFP*))((::PBYTE)hIl2Cpp + FHPDDIGGNBH_DMHHNANJFOA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::FMHEHLIFNGJ* OJDLGADIJEL(::FJPMJPEKLJL a1, ::System::Object* a2)
		{
			return ((::FMHEHLIFNGJ*(*)(::FJPMJPEKLJL, ::System::Object*))((::PBYTE)hIl2Cpp + FHPDDIGGNBH_OJDLGADIJEL_OFFSET))(a1, a2);
		}

		static ::PJMGBLIFDFP* PDGBHFANJED(::FJPMJPEKLJL a1)
		{
			return ((::PJMGBLIFDFP*(*)(::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + FHPDDIGGNBH_PDGBHFANJED_OFFSET))(a1);
		}

	};
