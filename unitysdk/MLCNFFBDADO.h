#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCLAKDAHDB.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
class FKIODIMJPNA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MLCNFFBDADO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6FA0)
#define MLCNFFBDADO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB9A6F10)
#define MLCNFFBDADO_HIBJNGKEKOG_OFFSET UNITYSDK_OFFSET(0xB9A6DC0)
#define MLCNFFBDADO_HMDEGMNIFGO_OFFSET UNITYSDK_OFFSET(0xB9A6DD0)
#define MLCNFFBDADO_IICGHDNEBKN_OFFSET UNITYSDK_OFFSET(0xB9A6E80)

inline static constexpr unsigned int MLCNFFBDADO_TypeDefinitionIndex = 60191;

	class MLCNFFBDADO : public ::DGCLAKDAHDB
	{
	public:
		::System::Collections::Generic::HashSet_1<::FKIODIMJPNA*>* MFGEADHPLHO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCNFFBDADO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PetDiySlotType HIBJNGKEKOG()
		{
			return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCNFFBDADO_HIBJNGKEKOG_OFFSET))(this);
		}

		::System::Void HMDEGMNIFGO(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + MLCNFFBDADO_HMDEGMNIFGO_OFFSET))(this, a1);
		}

		::System::Void IICGHDNEBKN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + MLCNFFBDADO_IICGHDNEBKN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCNFFBDADO_HADOHLNHHGB_OFFSET))(this);
		}

	};
