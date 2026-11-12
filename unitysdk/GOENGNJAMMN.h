#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDKBMDPKMA;
namespace RPG::GameCore { class ComicDessertDishSetRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOENGNJAMMN_CGGAMBCOOPC_OFFSET UNITYSDK_OFFSET(0x16AB2B10)
#define GOENGNJAMMN_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x16AB2C60)
#define GOENGNJAMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x16AB2E00)
#define GOENGNJAMMN_EFDDFLCPNHA_OFFSET UNITYSDK_OFFSET(0x16AB27C0)
#define GOENGNJAMMN_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x16AB2880)

inline static constexpr unsigned int GOENGNJAMMN_TypeDefinitionIndex = 77155;

	class GOENGNJAMMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDDKBMDPKMA*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOENGNJAMMN_CTOR_OFFSET))(this);
		}

		::FDDKBMDPKMA* EFDDFLCPNHA(::System::UInt32 a1)
		{
			return ((::FDDKBMDPKMA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOENGNJAMMN_EFDDFLCPNHA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FDDKBMDPKMA*>* CGGAMBCOOPC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FDDKBMDPKMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOENGNJAMMN_CGGAMBCOOPC_OFFSET))(this);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOENGNJAMMN_HHNFFFMBIKD_OFFSET))(this);
		}

		::FDDKBMDPKMA* CMDKBLLNMIB(::RPG::GameCore::ComicDessertDishSetRow* a1)
		{
			return ((::FDDKBMDPKMA*(*)(::PVOID, ::RPG::GameCore::ComicDessertDishSetRow*))((::PBYTE)hIl2Cpp + GOENGNJAMMN_CMDKBLLNMIB_OFFSET))(this, a1);
		}

	};
