#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;

#define AADICOHAPNO_AIDMLNDEGPD_OFFSET UNITYSDK_OFFSET(0xB723750)
#define AADICOHAPNO_CKJOBFCJLOK_OFFSET UNITYSDK_OFFSET(0xB722960)
#define AADICOHAPNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB722950)
#define AADICOHAPNO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB723930)
#define AADICOHAPNO_HCAONMLLGFM_OFFSET UNITYSDK_OFFSET(0xB7236B0)
#define AADICOHAPNO_HNJAMNKIBPP_OFFSET UNITYSDK_OFFSET(0xB723410)
#define AADICOHAPNO_JOIAEMHICFF_OFFSET UNITYSDK_OFFSET(0xB722AC0)
#define AADICOHAPNO_MBNDFIAHBDJ_OFFSET UNITYSDK_OFFSET(0xB723890)
#define AADICOHAPNO_PMLOJEGPONA_OFFSET UNITYSDK_OFFSET(0xB722C20)
#define AADICOHAPNO_PNKHNIJIJME_OFFSET UNITYSDK_OFFSET(0xB7237F0)

inline static constexpr unsigned int AADICOHAPNO_TypeDefinitionIndex = 79876;

	class AADICOHAPNO : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + AADICOHAPNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean CKJOBFCJLOK(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::IngredientKind a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + AADICOHAPNO_CKJOBFCJLOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JOIAEMHICFF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_JOIAEMHICFF_OFFSET))(this);
		}

		::System::Boolean PMLOJEGPONA(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AADICOHAPNO_PMLOJEGPONA_OFFSET))(this, a1);
		}

		::System::Boolean HNJAMNKIBPP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AADICOHAPNO_HNJAMNKIBPP_OFFSET))(this, a1);
		}

		::System::Void HCAONMLLGFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_HCAONMLLGFM_OFFSET))(this);
		}

		::System::Void AIDMLNDEGPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_AIDMLNDEGPD_OFFSET))(this);
		}

		::System::Void PNKHNIJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_PNKHNIJIJME_OFFSET))(this);
		}

		::System::Void MBNDFIAHBDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_MBNDFIAHBDJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADICOHAPNO_DISPOSE_OFFSET))(this);
		}

	};
