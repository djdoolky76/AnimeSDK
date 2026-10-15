#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIGMPHIBKJG;
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ONKICPIJDLK_CLEANUP_OFFSET UNITYSDK_OFFSET(0xBF58690)
#define ONKICPIJDLK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF580D0)
#define ONKICPIJDLK_DLHADFPJCEO_OFFSET UNITYSDK_OFFSET(0xBF586D0)
#define ONKICPIJDLK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBF581B0)
#define ONKICPIJDLK_KJDEGBBEBFM_OFFSET UNITYSDK_OFFSET(0xBF58510)

	class ONKICPIJDLK : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::HashSet_1<::ALMFLCJCHKP*>* FHCMNOGOCEH; // 0x18
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + ONKICPIJDLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKICPIJDLK_EXECUTE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKICPIJDLK_CLEANUP_OFFSET))(this);
		}

		::System::Void KJDEGBBEBFM(::ALMFLCJCHKP* a1, ::AIGMPHIBKJG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::AIGMPHIBKJG*))((::PBYTE)hIl2Cpp + ONKICPIJDLK_KJDEGBBEBFM_OFFSET))(this, a1, a2);
		}

		::System::Single DLHADFPJCEO(::AIGMPHIBKJG* a1)
		{
			return ((::System::Single(*)(::PVOID, ::AIGMPHIBKJG*))((::PBYTE)hIl2Cpp + ONKICPIJDLK_DLHADFPJCEO_OFFSET))(this, a1);
		}

	};
