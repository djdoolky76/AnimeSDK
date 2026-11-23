#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B3DCB6037FB1F7B8;
namespace System { class String; }

#define UNITYENGINE_B768A959AB308455_A3E20F9DB84F03F9_OFFSET UNITYSDK_OFFSET(0x4146EC0)
#define UNITYENGINE_B768A959AB308455_B7CD1D461F0ACFBB_OFFSET UNITYSDK_OFFSET(0x4146DD0)
#define UNITYENGINE_B768A959AB308455_FD5640EBFF06E04F_OFFSET UNITYSDK_OFFSET(0x4146CF0)
#define UNITYENGINE_B768A959AB308455__CCTOR_OFFSET UNITYSDK_OFFSET(0x4146F30)
#define UNITYENGINE_B768A959AB308455__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B768A959AB308455_TypeDefinitionIndex = 17388;

	class B768A959AB308455 : public ::System::Object
	{
	public:
		static ::B3DCB6037FB1F7B8** StaticGet_E379725BD0A0528E()
		{
			return (::B3DCB6037FB1F7B8**)Il2CppClass::FromTypeDefinitionIndex(B768A959AB308455_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void A3E20F9DB84F03F9(::B3DCB6037FB1F7B8* AB87E69D1A3CD704)
		{
			return ((::System::Void(*)(::B3DCB6037FB1F7B8*))((::PBYTE)hIl2Cpp + UNITYENGINE_B768A959AB308455_A3E20F9DB84F03F9_OFFSET))(AB87E69D1A3CD704);
		}

		static ::System::String* B7CD1D461F0ACFBB(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_B768A959AB308455_B7CD1D461F0ACFBB_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B768A959AB308455__CTOR_OFFSET))(this);
		}

		static ::System::Boolean FD5640EBFF06E04F(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_B768A959AB308455_FD5640EBFF06E04F_OFFSET))(EFF983A80A48BB2A);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_B768A959AB308455__CCTOR_OFFSET))();
		}
	};
}
