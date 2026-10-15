#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFEPGAKGNBM;
class IFAFBFDEBMH;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define BECGOPMGJDJ_CIOBPGHNKGM_OFFSET UNITYSDK_OFFSET(0x163025C0)
#define BECGOPMGJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16300B20)
#define BECGOPMGJDJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16300B30)

inline static constexpr unsigned int BECGOPMGJDJ_TypeDefinitionIndex = 77962;

	class BECGOPMGJDJ : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		// static const ::System::Object IHFHMLHMMFB; // 0x0
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BECGOPMGJDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECGOPMGJDJ_EXECUTE_OFFSET))(this);
		}

		::System::Boolean CIOBPGHNKGM(::IFAFBFDEBMH* a1, ::EFEPGAKGNBM* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFAFBFDEBMH*, ::EFEPGAKGNBM*))((::PBYTE)hIl2Cpp + BECGOPMGJDJ_CIOBPGHNKGM_OFFSET))(this, a1, a2);
		}

	};
