#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_CustomPredicatorType.h"
#include "unitysdk/RPG/Client/RuntimeGroupManager_GroupRefreshReason.h"
#include "unitysdk/System/Object.h"
class AJEAHAODOHJ;
class DLAONJFMHJP;
class ODAHABLMCHK;
namespace RPG::Client { class MapDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIFHJBBDKDC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9E0B0)

inline static constexpr unsigned int AIFHJBBDKDC_TypeDefinitionIndex = 62038;

	class AIFHJBBDKDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ODAHABLMCHK*>* GBLIAHDPCGG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AJEAHAODOHJ*>* DNMMNAGMECL; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GFJNDJKNIEE; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EDABKLOONIM; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* HPBFNAJGBCF; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* GKJCOGFCMLL; // 0x38
		::RPG::Client::MapDef* NGDKFLNHHIJ; // 0x40
		::DLAONJFMHJP* HKAEGFDOEJF; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* EOPMGFBNCFF; // 0x50
		::RPG::Client::RuntimeGroupManager_CustomPredicatorType NAJHNDDNALF; // 0x58
		::System::Boolean AGACAKJCMNI; // 0x5C
		::System::Boolean AKPDPEOAOGJ; // 0x5D
		::System::Boolean BJOMCBHJJLF; // 0x5E
		::System::Boolean OANGBLKPCNB; // 0x5F
		::System::Boolean PGABEFKAGKG; // 0x60
		::System::Boolean GABIMEHEFNO; // 0x61
		::System::Byte _padding0[0x2];
		::RPG::Client::RuntimeGroupManager_GroupRefreshReason KDHPKOFLNFM; // 0x64
		::System::UInt32 DDKKPFDPDIM; // 0x68
		::System::UInt32 FIDIIIOBGFD; // 0x6C
		::System::UInt32 MLNFFHDIGIL; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFHJBBDKDC_CTOR_OFFSET))(this);
		}

	};
