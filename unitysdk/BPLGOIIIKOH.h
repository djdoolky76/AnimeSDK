#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPLGOIIIKOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AA730)
#define BPLGOIIIKOH_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0xC1A9AB0)
#define BPLGOIIIKOH_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC1A99E0)
#define BPLGOIIIKOH_MBINGCOGKAI_OFFSET UNITYSDK_OFFSET(0xC1A9E50)
#define BPLGOIIIKOH_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xC1AA420)
#define BPLGOIIIKOH_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xC1AA390)
#define BPLGOIIIKOH_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xC1A9A30)

	class BPLGOIIIKOH : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* JBMFIEIKFGA; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* OIFFHOOCAGA; // 0x18
		::System::UInt32 FPJKDKMDKFB; // 0x20
		::System::UInt32 GOGHILAKAAA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATESTART_OFFSET))(this);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void MBINGCOGKAI(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_MBINGCOGKAI_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_PREUPDATEDONE_OFFSET))(this);
		}

	};
