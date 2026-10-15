#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define LJFIAJJLNED_BFLBPHOGOGA_OFFSET UNITYSDK_OFFSET(0xB70F650)
#define LJFIAJJLNED_CTOR_OFFSET UNITYSDK_OFFSET(0xB70F2D0)
#define LJFIAJJLNED_ECEFLBPMFKJ_OFFSET UNITYSDK_OFFSET(0xB710880)
#define LJFIAJJLNED_EGFAMICNEMH_OFFSET UNITYSDK_OFFSET(0xB70FFE0)
#define LJFIAJJLNED_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB70F830)
#define LJFIAJJLNED_HHHNKDCHEOL_OFFSET UNITYSDK_OFFSET(0xB710980)
#define LJFIAJJLNED_IBADKAFIMJD_OFFSET UNITYSDK_OFFSET(0xB710440)
#define LJFIAJJLNED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB70F440)
#define LJFIAJJLNED_KGGLKKILKDE_OFFSET UNITYSDK_OFFSET(0xB70F880)
#define LJFIAJJLNED_KKFIOBLGDHA_OFFSET UNITYSDK_OFFSET(0xB7103F0)
#define LJFIAJJLNED_PBNCIOHIMLE_OFFSET UNITYSDK_OFFSET(0xB70FBF0)
#define LJFIAJJLNED_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB70FEA0)

inline static constexpr unsigned int LJFIAJJLNED_TypeDefinitionIndex = 77130;

	class LJFIAJJLNED : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::ICollector_1<::HIOEAKHGILF*>* GIHINFDAOIM; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PPKNDCBLMJA; // 0x28
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
