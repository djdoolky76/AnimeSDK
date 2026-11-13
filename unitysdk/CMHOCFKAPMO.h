#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class CMHOCFKAPMO;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define CMHOCFKAPMO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B19A960)
#define CMHOCFKAPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B19A9D0)
#define CMHOCFKAPMO_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x1B19A9E0)

inline static constexpr unsigned int CMHOCFKAPMO_TypeDefinitionIndex = 78741;

	class CMHOCFKAPMO : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CMHOCFKAPMO_CTOR_OFFSET))(this, a1);
		}

		static ::CMHOCFKAPMO* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::CMHOCFKAPMO*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CMHOCFKAPMO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + CMHOCFKAPMO_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
