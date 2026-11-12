#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define MDLAMNJMAKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC15D420)
#define MDLAMNJMAKJ_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xC15D4C0)
#define MDLAMNJMAKJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC15D430)

inline static constexpr unsigned int MDLAMNJMAKJ_TypeDefinitionIndex = 61646;

	class MDLAMNJMAKJ : public ::EFNJLACKEDH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_HCOFMFKFMDK_OFFSET))(this);
		}

	};
