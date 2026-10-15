#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFJHMKHPOJ;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define ENPHGNJLCDO_CTOR_OFFSET UNITYSDK_OFFSET(0x155AB950)
#define ENPHGNJLCDO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x155AB960)

inline static constexpr unsigned int ENPHGNJLCDO_TypeDefinitionIndex = 77939;

	class ENPHGNJLCDO : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::KHFJHMKHPOJ* BBHHHJFOALF; // 0x18
		::LMFOOOLDECA* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + ENPHGNJLCDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPHGNJLCDO_EXECUTE_OFFSET))(this);
		}

	};
