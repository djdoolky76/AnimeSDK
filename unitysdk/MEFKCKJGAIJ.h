#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightJadeShopEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MEFKCKJGAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x183FF250)
#define MEFKCKJGAIJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x183FF2A0)
#define MEFKCKJGAIJ_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x183FF400)

inline static constexpr unsigned int MEFKCKJGAIJ_TypeDefinitionIndex = 67252;

	class MEFKCKJGAIJ : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightJadeShopEffect* LBNBPMIFDHI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightJadeShopEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightJadeShopEffect*))((::PBYTE)hIl2Cpp + MEFKCKJGAIJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MEFKCKJGAIJ_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFKCKJGAIJ_UPDATEDONE_OFFSET))(this);
		}

	};
