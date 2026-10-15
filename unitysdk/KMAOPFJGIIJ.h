#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define KMAOPFJGIIJ_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB53B760)
#define KMAOPFJGIIJ_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB53B570)
#define KMAOPFJGIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB53B8B0)
#define KMAOPFJGIIJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB53B7B0)
#define KMAOPFJGIIJ_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0xB53B820)

inline static constexpr unsigned int KMAOPFJGIIJ_TypeDefinitionIndex = 77957;

	class KMAOPFJGIIJ : public ::System::Object
	{
	public:
		::System::Single PNKIFDPDKPL; // 0x10
		::System::Single JEKECACFIDP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAOPFJGIIJ_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + KMAOPFJGIIJ_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + KMAOPFJGIIJ_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2, ::LMFOOOLDECA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + KMAOPFJGIIJ_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::KMMMFMMGLAN* PBDNAIDEIPK(::OMNJCDDMLHI* a1)
		{
			return ((::KMMMFMMGLAN*(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + KMAOPFJGIIJ_PBDNAIDEIPK_OFFSET))(this, a1);
		}

	};
