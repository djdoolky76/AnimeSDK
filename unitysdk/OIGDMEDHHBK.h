#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDFFHMDFALG;

#define OIGDMEDHHBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1948AA70)
#define OIGDMEDHHBK_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x1948AA80)

inline static constexpr unsigned int OIGDMEDHHBK_TypeDefinitionIndex = 62008;

	class OIGDMEDHHBK : public ::System::Object
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Void _ctor(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + OIGDMEDHHBK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGDMEDHHBK_KEOKEELBKHI_OFFSET))(this);
		}

	};
