#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class KJALACAGLNJ;
class PIIOAKOEACN;
class PJPPGJEDCOG;

#define BNKCDIFBAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C518470)
#define BNKCDIFBAGJ_FKDLBIEDFII_1_OFFSET UNITYSDK_OFFSET(0x1C517F10)
#define BNKCDIFBAGJ_FKDLBIEDFII_OFFSET UNITYSDK_OFFSET(0x1C517E20)
#define BNKCDIFBAGJ_FNNLPDHBOCL_OFFSET UNITYSDK_OFFSET(0x1C517B90)
#define BNKCDIFBAGJ_JKHAFHDJADI_1_OFFSET UNITYSDK_OFFSET(0x1C5176B0)
#define BNKCDIFBAGJ_JKHAFHDJADI_OFFSET UNITYSDK_OFFSET(0x1C517660)
#define BNKCDIFBAGJ_PAGGIBBGBLM_OFFSET UNITYSDK_OFFSET(0x1C518240)
#define BNKCDIFBAGJ_PLGCBKJCKIK_OFFSET UNITYSDK_OFFSET(0x1C5178D0)

inline static constexpr unsigned int BNKCDIFBAGJ_TypeDefinitionIndex = 41895;

	class BNKCDIFBAGJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_CTOR_OFFSET))(this);
		}

		static ::System::Boolean JKHAFHDJADI(::KJALACAGLNJ* a1, ::PIIOAKOEACN* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::KJALACAGLNJ*, ::PIIOAKOEACN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_JKHAFHDJADI_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean JKHAFHDJADI_1(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType> a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_JKHAFHDJADI_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PLGCBKJCKIK(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_PLGCBKJCKIK_OFFSET))(a1, a2);
		}

		static ::System::Boolean FNNLPDHBOCL(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType> a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FNNLPDHBOCL_OFFSET))(a1, a2);
		}

		static ::System::Boolean FKDLBIEDFII(::KJALACAGLNJ* a1, ::PIIOAKOEACN* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::KJALACAGLNJ*, ::PIIOAKOEACN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FKDLBIEDFII_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FKDLBIEDFII_1(::PIIOAKOEACN* a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::PIIOAKOEACN*, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FKDLBIEDFII_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PAGGIBBGBLM(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType> a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_PAGGIBBGBLM_OFFSET))(a1, a2, a3);
		}

	};
