#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/OOFGNEDEFCF.h"
class BABBBKKDBIN;
class DNDEALPLBBA;

#define ACOLIBAMGLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB790ED0)
#define ACOLIBAMGLK_EDDAMEMHBGK_OFFSET UNITYSDK_OFFSET(0xB790EE0)
#define ACOLIBAMGLK_IFAKJPJHEAC_OFFSET UNITYSDK_OFFSET(0xB791650)

inline static constexpr unsigned int ACOLIBAMGLK_TypeDefinitionIndex = 77085;

	class ACOLIBAMGLK : public ::System::Object
	{
	public:
		::DNDEALPLBBA* GLACIJCAAJG; // 0x10
		::System::Void _ctor(::DNDEALPLBBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNDEALPLBBA*))((::PBYTE)hIl2Cpp + ACOLIBAMGLK_CTOR_OFFSET))(this, a1);
		}

		::OCKCNOOHILK EDDAMEMHBGK(::BABBBKKDBIN* a1)
		{
			return ((::OCKCNOOHILK(*)(::PVOID, ::BABBBKKDBIN*))((::PBYTE)hIl2Cpp + ACOLIBAMGLK_EDDAMEMHBGK_OFFSET))(this, a1);
		}

		::System::Boolean IFAKJPJHEAC(::BABBBKKDBIN* a1, ::OOFGNEDEFCF a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BABBBKKDBIN*, ::OOFGNEDEFCF))((::PBYTE)hIl2Cpp + ACOLIBAMGLK_IFAKJPJHEAC_OFFSET))(this, a1, a2);
		}

	};
