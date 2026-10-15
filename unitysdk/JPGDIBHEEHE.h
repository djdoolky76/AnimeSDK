#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCIBMBJGPKI.h"
class ALMFLCJCHKP;
class KBDKJPLJKHE;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define JPGDIBHEEHE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB2BD660)
#define JPGDIBHEEHE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB2BD5C0)
#define JPGDIBHEEHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BD550)
#define JPGDIBHEEHE_JCJCJEHEBJE_OFFSET UNITYSDK_OFFSET(0xB2BD920)
#define JPGDIBHEEHE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB2BD6A0)

inline static constexpr unsigned int JPGDIBHEEHE_TypeDefinitionIndex = 77930;

	class JPGDIBHEEHE : public ::GCIBMBJGPKI
	{
	public:
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::ALMFLCJCHKP* a2, ::LMFOOOLDECA* a3, ::KBDKJPLJKHE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::ALMFLCJCHKP*, ::LMFOOOLDECA*, ::KBDKJPLJKHE*))((::PBYTE)hIl2Cpp + JPGDIBHEEHE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGDIBHEEHE_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGDIBHEEHE_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPGDIBHEEHE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JCJCJEHEBJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGDIBHEEHE_JCJCJEHEBJE_OFFSET))(this);
		}

	};
