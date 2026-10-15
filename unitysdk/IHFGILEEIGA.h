#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDOKLOMKNL;
class HIAMBDKHMIJ;
namespace RPG::Client { template <typename T> class MLinkedLockFreeQueue_1; }
namespace System { class Action; }
namespace System::Threading { class Thread; }

#define IHFGILEEIGA_BIKNEIMDBJK_OFFSET UNITYSDK_OFFSET(0x1641ADF0)
#define IHFGILEEIGA_BOJAGCJELAD_OFFSET UNITYSDK_OFFSET(0x1641AC90)
#define IHFGILEEIGA_CKHPNJOJDPF_OFFSET UNITYSDK_OFFSET(0x1641ABD0)
#define IHFGILEEIGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1641B060)
#define IHFGILEEIGA_EIECCOPEHJM_OFFSET UNITYSDK_OFFSET(0x1641AC20)

	class IHFGILEEIGA : public ::System::Object
	{
	public:
		::HIAMBDKHMIJ* DFBAMMDBOIA; // 0x10
		::Il2CppArray<::System::Threading::Thread*>* MJHIBOMBAJE; // 0x18
		::ELDOKLOMKNL* JLDAANDIJCN; // 0x20
		::RPG::Client::MLinkedLockFreeQueue_1<::System::Action*>* PAINLBMDCJO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGILEEIGA_CTOR_OFFSET))(this);
		}

		::HIAMBDKHMIJ* CKHPNJOJDPF()
		{
			return ((::HIAMBDKHMIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGILEEIGA_CKHPNJOJDPF_OFFSET))(this);
		}

		::System::Void EIECCOPEHJM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IHFGILEEIGA_EIECCOPEHJM_OFFSET))(this, a1);
		}

		::System::Void BOJAGCJELAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGILEEIGA_BOJAGCJELAD_OFFSET))(this);
		}

		::System::Void BIKNEIMDBJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFGILEEIGA_BIKNEIMDBJK_OFFSET))(this);
		}

	};
