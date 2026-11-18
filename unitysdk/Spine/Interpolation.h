#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Interpolation_BounceInInterpolation; }
namespace Spine { class Interpolation_BounceInterpolation; }
namespace Spine { class Interpolation_BounceOutInterpolation; }
namespace Spine { class Interpolation_ElasticInInterpolation; }
namespace Spine { class Interpolation_ElasticInterpolation; }
namespace Spine { class Interpolation_ElasticOutInterpolation; }
namespace Spine { class Interpolation_ExpInInterpolation; }
namespace Spine { class Interpolation_ExpInterpolation; }
namespace Spine { class Interpolation_ExpOutInterpolation; }
namespace Spine { class Interpolation_PowInInterpolation; }
namespace Spine { class Interpolation_PowInterpolation; }
namespace Spine { class Interpolation_PowOutInterpolation; }
namespace Spine { class Interpolation_SwingInInterpolation; }
namespace Spine { class Interpolation_SwingInterpolation; }
namespace Spine { class Interpolation_SwingOutInterpolation; }

#define SPINE_INTERPOLATION_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1F55E860)
#define SPINE_INTERPOLATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F55E8B0)
#define SPINE_INTERPOLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F55E8A0)

namespace Spine
{
	inline static constexpr unsigned int Interpolation_TypeDefinitionIndex = 33001;

