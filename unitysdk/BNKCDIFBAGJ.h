#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class KJALACAGLNJ;
class PIIOAKOEACN;
class PJPPGJEDCOG;
namespace System { class Nullable; }

#define BNKCDIFBAGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C546930)
#define BNKCDIFBAGJ_FKDLBIEDFII_1_OFFSET UNITYSDK_OFFSET(0x1C5463D0)
#define BNKCDIFBAGJ_FKDLBIEDFII_OFFSET UNITYSDK_OFFSET(0x1C5462E0)
#define BNKCDIFBAGJ_FNNLPDHBOCL_OFFSET UNITYSDK_OFFSET(0x1C546050)
#define BNKCDIFBAGJ_JKHAFHDJADI_1_OFFSET UNITYSDK_OFFSET(0x1C545B70)
#define BNKCDIFBAGJ_JKHAFHDJADI_OFFSET UNITYSDK_OFFSET(0x1C545B20)
#define BNKCDIFBAGJ_PAGGIBBGBLM_OFFSET UNITYSDK_OFFSET(0x1C546700)
#define BNKCDIFBAGJ_PLGCBKJCKIK_OFFSET UNITYSDK_OFFSET(0x1C545D90)

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

		static ::System::Boolean JKHAFHDJADI_1(::System::Nullable* a1, ::System::Nullable* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::System::Nullable*, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_JKHAFHDJADI_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PLGCBKJCKIK(::System::Nullable* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_PLGCBKJCKIK_OFFSET))(a1, a2);
		}

		static ::System::Boolean FNNLPDHBOCL(::System::Nullable* a1, ::PJPPGJEDCOG* a2)
		{
			return ((::System::Boolean(*)(::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FNNLPDHBOCL_OFFSET))(a1, a2);
		}

		static ::System::Boolean FKDLBIEDFII(::KJALACAGLNJ* a1, ::PIIOAKOEACN* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::KJALACAGLNJ*, ::PIIOAKOEACN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FKDLBIEDFII_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FKDLBIEDFII_1(::PIIOAKOEACN* a1, ::System::Nullable* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::PIIOAKOEACN*, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_FKDLBIEDFII_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PAGGIBBGBLM(::System::Nullable* a1, ::System::Nullable* a2, ::PJPPGJEDCOG* a3)
		{
			return ((::System::Boolean(*)(::System::Nullable*, ::System::Nullable*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + BNKCDIFBAGJ_PAGGIBBGBLM_OFFSET))(a1, a2, a3);
		}

	};
