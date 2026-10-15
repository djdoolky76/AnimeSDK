#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDFFHMDFALG;

#define IAENOIGPEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF6E00)
#define IAENOIGPEBK_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x15DF6E10)

inline static constexpr unsigned int IAENOIGPEBK_TypeDefinitionIndex = 60633;

	class IAENOIGPEBK : public ::System::Object
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Void _ctor(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + IAENOIGPEBK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAENOIGPEBK_KEOKEELBKHI_OFFSET))(this);
		}

	};
