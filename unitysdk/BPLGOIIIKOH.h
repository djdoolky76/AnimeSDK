#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPLGOIIIKOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A91D0)
#define BPLGOIIIKOH_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0xC1A8550)
#define BPLGOIIIKOH_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC1A8480)
#define BPLGOIIIKOH_MBINGCOGKAI_OFFSET UNITYSDK_OFFSET(0xC1A88F0)
#define BPLGOIIIKOH_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xC1A8EC0)
#define BPLGOIIIKOH_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xC1A8E30)
#define BPLGOIIIKOH_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xC1A84D0)

inline static constexpr unsigned int BPLGOIIIKOH_TypeDefinitionIndex = 64956;

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
