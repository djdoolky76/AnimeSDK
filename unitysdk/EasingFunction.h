#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/System/Object.h"
class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define EASINGFUNCTION_EASEINBACKD_OFFSET UNITYSDK_OFFSET(0x1A681240)
#define EASINGFUNCTION_EASEINBACK_1_OFFSET UNITYSDK_OFFSET(0x1A680620)
#define EASINGFUNCTION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0x1A6805F0)
#define EASINGFUNCTION_EASEINBOUNCED_OFFSET UNITYSDK_OFFSET(0x1A680FD0)
#define EASINGFUNCTION_EASEINBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x1A6800B0)
#define EASINGFUNCTION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0x1A67FF20)
#define EASINGFUNCTION_EASEINCIRCD_OFFSET UNITYSDK_OFFSET(0x1A680E50)
#define EASINGFUNCTION_EASEINCIRC_1_OFFSET UNITYSDK_OFFSET(0x1A67FD20)
#define EASINGFUNCTION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x1A67FCC0)
#define EASINGFUNCTION_EASEINCUBICD_OFFSET UNITYSDK_OFFSET(0x1A680AC0)
#define EASINGFUNCTION_EASEINCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1A67F5B0)
#define EASINGFUNCTION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x1A67F590)
#define EASINGFUNCTION_EASEINELASTICD_OFFSET UNITYSDK_OFFSET(0x1A681340)
#define EASINGFUNCTION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x1A6807A0)
#define EASINGFUNCTION_EASEINEXPOD_OFFSET UNITYSDK_OFFSET(0x1A680D50)
#define EASINGFUNCTION_EASEINEXPO_1_OFFSET UNITYSDK_OFFSET(0x1A67FB30)
#define EASINGFUNCTION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x1A67FAE0)
#define EASINGFUNCTION_EASEINOUTBACKD_OFFSET UNITYSDK_OFFSET(0x1A6812B0)
#define EASINGFUNCTION_EASEINOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x1A680730)
#define EASINGFUNCTION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0x1A6806B0)
#define EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x1A6810F0)
#define EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x1A680400)
#define EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x1A680230)
#define EASINGFUNCTION_EASEINOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x1A680F30)
#define EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x1A67FEA0)
#define EASINGFUNCTION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x1A67FDF0)
#define EASINGFUNCTION_EASEINOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x1A680B00)
#define EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1A67F670)
#define EASINGFUNCTION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1A67F610)
#define EASINGFUNCTION_EASEINOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x1A681530)
#define EASINGFUNCTION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x1A680900)
#define EASINGFUNCTION_EASEINOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x1A680DE0)
#define EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x1A67FC60)
#define EASINGFUNCTION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x1A67FBD0)
#define EASINGFUNCTION_EASEINOUTQUADD_OFFSET UNITYSDK_OFFSET(0x1A680A80)
#define EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x1A67F530)
#define EASINGFUNCTION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x1A67F4C0)
#define EASINGFUNCTION_EASEINOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x1A680B90)
#define EASINGFUNCTION_EASEINOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x1A67F7C0)
#define EASINGFUNCTION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x1A67F750)
#define EASINGFUNCTION_EASEINOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x1A680C20)
#define EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x1A67F930)
#define EASINGFUNCTION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x1A67F8C0)
#define EASINGFUNCTION_EASEINOUTSINED_OFFSET UNITYSDK_OFFSET(0x1A680D00)
#define EASINGFUNCTION_EASEINOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x1A67FAB0)
#define EASINGFUNCTION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x1A67FA60)
#define EASINGFUNCTION_EASEINQUADD_OFFSET UNITYSDK_OFFSET(0x1A680A40)
#define EASINGFUNCTION_EASEINQUAD_1_OFFSET UNITYSDK_OFFSET(0x1A67F470)
#define EASINGFUNCTION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x1A67F450)
#define EASINGFUNCTION_EASEINQUARTD_OFFSET UNITYSDK_OFFSET(0x1A680B40)
#define EASINGFUNCTION_EASEINQUART_1_OFFSET UNITYSDK_OFFSET(0x1A67F6E0)
#define EASINGFUNCTION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x1A67F6C0)
#define EASINGFUNCTION_EASEINQUINTD_OFFSET UNITYSDK_OFFSET(0x1A680BD0)
#define EASINGFUNCTION_EASEINQUINT_1_OFFSET UNITYSDK_OFFSET(0x1A67F840)
#define EASINGFUNCTION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x1A67F820)
#define EASINGFUNCTION_EASEINSINED_OFFSET UNITYSDK_OFFSET(0x1A680C70)
#define EASINGFUNCTION_EASEINSINE_1_OFFSET UNITYSDK_OFFSET(0x1A67F9E0)
#define EASINGFUNCTION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x1A67F990)
#define EASINGFUNCTION_EASEOUTBACKD_OFFSET UNITYSDK_OFFSET(0x1A681270)
#define EASINGFUNCTION_EASEOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x1A680680)
#define EASINGFUNCTION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0x1A680640)
#define EASINGFUNCTION_EASEOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x1A681060)
#define EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x1A680180)
#define EASINGFUNCTION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x1A67FFF0)
#define EASINGFUNCTION_EASEOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x1A680EC0)
#define EASINGFUNCTION_EASEOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x1A67FDC0)
#define EASINGFUNCTION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x1A67FD60)
#define EASINGFUNCTION_EASEOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x1A680AE0)
#define EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1A67F5F0)
#define EASINGFUNCTION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1A67F5C0)
#define EASINGFUNCTION_EASEOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x1A681440)
#define EASINGFUNCTION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x1A680850)
#define EASINGFUNCTION_EASEOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x1A680DA0)
#define EASINGFUNCTION_EASEOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x1A67FBA0)
#define EASINGFUNCTION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x1A67FB50)
#define EASINGFUNCTION_EASEOUTQUADD_OFFSET UNITYSDK_OFFSET(0x1A680A50)
#define EASINGFUNCTION_EASEOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x1A67F4A0)
#define EASINGFUNCTION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x1A67F480)
#define EASINGFUNCTION_EASEOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x1A680B60)
#define EASINGFUNCTION_EASEOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x1A67F720)
#define EASINGFUNCTION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x1A67F6F0)
#define EASINGFUNCTION_EASEOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x1A680BF0)
#define EASINGFUNCTION_EASEOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x1A67F890)
#define EASINGFUNCTION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x1A67F860)
#define EASINGFUNCTION_EASEOUTSINED_OFFSET UNITYSDK_OFFSET(0x1A680CC0)
#define EASINGFUNCTION_EASEOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x1A67FA50)
#define EASINGFUNCTION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x1A67FA10)
#define EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1A682460)
#define EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A681F00)
#define EASINGFUNCTION_GETEASINGFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A6818F0)
#define EASINGFUNCTION_LINEARD_OFFSET UNITYSDK_OFFSET(0x1A680A30)
#define EASINGFUNCTION_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x1A67F290)
#define EASINGFUNCTION_LINEAR_OFFSET UNITYSDK_OFFSET(0x1A67F260)
#define EASINGFUNCTION_SPRINGD_OFFSET UNITYSDK_OFFSET(0x1A6816F0)
#define EASINGFUNCTION_SPRING_1_OFFSET UNITYSDK_OFFSET(0x1A67F390)
#define EASINGFUNCTION_SPRING_OFFSET UNITYSDK_OFFSET(0x1A67F2A0)

