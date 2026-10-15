#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCIBMBJGPKI.h"
class ALMFLCJCHKP;
class KBDKJPLJKHE;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define OCMIHAIONPE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBD70E10)
#define OCMIHAIONPE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBD70D70)
#define OCMIHAIONPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD70D00)
#define OCMIHAIONPE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBD70E50)

inline static constexpr unsigned int OCMIHAIONPE_TypeDefinitionIndex = 77928;

	class OCMIHAIONPE : public ::GCIBMBJGPKI
	{
	public:
		// static const ::System::Object DAFIPNGCFME; // 0x0
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2, ::ALMFLCJCHKP* a3, ::KBDKJPLJKHE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*, ::ALMFLCJCHKP*, ::KBDKJPLJKHE*))((::PBYTE)hIl2Cpp + OCMIHAIONPE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIHAIONPE_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIHAIONPE_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCMIHAIONPE_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
