#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeInfo; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define BKFDEPNDCPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFD60)
#define BKFDEPNDCPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7B0A20)
#define BKFDEPNDCPF_PHLJKCLOPFH_OFFSET UNITYSDK_OFFSET(0xB7AFEC0)
#define BKFDEPNDCPF__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0xB7B09E0)
#define BKFDEPNDCPF__REBUILD_OFFSET UNITYSDK_OFFSET(0xB7AFF20)

inline static constexpr unsigned int BKFDEPNDCPF_TypeDefinitionIndex = 75136;

	class BKFDEPNDCPF
	{
	public:
		::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* INONCCKFAEH; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* NAGJINCOLPD; // 0x28
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* a1, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo*, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + BKFDEPNDCPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PHLJKCLOPFH(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + BKFDEPNDCPF_PHLJKCLOPFH_OFFSET))(this, a1, a2);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFDEPNDCPF__REBUILD_OFFSET))(this);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFDEPNDCPF__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFDEPNDCPF_DISPOSE_OFFSET))(this);
		}

	};
