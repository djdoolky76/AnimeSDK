#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ELIGHFPAKMF;
class EMOPGLBEHPA;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define OHNBGJKGAPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC72F880)
#define OHNBGJKGAPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC72FCD0)
#define OHNBGJKGAPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC72F890)
#define OHNBGJKGAPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC72FC80)
#define OHNBGJKGAPI_TICK_OFFSET UNITYSDK_OFFSET(0xC72FD10)
#define OHNBGJKGAPI__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xC72FD70)
#define OHNBGJKGAPI__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xC72FDF0)

inline static constexpr unsigned int OHNBGJKGAPI_TypeDefinitionIndex = 48130;

	class OHNBGJKGAPI : public ::GELIALJDFBL
	{
	public:
		::ELIGHFPAKMF* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELIGHFPAKMF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELIGHFPAKMF*))((::PBYTE)hIl2Cpp + OHNBGJKGAPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNBGJKGAPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNBGJKGAPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNBGJKGAPI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHNBGJKGAPI_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_0(::EMOPGLBEHPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMOPGLBEHPA*))((::PBYTE)hIl2Cpp + OHNBGJKGAPI__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OHNBGJKGAPI__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
