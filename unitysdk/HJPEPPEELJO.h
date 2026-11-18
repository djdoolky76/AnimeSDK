#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKGKJBPDMCK.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define HJPEPPEELJO_AFGCDOEMDDA_OFFSET UNITYSDK_OFFSET(0x14D32400)
#define HJPEPPEELJO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14D32560)
#define HJPEPPEELJO_GGGHPABPGEH_OFFSET UNITYSDK_OFFSET(0x14D32550)
#define HJPEPPEELJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D32480)
#define HJPEPPEELJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14D32340)

inline static constexpr unsigned int HJPEPPEELJO_TypeDefinitionIndex = 43989;

class HJPEPPEELJO
{
public:
	static ::HJPEPPEELJO** StaticGet_CGICCOBHACH()
	{
		return (::HJPEPPEELJO**)Il2CppClass::FromTypeDefinitionIndex(HJPEPPEELJO_TypeDefinitionIndex)->GetStaticField(0x49D90);
	}
	::System::Func_2<::HJPEPPEELJO*, ::System::Boolean>* JDBAFGLHNGN; // 0x18

	::System::Void _ctor(::KKGKJBPDMCK& OJBJPFBIMPJ, ::KKGKJBPDMCK& FDDFDLEINFM, ::System::Func_2<::HJPEPPEELJO*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::KKGKJBPDMCK&, ::KKGKJBPDMCK&, ::System::Func_2<::HJPEPPEELJO*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HJPEPPEELJO__CTOR_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM, KANJODNFFOI);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJPEPPEELJO__CCTOR_OFFSET))();
	}

	::System::Boolean AFGCDOEMDDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPEPPEELJO_AFGCDOEMDDA_OFFSET))(this);
	}

	::System::Boolean GGGHPABPGEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPEPPEELJO_GGGHPABPGEH_OFFSET))(this);
	}

	static ::HJPEPPEELJO* COKNIICCODC(::KKGKJBPDMCK& OJBJPFBIMPJ, ::KKGKJBPDMCK& FDDFDLEINFM, ::System::Func_2<::HJPEPPEELJO*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::HJPEPPEELJO*(*)(::KKGKJBPDMCK&, ::KKGKJBPDMCK&, ::System::Func_2<::HJPEPPEELJO*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HJPEPPEELJO_COKNIICCODC_OFFSET))(OJBJPFBIMPJ, FDDFDLEINFM, KANJODNFFOI);
	}
};