inline static constexpr unsigned int EasingFunction_TypeDefinitionIndex = 46958;

	class EasingFunction : public ::System::Object
	{
	public:
		// static const ::System::Object NATURAL_LOG_OF_2; // 0x0
		static ::System::Single Linear(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Linear_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_1_OFFSET))(a1);
		}

		static ::System::Single Spring(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Spring_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_1_OFFSET))(a1);
		}

		static ::System::Single EaseInQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuad_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuad_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutQuad(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuad_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET))(a1);
		}

		static ::System::Single EaseInCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInCubic_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutCubic_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutCubic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutCubic_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET))(a1);
		}

		static ::System::Single EaseInQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuart_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuart_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutQuart(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuart_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_1_OFFSET))(a1);
		}

		static ::System::Single EaseInQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuint_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuint_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutQuint(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuint_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET))(a1);
		}

		static ::System::Single EaseInSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInSine_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutSine_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutSine(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutSine_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_1_OFFSET))(a1);
		}

		static ::System::Single EaseInExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInExpo_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutExpo_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutExpo(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutExpo_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET))(a1);
		}

		static ::System::Single EaseInCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInCirc_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutCirc_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutCirc(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutCirc_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET))(a1);
		}

		static ::System::Single EaseInBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInBounce_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutBounce_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutBounce(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutBounce_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET))(a1);
		}

		static ::System::Single EaseInBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInBack_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_1_OFFSET))(a1);
		}

		static ::System::Single EaseOutBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutBack_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_1_OFFSET))(a1);
		}

		static ::System::Single EaseInOutBack(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutBack_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_1_OFFSET))(a1);
		}

		static ::System::Single EaseInElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutElastic(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LinearD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEARD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUADD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUADD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuadD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUADD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutCubicD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUARTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUARTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuartD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUARTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutQuintD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINTD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutSineD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutExpoD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRCD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRCD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutCircD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRCD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutBounceD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACKD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACKD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutBackD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACKD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseOutElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EaseInOutElasticD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTICD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single SpringD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRINGD_OFFSET))(a1, a2, a3);
		}

		static ::EasingFunction_Function* GetEasingFunction(::EasingFunction_Ease a1)
		{
			return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTION_OFFSET))(a1);
		}

		static ::EasingFunction_FunctionValue* GetEasingFunctionValue(::EasingFunction_Ease a1)
		{
			return ((::EasingFunction_FunctionValue*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET))(a1);
		}

		static ::EasingFunction_Function* GetEasingFunctionDerivative(::EasingFunction_Ease a1)
		{
			return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET))(a1);
		}

	};
