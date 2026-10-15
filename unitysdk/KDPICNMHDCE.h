#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDPICNMHDCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB36E1B0)
#define KDPICNMHDCE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB36E290)
#define KDPICNMHDCE_JMHFHECFHBI_OFFSET UNITYSDK_OFFSET(0xB36EE80)
#define KDPICNMHDCE_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB36E800)

	class KDPICNMHDCE : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::System::Collections::Generic::HashSet_1<::ALMFLCJCHKP*>* CNHCJPDOEOH; // 0x18
		::LMFOOOLDECA* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + KDPICNMHDCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPICNMHDCE_EXECUTE_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::ALMFLCJCHKP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDPICNMHDCE_LIDKFDENKAP_OFFSET))(this, a1, a2);
		}

		::System::Void JMHFHECFHBI(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + KDPICNMHDCE_JMHFHECFHBI_OFFSET))(this, a1);
		}

	};
