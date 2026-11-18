#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJDAEKDOFPK.h"
#include "unitysdk/System/Object.h"

class HJLFJCEIMFN;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMCAJFJEOOJ_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x1E4C0540)
#define AMCAJFJEOOJ_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1E4C07A0)
#define AMCAJFJEOOJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4C0690)
#define AMCAJFJEOOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C04A0)

inline static constexpr unsigned int AMCAJFJEOOJ_TypeDefinitionIndex = 93592;

class AMCAJFJEOOJ : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::CJDAEKDOFPK, ::System::Func_1<::HJLFJCEIMFN*>*>** StaticGet_OLFLEDPGOOA()
	{
		return (::System::Collections::Generic::Dictionary_2<::CJDAEKDOFPK, ::System::Func_1<::HJLFJCEIMFN*>*>**)Il2CppClass::FromTypeDefinitionIndex(AMCAJFJEOOJ_TypeDefinitionIndex)->GetStaticField(0x52740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMCAJFJEOOJ__CCTOR_OFFSET))();
	}

	static ::HJLFJCEIMFN* COKNIICCODC_1(::CJDAEKDOFPK KAMJLKGLFDB)
	{
		return ((::HJLFJCEIMFN*(*)(::CJDAEKDOFPK))((::PBYTE)hIl2Cpp + AMCAJFJEOOJ_COKNIICCODC_1_OFFSET))(KAMJLKGLFDB);
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMCAJFJEOOJ_PHOADBJGFBE_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::CJDAEKDOFPK KAMJLKGLFDB, ::System::Func_1<::HJLFJCEIMFN*>* IKILJKBJDEL)
	{
		return ((::System::Void(*)(::CJDAEKDOFPK, ::System::Func_1<::HJLFJCEIMFN*>*))((::PBYTE)hIl2Cpp + AMCAJFJEOOJ_KKFNPONHGEM_OFFSET))(KAMJLKGLFDB, IKILJKBJDEL);
	}
};
