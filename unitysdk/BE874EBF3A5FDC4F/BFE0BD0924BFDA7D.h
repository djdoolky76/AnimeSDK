#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/B6564CAC678AC465.h"

namespace System { class Object; }

#define BE874EBF3A5FDC4F_BFE0BD0924BFDA7D_INVOKE_OFFSET UNITYSDK_OFFSET(0x2D12410)
#define BE874EBF3A5FDC4F_BFE0BD0924BFDA7D__CTOR_OFFSET UNITYSDK_OFFSET(0x2D12760)

namespace BE874EBF3A5FDC4F
{
	inline static constexpr unsigned int BFE0BD0924BFDA7D_TypeDefinitionIndex = 11321;

	class BFE0BD0924BFDA7D : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BE874EBF3A5FDC4F_BFE0BD0924BFDA7D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BE874EBF3A5FDC4F_BFE0BD0924BFDA7D_INVOKE_OFFSET))(this, E6CE7391633EEC68);
		}
	};
}
