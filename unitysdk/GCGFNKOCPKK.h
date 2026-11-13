#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GCGFNKOCPKK_CADPACJFOBP_OFFSET UNITYSDK_OFFSET(0x19EA4610)
#define GCGFNKOCPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x19EA4550)
#define GCGFNKOCPKK_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x19EA48A0)
#define GCGFNKOCPKK_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x19EA4980)
#define GCGFNKOCPKK_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x19EA4560)
#define GCGFNKOCPKK_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x19EA45C0)

inline static constexpr unsigned int GCGFNKOCPKK_TypeDefinitionIndex = 67180;

	class GCGFNKOCPKK : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTraitElationLaughPointEffect* LBNBPMIFDHI; // 0x10
		::System::Boolean NFDLCFBMCIP; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void CADPACJFOBP(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + GCGFNKOCPKK_CADPACJFOBP_OFFSET))(this, a1);
		}

	};
