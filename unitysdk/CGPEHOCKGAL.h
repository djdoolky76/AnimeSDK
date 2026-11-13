#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define CGPEHOCKGAL_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x17860E60)
#define CGPEHOCKGAL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x17860DA0)
#define CGPEHOCKGAL_CTOR_OFFSET UNITYSDK_OFFSET(0x17860F60)
#define CGPEHOCKGAL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x17860EB0)
#define CGPEHOCKGAL_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x17860F10)

inline static constexpr unsigned int CGPEHOCKGAL_TypeDefinitionIndex = 80692;

	class CGPEHOCKGAL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPEHOCKGAL_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + CGPEHOCKGAL_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + CGPEHOCKGAL_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2, ::LMFOOOLDECA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + CGPEHOCKGAL_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::KMMMFMMGLAN* PBDNAIDEIPK(::OMNJCDDMLHI* a1)
		{
			return ((::KMMMFMMGLAN*(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + CGPEHOCKGAL_PBDNAIDEIPK_OFFSET))(this, a1);
		}

	};
