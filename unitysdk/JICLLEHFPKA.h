#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/ValueTuple_2.h"
class GIDHOABFFFP;
class GJABEBPIGDN;
class KGHMBCLFFLG;
class LHCAJBPIHMC;
class NPCCFNJPBNL;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JICLLEHFPKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1ED240)
#define JICLLEHFPKA_LAABNIGOJKJ_OFFSET UNITYSDK_OFFSET(0xB1ECF30)
#define JICLLEHFPKA_ODFIFAAGBCO_OFFSET UNITYSDK_OFFSET(0xB1ECFA0)
#define JICLLEHFPKA_PFNDDBOENHC_OFFSET UNITYSDK_OFFSET(0xB1ED030)
#define JICLLEHFPKA_PKADDEPKJFN_1_OFFSET UNITYSDK_OFFSET(0xB1ED0A0)
#define JICLLEHFPKA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB1ECC10)

inline static constexpr unsigned int JICLLEHFPKA_TypeDefinitionIndex = 62702;

	class JICLLEHFPKA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA_CTOR_OFFSET))(this);
		}

		::GIDHOABFFFP* PKADDEPKJFN(::GIDHOABFFFP* a1, ::NPCCFNJPBNL* a2)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::NPCCFNJPBNL*))((::PBYTE)hIl2Cpp + JICLLEHFPKA_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* PKADDEPKJFN_1(::GIDHOABFFFP* a1, ::LHCAJBPIHMC* a2)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::LHCAJBPIHMC*))((::PBYTE)hIl2Cpp + JICLLEHFPKA_PKADDEPKJFN_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* LAABNIGOJKJ(::NPCCFNJPBNL* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::NPCCFNJPBNL*))((::PBYTE)hIl2Cpp + JICLLEHFPKA_LAABNIGOJKJ_OFFSET))(a1);
		}

		static ::GJABEBPIGDN* ODFIFAAGBCO(::NPCCFNJPBNL* a1)
		{
			return ((::GJABEBPIGDN*(*)(::NPCCFNJPBNL*))((::PBYTE)hIl2Cpp + JICLLEHFPKA_ODFIFAAGBCO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>* PFNDDBOENHC(::NPCCFNJPBNL* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KFBOFAILIBG>*(*)(::NPCCFNJPBNL*))((::PBYTE)hIl2Cpp + JICLLEHFPKA_PFNDDBOENHC_OFFSET))(a1);
		}

	};
