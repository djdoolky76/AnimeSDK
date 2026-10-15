#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define BODKDKGICEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC18D480)
#define BODKDKGICEJ_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0xC18D670)
#define BODKDKGICEJ_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xC18D630)
#define BODKDKGICEJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC18D490)

inline static constexpr unsigned int BODKDKGICEJ_TypeDefinitionIndex = 60365;

	class BODKDKGICEJ : public ::EFNJLACKEDH
	{
	public:
		::System::Boolean JDPGFIBLFOP; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + BODKDKGICEJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKDKGICEJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKDKGICEJ_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODKDKGICEJ_DMJKBKMKKCG_OFFSET))(this);
		}

	};
