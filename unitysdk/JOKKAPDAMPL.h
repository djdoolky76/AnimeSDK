#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define JOKKAPDAMPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A0900)
#define JOKKAPDAMPL_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0xB2A0000)
#define JOKKAPDAMPL_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xB29FEF0)
#define JOKKAPDAMPL_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xB2A05E0)
#define JOKKAPDAMPL_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xB29FF50)

inline static constexpr unsigned int JOKKAPDAMPL_TypeDefinitionIndex = 65343;

	class JOKKAPDAMPL : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FIIOJMAOIFK; // 0x10
		::System::UInt32 HCABNNKKNLP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKKAPDAMPL_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + JOKKAPDAMPL_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JOKKAPDAMPL_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + JOKKAPDAMPL_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + JOKKAPDAMPL_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
