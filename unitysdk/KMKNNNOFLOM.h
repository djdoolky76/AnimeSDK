#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCIBMBJGPKI.h"
class ALMFLCJCHKP;
class KBDKJPLJKHE;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define KMKNNNOFLOM_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB565E90)
#define KMKNNNOFLOM_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB565DF0)
#define KMKNNNOFLOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB565D80)
#define KMKNNNOFLOM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB565ED0)

inline static constexpr unsigned int KMKNNNOFLOM_TypeDefinitionIndex = 77933;

	class KMKNNNOFLOM : public ::GCIBMBJGPKI
	{
	public:
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::ALMFLCJCHKP* a2, ::LMFOOOLDECA* a3, ::KBDKJPLJKHE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::ALMFLCJCHKP*, ::LMFOOOLDECA*, ::KBDKJPLJKHE*))((::PBYTE)hIl2Cpp + KMKNNNOFLOM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKNNNOFLOM_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKNNNOFLOM_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMKNNNOFLOM_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
