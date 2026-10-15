#pragma once
#include "unitysdk/unitysdk.h"
class KDFFHMDFALG;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionChange; }
namespace System { class Object; }

#define LDCHDMACFJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB616450)
#define LDCHDMACFJJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB616850)
#define LDCHDMACFJJ__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB6165E0)
#define LDCHDMACFJJ__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB6166D0)
#define LDCHDMACFJJ__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB616790)

inline static constexpr unsigned int LDCHDMACFJJ_TypeDefinitionIndex = 53007;

	class LDCHDMACFJJ
	{
	public:
		::KDFFHMDFALG* FGNBCPELJEO; // 0x68
		::System::Int32 PCIHIJNGMHE; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + LDCHDMACFJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHDMACFJJ__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHDMACFJJ__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHDMACFJJ__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDCHDMACFJJ_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
