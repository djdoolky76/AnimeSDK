#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
class OIMEGOHPNFI;
class OOJHKJMGPAN;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NDPCHFKPIFL_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xBB4FD60)
#define NDPCHFKPIFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB502C0)
#define NDPCHFKPIFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB50220)
#define NDPCHFKPIFL_EJCEKMOMLPA_OFFSET UNITYSDK_OFFSET(0xBB50080)

inline static constexpr unsigned int NDPCHFKPIFL_TypeDefinitionIndex = 77368;

	class NDPCHFKPIFL : public ::System::Object
	{
	public:
		::OOJHKJMGPAN* CEFLLELKFOP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::OIMEGOHPNFI*>* AHCAEBBFPMD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCHFKPIFL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + NDPCHFKPIFL_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		::OIMEGOHPNFI* EJCEKMOMLPA(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
		{
			return ((::OIMEGOHPNFI*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + NDPCHFKPIFL_EJCEKMOMLPA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCHFKPIFL_DISPOSE_OFFSET))(this);
		}

	};
