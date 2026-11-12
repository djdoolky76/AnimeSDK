#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCLAKDAHDB.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
class FKIODIMJPNA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENFLCCBOFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164BC590)
#define ENFLCCBOFKJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x164BC500)
#define ENFLCCBOFKJ_HIBJNGKEKOG_OFFSET UNITYSDK_OFFSET(0x164BC080)
#define ENFLCCBOFKJ_HMDEGMNIFGO_OFFSET UNITYSDK_OFFSET(0x164BC090)
#define ENFLCCBOFKJ_IICGHDNEBKN_OFFSET UNITYSDK_OFFSET(0x164BC470)
#define ENFLCCBOFKJ_PIEPCPLDFMN_OFFSET UNITYSDK_OFFSET(0x164BC150)

inline static constexpr unsigned int ENFLCCBOFKJ_TypeDefinitionIndex = 61476;

	class ENFLCCBOFKJ : public ::DGCLAKDAHDB
	{
	public:
		::System::Collections::Generic::HashSet_1<::FKIODIMJPNA*>* MFGEADHPLHO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PetDiySlotType HIBJNGKEKOG()
		{
			return ((::RPG::GameCore::PetDiySlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_HIBJNGKEKOG_OFFSET))(this);
		}

		::System::Void HMDEGMNIFGO(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_HMDEGMNIFGO_OFFSET))(this, a1);
		}

		::System::Void IICGHDNEBKN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_IICGHDNEBKN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_HADOHLNHHGB_OFFSET))(this);
		}

		static ::System::Void PIEPCPLDFMN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + ENFLCCBOFKJ_PIEPCPLDFMN_OFFSET))(a1);
		}

	};
