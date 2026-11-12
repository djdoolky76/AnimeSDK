#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKLOFHDFDG;
class EBGGEOGBOGN;
class FIJJHJADLLM;
class OKIBHNGFOLI;
namespace RPG::Client::Promises { class Promise; }

#define HMGELDJBNLH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D19880)
#define HMGELDJBNLH_DCFDKFFEPOJ_OFFSET UNITYSDK_OFFSET(0x16D198B0)
#define HMGELDJBNLH_GET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x16D1A030)
#define HMGELDJBNLH_GJJOENMGPMB_OFFSET UNITYSDK_OFFSET(0x16D19B60)
#define HMGELDJBNLH_NDPGEKOCCAM_OFFSET UNITYSDK_OFFSET(0x16D19970)
#define HMGELDJBNLH_SET_WAITFULLSYNCFINISH_OFFSET UNITYSDK_OFFSET(0x16D1A040)

inline static constexpr unsigned int HMGELDJBNLH_TypeDefinitionIndex = 84943;

	class HMGELDJBNLH : public ::System::Object
	{
	public:
		::OKIBHNGFOLI* JDGBDKHIEGG; // 0x10
		::RPG::Client::Promises::Promise* _WaitFullSyncFinish_k__BackingField; // 0x18
		::DFKLOFHDFDG* MJHHLOPFDNK; // 0x20
		::EBGGEOGBOGN* PIACKEOFAOG; // 0x28
		::System::Boolean IKGLFMGELEN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGELDJBNLH_CTOR_OFFSET))(this);
		}

		::System::Void DCFDKFFEPOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGELDJBNLH_DCFDKFFEPOJ_OFFSET))(this);
		}

		::System::Void NDPGEKOCCAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGELDJBNLH_NDPGEKOCCAM_OFFSET))(this);
		}

		::System::Void GJJOENMGPMB(::FIJJHJADLLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIJJHJADLLM*))((::PBYTE)hIl2Cpp + HMGELDJBNLH_GJJOENMGPMB_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* get_WaitFullSyncFinish()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGELDJBNLH_GET_WAITFULLSYNCFINISH_OFFSET))(this);
		}

		::System::Void set_WaitFullSyncFinish(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + HMGELDJBNLH_SET_WAITFULLSYNCFINISH_OFFSET))(this, a1);
		}

	};
