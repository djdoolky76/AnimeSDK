#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }

#define LJFIAJJLNED_BFLBPHOGOGA_OFFSET UNITYSDK_OFFSET(0xB7163D0)
#define LJFIAJJLNED_CTOR_OFFSET UNITYSDK_OFFSET(0xB716050)
#define LJFIAJJLNED_ECEFLBPMFKJ_OFFSET UNITYSDK_OFFSET(0xB717610)
#define LJFIAJJLNED_EGFAMICNEMH_OFFSET UNITYSDK_OFFSET(0xB716D60)
#define LJFIAJJLNED_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7165B0)
#define LJFIAJJLNED_HHHNKDCHEOL_OFFSET UNITYSDK_OFFSET(0xB717710)
#define LJFIAJJLNED_IBADKAFIMJD_OFFSET UNITYSDK_OFFSET(0xB7171D0)
#define LJFIAJJLNED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB7161C0)
#define LJFIAJJLNED_KGGLKKILKDE_OFFSET UNITYSDK_OFFSET(0xB716600)
#define LJFIAJJLNED_KKFIOBLGDHA_OFFSET UNITYSDK_OFFSET(0xB717180)
#define LJFIAJJLNED_PBNCIOHIMLE_OFFSET UNITYSDK_OFFSET(0xB716970)
#define LJFIAJJLNED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB716C20)

inline static constexpr unsigned int LJFIAJJLNED_TypeDefinitionIndex = 77131;

	class LJFIAJJLNED : public ::System::Object
	{
	public:
		::Entitas::ICollector* GIHINFDAOIM; // 0x10
		::Entitas::IGroup* PPKNDCBLMJA; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_TEARDOWN_OFFSET))(this);
		}

		::System::Void BFLBPHOGOGA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_BFLBPHOGOGA_OFFSET))(this, a1);
		}

		::System::Void KGGLKKILKDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_KGGLKKILKDE_OFFSET))(this);
		}

		::System::Void PBNCIOHIMLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_PBNCIOHIMLE_OFFSET))(this);
		}

		::System::Void EGFAMICNEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFIAJJLNED_EGFAMICNEMH_OFFSET))(this);
		}

		::System::Void IBADKAFIMJD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_IBADKAFIMJD_OFFSET))(this, a1);
		}

		::System::Void KKFIOBLGDHA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_KKFIOBLGDHA_OFFSET))(this, a1);
		}

		::System::Void ECEFLBPMFKJ(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_ECEFLBPMFKJ_OFFSET))(this, a1, a2);
		}

		::System::Void HHHNKDCHEOL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LJFIAJJLNED_HHHNKDCHEOL_OFFSET))(this, a1, a2);
		}

	};
