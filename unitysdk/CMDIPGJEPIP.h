#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class CMDIPGJEPIP;
class DBEILICHGCG;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define CMDIPGJEPIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA20DC0)
#define CMDIPGJEPIP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA20E30)
#define CMDIPGJEPIP_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xDA20E40)

inline static constexpr unsigned int CMDIPGJEPIP_TypeDefinitionIndex = 76411;

	class CMDIPGJEPIP : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CMDIPGJEPIP_CTOR_OFFSET))(this, a1);
		}

		static ::CMDIPGJEPIP* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::CMDIPGJEPIP*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + CMDIPGJEPIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + CMDIPGJEPIP_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
