#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EHIKCGJDEAF;
class FCBBBFJPPMC;
class POFIMLGOIGD;
class POIIFHGGGLB;
namespace MoleMole { class UIAbyssMapIconBaseController; }
namespace MoleMole { class UIAbyssMapLayerWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JIJIOFBMFAJ_BEILNALKECI_OFFSET UNITYSDK_OFFSET(0x1557E5B0)
#define JIJIOFBMFAJ_ENKPKHJDBNG_OFFSET UNITYSDK_OFFSET(0x1557DFB0)
#define JIJIOFBMFAJ_FKEKIANABAN_OFFSET UNITYSDK_OFFSET(0x1557D960)
#define JIJIOFBMFAJ_GAPMDHNBAHC_OFFSET UNITYSDK_OFFSET(0x1557E360)
#define JIJIOFBMFAJ_HOIPGPKGAFI_OFFSET UNITYSDK_OFFSET(0x1557D450)
#define JIJIOFBMFAJ_IHGGJMPLHNC_OFFSET UNITYSDK_OFFSET(0x1557E4D0)
#define JIJIOFBMFAJ_MAKJJCKOIMJ_OFFSET UNITYSDK_OFFSET(0x1557D860)
#define JIJIOFBMFAJ_MBMKBMAPNDB_OFFSET UNITYSDK_OFFSET(0x1557EEE0)
#define JIJIOFBMFAJ_OBIBLIAEGJM_OFFSET UNITYSDK_OFFSET(0x1557EA50)
#define JIJIOFBMFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1557D3C0)

inline static constexpr unsigned int JIJIOFBMFAJ_TypeDefinitionIndex = 58453;

class JIJIOFBMFAJ : public ::System::Object
{
public:
	::MoleMole::UIAbyssMapLayerWidgetController* MNLBPBMEOEO; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::POIIFHGGGLB*>* MKIAHDAGDCI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ__CTOR_OFFSET))(this);
	}

	::System::Void HOIPGPKGAFI(::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*> AKLBNCEENKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_HOIPGPKGAFI_OFFSET))(this, AKLBNCEENKP);
	}

	::System::Void GAPMDHNBAHC(::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>>* CJGAFOBNPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>>*))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_GAPMDHNBAHC_OFFSET))(this, CJGAFOBNPOM);
	}

	::System::Void IHGGJMPLHNC(::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*> HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::EHIKCGJDEAF*>))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_IHGGJMPLHNC_OFFSET))(this, HHIJHDFHPOI);
	}

	::UnityEngine::GameObject* ENKPKHJDBNG()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_ENKPKHJDBNG_OFFSET))(this);
	}

	::System::Void OBIBLIAEGJM(::EHIKCGJDEAF* HHIJHDFHPOI, ::MoleMole::UIAbyssMapIconBaseController* DEICEINIGCC)
	{
		return ((::System::Void(*)(::PVOID, ::EHIKCGJDEAF*, ::MoleMole::UIAbyssMapIconBaseController*))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_OBIBLIAEGJM_OFFSET))(this, HHIJHDFHPOI, DEICEINIGCC);
	}

	::System::Void FKEKIANABAN(::FCBBBFJPPMC* HHIJHDFHPOI, ::MoleMole::UIAbyssMapIconBaseController* DEICEINIGCC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBBBFJPPMC*, ::MoleMole::UIAbyssMapIconBaseController*))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_FKEKIANABAN_OFFSET))(this, HHIJHDFHPOI, DEICEINIGCC);
	}

	::POFIMLGOIGD* MAKJJCKOIMJ()
	{
		return ((::POFIMLGOIGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_MAKJJCKOIMJ_OFFSET))(this);
	}

	::System::Void MBMKBMAPNDB(::MoleMole::UIBaseController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_MBMKBMAPNDB_OFFSET))(this, JNLBPMKIFNK, IAPKABMDJNF, HBJOLKHGGDD);
	}

	::System::Void BEILNALKECI(::EHIKCGJDEAF* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::EHIKCGJDEAF*))((::PBYTE)hIl2Cpp + JIJIOFBMFAJ_BEILNALKECI_OFFSET))(this, HHIJHDFHPOI);
	}
};
