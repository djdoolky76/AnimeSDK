#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define PBKNMLMOOAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF2880)
#define PBKNMLMOOAH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBFF2890)

inline static constexpr unsigned int PBKNMLMOOAH_TypeDefinitionIndex = 77961;

	class PBKNMLMOOAH : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + PBKNMLMOOAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKNMLMOOAH_EXECUTE_OFFSET))(this);
		}

	};
