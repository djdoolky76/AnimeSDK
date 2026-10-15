#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AKLKMBNBMPG;
namespace RPG::GameCore { class SO_KeepDistanceMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define JCEDHNDCFAA_AAPKNHGHGPA_OFFSET UNITYSDK_OFFSET(0x16577B00)
#define JCEDHNDCFAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16577DB0)
#define JCEDHNDCFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x16577600)
#define JCEDHNDCFAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16577720)
#define JCEDHNDCFAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165777A0)
#define JCEDHNDCFAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16577D00)
#define JCEDHNDCFAA_TICK_OFFSET UNITYSDK_OFFSET(0x16577C30)

inline static constexpr unsigned int JCEDHNDCFAA_TypeDefinitionIndex = 52119;

	class JCEDHNDCFAA
	{
	public:
		::AKLKMBNBMPG* FNLONNEABNB; // 0x40
		static ::System::Single* StaticGet_KJPPFFLLMAB()
		{
			return (::System::Single*)UnitySDK::FromName("", "JCEDHNDCFAA")->GetStaticField(0x15340);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_KeepDistanceMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_KeepDistanceMoveTo*))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCEDHNDCFAA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean AAPKNHGHGPA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JCEDHNDCFAA_AAPKNHGHGPA_OFFSET))(this, a1);
		}

	};
