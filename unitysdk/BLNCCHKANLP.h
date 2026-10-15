#pragma once
#include "unitysdk/unitysdk.h"
class NLIFBFLEHPK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BLNCCHKANLP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7ABA0)
#define BLNCCHKANLP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBA7AEC0)
#define BLNCCHKANLP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA7AD40)
#define BLNCCHKANLP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA7AE00)

inline static constexpr unsigned int BLNCCHKANLP_TypeDefinitionIndex = 53482;

	class BLNCCHKANLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NLIFBFLEHPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NLIFBFLEHPK*))((::PBYTE)hIl2Cpp + BLNCCHKANLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNCCHKANLP__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNCCHKANLP__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLNCCHKANLP_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
