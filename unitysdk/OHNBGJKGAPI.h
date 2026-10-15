#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ELIGHFPAKMF;
class EMOPGLBEHPA;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define OHNBGJKGAPI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6D4C0)
#define OHNBGJKGAPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE6D910)
#define OHNBGJKGAPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6D4D0)
#define OHNBGJKGAPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE6D8C0)
#define OHNBGJKGAPI_TICK_OFFSET UNITYSDK_OFFSET(0xBE6D950)
#define OHNBGJKGAPI__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBE6D9B0)
#define OHNBGJKGAPI__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xBE6DA30)

inline static constexpr unsigned int OHNBGJKGAPI_TypeDefinitionIndex = 47102;

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
