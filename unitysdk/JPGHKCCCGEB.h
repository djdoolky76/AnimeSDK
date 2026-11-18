#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGIIMNHGEPG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
template <typename T> class KCMIFNGABDC_1;

#define JPGHKCCCGEB_EGGKNFKKKJP_OFFSET UNITYSDK_OFFSET(0x17632760)
#define JPGHKCCCGEB_LAEDIDJILMM_OFFSET UNITYSDK_OFFSET(0x176326D0)

inline static constexpr unsigned int JPGHKCCCGEB_TypeDefinitionIndex = 75145;

class JPGHKCCCGEB : public ::System::Object
{
public:
	static ::System::Boolean LAEDIDJILMM(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC, ::IGIIMNHGEPG FAMMCEJDLFE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::IGIIMNHGEPG))((::PBYTE)hIl2Cpp + JPGHKCCCGEB_LAEDIDJILMM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, FAMMCEJDLFE);
	}

	static ::DMHOLJNNCJA_PJJIMDAOJCJ* EGGKNFKKKJP(::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* NJDIPGKGHBF, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::DMHOLJNNCJA_PJJIMDAOJCJ*(*)(::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JPGHKCCCGEB_EGGKNFKKKJP_OFFSET))(NJDIPGKGHBF, BKBGPKNGNMF);
	}
};
