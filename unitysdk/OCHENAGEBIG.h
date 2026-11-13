#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define OCHENAGEBIG_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x19A0EF90)
#define OCHENAGEBIG_CTOR_OFFSET UNITYSDK_OFFSET(0x19A0E720)
#define OCHENAGEBIG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19A0EA50)
#define OCHENAGEBIG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x19A0E730)

inline static constexpr unsigned int OCHENAGEBIG_TypeDefinitionIndex = 80678;

	class OCHENAGEBIG : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::System::Single KOAODDIJHIG; // 0x18
		::System::Void _ctor(::LMFOOOLDECA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + OCHENAGEBIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + OCHENAGEBIG_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + OCHENAGEBIG_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void BJPFKNECHPL(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + OCHENAGEBIG_BJPFKNECHPL_OFFSET))(this, a1);
		}

	};
