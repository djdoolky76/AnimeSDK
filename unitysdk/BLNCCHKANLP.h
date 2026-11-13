#pragma once
#include "unitysdk/unitysdk.h"
class NLIFBFLEHPK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BLNCCHKANLP_CTOR_OFFSET UNITYSDK_OFFSET(0x18B55FF0)
#define BLNCCHKANLP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x18B56310)
#define BLNCCHKANLP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B56190)
#define BLNCCHKANLP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B56250)

inline static constexpr unsigned int BLNCCHKANLP_TypeDefinitionIndex = 54644;

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
