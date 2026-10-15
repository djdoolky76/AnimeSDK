#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define BGOMMMOBAHM_AMENPDLCODD_OFFSET UNITYSDK_OFFSET(0xB468200)
#define BGOMMMOBAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB467DA0)
#define BGOMMMOBAHM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB468900)
#define BGOMMMOBAHM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB467FB0)
#define BGOMMMOBAHM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4687B0)

inline static constexpr unsigned int BGOMMMOBAHM_TypeDefinitionIndex = 77121;

	class BGOMMMOBAHM : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<::HIOEAKHGILF*>* OOGGEJFJHIF; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* KFBHHFIFHCJ; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* GGLEFKBINMC; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_EXECUTE_OFFSET))(this);
		}

		::System::Void AMENPDLCODD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGOMMMOBAHM_AMENPDLCODD_OFFSET))(this, a1);
		}

	};
