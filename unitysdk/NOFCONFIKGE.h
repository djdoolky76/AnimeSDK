#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NOFCONFIKGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB840)
#define NOFCONFIKGE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBCEB100)
#define NOFCONFIKGE_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xBCEB1F0)
#define NOFCONFIKGE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBCEB150)
#define NOFCONFIKGE_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xBCEB620)

inline static constexpr unsigned int NOFCONFIKGE_TypeDefinitionIndex = 65344;

	class NOFCONFIKGE : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* COPHHBGMLFO; // 0x10
		::System::Boolean COIMKHGDGEK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFCONFIKGE_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + NOFCONFIKGE_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NOFCONFIKGE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + NOFCONFIKGE_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFCONFIKGE_UPDATEDONE_OFFSET))(this);
		}

	};
