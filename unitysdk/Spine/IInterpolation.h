#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine { class IInterpolation; }

#define SPINE_IINTERPOLATION_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1FF54230)
#define SPINE_IINTERPOLATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF54300)
#define SPINE_IINTERPOLATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF542F0)

namespace Spine
{
	inline static constexpr unsigned int IInterpolation_TypeDefinitionIndex = 40606;

	class IInterpolation : public ::System::Object
	{
	public:
		static ::Spine::IInterpolation** StaticGet_Pow2Out()
		{
			return (::Spine::IInterpolation**)UnitySDK::FromName("Spine", "IInterpolation")->GetStaticField(0x4F250);
		}

		static ::Spine::IInterpolation** StaticGet_Pow2()
		{
			return (::Spine::IInterpolation**)UnitySDK::FromName("Spine", "IInterpolation")->GetStaticField(0x4F258);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_CCTOR_OFFSET))();
		}

		::System::Single Apply_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
