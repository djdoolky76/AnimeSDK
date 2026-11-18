#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHBCCGMCFC.h"

class GGBFMMDGBLG;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGELMPKOIHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDED180)
#define CGELMPKOIHC_DKDJDEJHABH_1_OFFSET UNITYSDK_OFFSET(0x1EDEDC20)
#define CGELMPKOIHC_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x1EDEDB30)
#define CGELMPKOIHC_FLHNGDLANDC_1_OFFSET UNITYSDK_OFFSET(0x1EDEB0D0)
#define CGELMPKOIHC_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1EDEDA10)
#define CGELMPKOIHC_HENEEJEMIBD_OFFSET UNITYSDK_OFFSET(0x1EDED620)
#define CGELMPKOIHC_KKFNPONHGEM_1_OFFSET UNITYSDK_OFFSET(0x1EDED460)
#define CGELMPKOIHC_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1EDEC070)
#define CGELMPKOIHC_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1EDED220)
#define CGELMPKOIHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDED260)

inline static constexpr unsigned int CGELMPKOIHC_TypeDefinitionIndex = 18751;

class CGELMPKOIHC
{
public:
	static ::System::Boolean* StaticGet_AAOCODHCLJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CGELMPKOIHC_TypeDefinitionIndex)->GetStaticField(0x44E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGBFMMDGBLG*>* NNKIDGCEACP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGELMPKOIHC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGELMPKOIHC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGELMPKOIHC_ONCREATE_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::AKHBCCGMCFC DCCDGIDJFKB, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::AKHBCCGMCFC, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_KKFNPONHGEM_OFFSET))(this, DCCDGIDJFKB, PHHDHIBOCKA);
	}

	::System::Void KKFNPONHGEM_1(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_KKFNPONHGEM_1_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Boolean HENEEJEMIBD(::System::Int32 GEPABHJBIAH, ::GGBFMMDGBLG*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGBFMMDGBLG*&))((::PBYTE)hIl2Cpp + CGELMPKOIHC_HENEEJEMIBD_OFFSET))(this, GEPABHJBIAH, DJLOKMMLFJC);
	}

	::System::Void FLHNGDLANDC(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_FLHNGDLANDC_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void DKDJDEJHABH(::AKHBCCGMCFC DCCDGIDJFKB, ::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::AKHBCCGMCFC, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_DKDJDEJHABH_OFFSET))(this, DCCDGIDJFKB, KOIBHLHLMFC);
	}

	::System::Void FLHNGDLANDC_1(::AKHBCCGMCFC DCCDGIDJFKB, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::AKHBCCGMCFC, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_FLHNGDLANDC_1_OFFSET))(this, DCCDGIDJFKB, PHHDHIBOCKA);
	}

	::System::Void DKDJDEJHABH_1(::System::Int32 GEPABHJBIAH, ::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CGELMPKOIHC_DKDJDEJHABH_1_OFFSET))(this, GEPABHJBIAH, KOIBHLHLMFC);
	}
};