	class Interpolation : public ::System::Object
	{
	public:
		static ::Spine::Interpolation_PowOutInterpolation** StaticGet_Pow2Out()
		{
			return (::Spine::Interpolation_PowOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A50);
		}
		static ::Spine::Interpolation** StaticGet_Pow2InInverse()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A58);
		}
		static ::Spine::Interpolation_PowInterpolation** StaticGet_Pow3()
		{
			return (::Spine::Interpolation_PowInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A60);
		}
		static ::Spine::Interpolation** StaticGet_CircleOut()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A68);
		}
		static ::Spine::Interpolation_PowInInterpolation** StaticGet_Pow3In()
		{
			return (::Spine::Interpolation_PowInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A70);
		}
		static ::Spine::Interpolation_BounceInterpolation** StaticGet_Bounce()
		{
			return (::Spine::Interpolation_BounceInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A78);
		}
		static ::Spine::Interpolation** StaticGet_CircleIn()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A80);
		}
		static ::Spine::Interpolation_PowOutInterpolation** StaticGet_FastSlow()
		{
			return (::Spine::Interpolation_PowOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A88);
		}
		static ::Spine::Interpolation_PowInInterpolation** StaticGet_SlowFast()
		{
			return (::Spine::Interpolation_PowInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A90);
		}
		static ::Spine::Interpolation_PowInterpolation** StaticGet_Pow2()
		{
			return (::Spine::Interpolation_PowInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29A98);
		}
		static ::Spine::Interpolation_ExpInterpolation** StaticGet_Exp5()
		{
			return (::Spine::Interpolation_ExpInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AA0);
		}
		static ::Spine::Interpolation_BounceInInterpolation** StaticGet_BounceIn()
		{
			return (::Spine::Interpolation_BounceInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AA8);
		}
		static ::Spine::Interpolation_ExpInterpolation** StaticGet_Exp10()
		{
			return (::Spine::Interpolation_ExpInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AB0);
		}
		static ::Spine::Interpolation_BounceOutInterpolation** StaticGet_BounceOut()
		{
			return (::Spine::Interpolation_BounceOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AB8);
		}
		static ::Spine::Interpolation_SwingInterpolation** StaticGet_Swing()
		{
			return (::Spine::Interpolation_SwingInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AC0);
		}
		static ::Spine::Interpolation_ElasticInInterpolation** StaticGet_ElasticIn()
		{
			return (::Spine::Interpolation_ElasticInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AC8);
		}
		static ::Spine::Interpolation_SwingInInterpolation** StaticGet_SwingIn()
		{
			return (::Spine::Interpolation_SwingInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AD0);
		}
		static ::Spine::Interpolation** StaticGet_Smooth2()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AD8);
		}
		static ::Spine::Interpolation_ExpOutInterpolation** StaticGet_Exp10Out()
		{
			return (::Spine::Interpolation_ExpOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AE0);
		}
		static ::Spine::Interpolation_SwingOutInterpolation** StaticGet_SwingOut()
		{
			return (::Spine::Interpolation_SwingOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AE8);
		}
		static ::Spine::Interpolation_PowOutInterpolation** StaticGet_Pow4Out()
		{
			return (::Spine::Interpolation_PowOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AF0);
		}
		static ::Spine::Interpolation_PowInInterpolation** StaticGet_Pow2In()
		{
			return (::Spine::Interpolation_PowInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29AF8);
		}
		static ::Spine::Interpolation_ElasticInterpolation** StaticGet_Elastic()
		{
			return (::Spine::Interpolation_ElasticInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B00);
		}
		static ::Spine::Interpolation_PowOutInterpolation** StaticGet_Pow5Out()
		{
			return (::Spine::Interpolation_PowOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B08);
		}
		static ::Spine::Interpolation_PowInInterpolation** StaticGet_Pow5In()
		{
			return (::Spine::Interpolation_PowInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B10);
		}
		static ::Spine::Interpolation** StaticGet_Sine()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B18);
		}
		static ::Spine::Interpolation** StaticGet_Pow3OutInverse()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B20);
		}
		static ::Spine::Interpolation** StaticGet_Pow3InInverse()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B28);
		}
		static ::Spine::Interpolation** StaticGet_Smooth()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B30);
		}
		static ::Spine::Interpolation_PowInterpolation** StaticGet_Pow4()
		{
			return (::Spine::Interpolation_PowInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B38);
		}
		static ::Spine::Interpolation_PowInterpolation** StaticGet_Pow5()
		{
			return (::Spine::Interpolation_PowInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B40);
		}
		static ::Spine::Interpolation_ExpOutInterpolation** StaticGet_Exp5Out()
		{
			return (::Spine::Interpolation_ExpOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B48);
		}
		static ::Spine::Interpolation** StaticGet_Fade()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B50);
		}
		static ::Spine::Interpolation** StaticGet_Linear()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B58);
		}
		static ::Spine::Interpolation_ExpInInterpolation** StaticGet_Exp10In()
		{
			return (::Spine::Interpolation_ExpInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B60);
		}
		static ::Spine::Interpolation_PowOutInterpolation** StaticGet_Pow3Out()
		{
			return (::Spine::Interpolation_PowOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B68);
		}
		static ::Spine::Interpolation_ElasticOutInterpolation** StaticGet_ElasticOut()
		{
			return (::Spine::Interpolation_ElasticOutInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B70);
		}
		static ::Spine::Interpolation** StaticGet_SineIn()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B78);
		}
		static ::Spine::Interpolation** StaticGet_Pow2OutInverse()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B80);
		}
		static ::Spine::Interpolation** StaticGet_Smoother()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B88);
		}
		static ::Spine::Interpolation** StaticGet_Circle()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B90);
		}
		static ::Spine::Interpolation** StaticGet_SineOut()
		{
			return (::Spine::Interpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29B98);
		}
		static ::Spine::Interpolation_PowInInterpolation** StaticGet_Pow4In()
		{
			return (::Spine::Interpolation_PowInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29BA0);
		}
		static ::Spine::Interpolation_ExpInInterpolation** StaticGet_Exp5In()
		{
			return (::Spine::Interpolation_ExpInInterpolation**)Il2CppClass::FromTypeDefinitionIndex(Interpolation_TypeDefinitionIndex)->GetStaticField(0x29BA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION__CCTOR_OFFSET))();
		}

		::System::Single Apply_1(::System::Single start, ::System::Single end, ::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_INTERPOLATION_APPLY_1_OFFSET))(this, start, end, a);
		}
	};
}
