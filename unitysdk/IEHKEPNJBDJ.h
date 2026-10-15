#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALHKJLBIKJ.h"
class DBEILICHGCG;
class IEHKEPNJBDJ;
class JBACCAGFHON;
class JBFGHNLMEDI;

#define IEHKEPNJBDJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EF0100)
#define IEHKEPNJBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF0330)
#define IEHKEPNJBDJ_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x15EF0340)

inline static constexpr unsigned int IEHKEPNJBDJ_TypeDefinitionIndex = 76415;

	class IEHKEPNJBDJ : public ::HALHKJLBIKJ
	{
	public:
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + IEHKEPNJBDJ_CTOR_OFFSET))(this, a1);
		}

		static ::IEHKEPNJBDJ* BPLPBPMEODA(::JBFGHNLMEDI* a1)
		{
			return ((::IEHKEPNJBDJ*(*)(::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + IEHKEPNJBDJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + IEHKEPNJBDJ_OKPLPEELPBC_OFFSET))(this, a1, a2);
		}

	};
