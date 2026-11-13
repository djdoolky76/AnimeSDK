#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/System/Object.h"
class GBNPKAEIMPA;
namespace RPG::GameCore { class ComicDessertLevelRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHGNFAMOFCM_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x18E11340)
#define OHGNFAMOFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x18E11410)
#define OHGNFAMOFCM_FEACOOFIJKH_OFFSET UNITYSDK_OFFSET(0x18E10FA0)
#define OHGNFAMOFCM_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x18E110B0)

inline static constexpr unsigned int OHGNFAMOFCM_TypeDefinitionIndex = 77160;

	class OHGNFAMOFCM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::OCKCNOOHILK, ::GBNPKAEIMPA*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGNFAMOFCM_CTOR_OFFSET))(this);
		}

		::GBNPKAEIMPA* FEACOOFIJKH(::OCKCNOOHILK a1)
		{
			return ((::GBNPKAEIMPA*(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + OHGNFAMOFCM_FEACOOFIJKH_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGNFAMOFCM_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::GBNPKAEIMPA* CMDKBLLNMIB(::RPG::GameCore::ComicDessertLevelRow* a1)
		{
			return ((::GBNPKAEIMPA*(*)(::RPG::GameCore::ComicDessertLevelRow*))((::PBYTE)hIl2Cpp + OHGNFAMOFCM_CMDKBLLNMIB_OFFSET))(a1);
		}

	};
