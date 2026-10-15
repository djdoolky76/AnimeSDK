#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define ODGEOHLNBIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8BA10)
#define ODGEOHLNBIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD8B780)
#define ODGEOHLNBIP_EGOOMDAEKGL_OFFSET UNITYSDK_OFFSET(0xBD8B940)
#define ODGEOHLNBIP_FEAOGEMGHAP_OFFSET UNITYSDK_OFFSET(0xBD8B870)
#define ODGEOHLNBIP_GET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xBD8B9F0)
#define ODGEOHLNBIP_SET__ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xBD8BA00)

inline static constexpr unsigned int ODGEOHLNBIP_TypeDefinitionIndex = 67502;

	class ODGEOHLNBIP : public ::System::Object
	{
	public:
		::System::Boolean CKOBGJNCLFH; // 0x10
		::System::Boolean __IsDisposed_k__BackingField; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_DISPOSE_OFFSET))(this);
		}

		::System::Void FEAOGEMGHAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_FEAOGEMGHAP_OFFSET))(this);
		}

		::System::Func_1<::RPG::Client::Promises::IPromise*>* EGOOMDAEKGL(::System::Func_1<::RPG::Client::Promises::IPromise*>* a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Func_1<::RPG::Client::Promises::IPromise*>*))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_EGOOMDAEKGL_OFFSET))(this, a1);
		}

		::System::Boolean get__IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_GET__ISDISPOSED_OFFSET))(this);
		}

		::System::Void set__IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODGEOHLNBIP_SET__ISDISPOSED_OFFSET))(this, a1);
		}

	};
