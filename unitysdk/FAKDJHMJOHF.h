#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace Proto { class ItemList; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define FAKDJHMJOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x156829F0)
#define FAKDJHMJOHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15682CC0)
#define FAKDJHMJOHF_LLHHMDJOJLA_OFFSET UNITYSDK_OFFSET(0x15682A70)
#define FAKDJHMJOHF_LMKNFOBJMMK_OFFSET UNITYSDK_OFFSET(0x15682BD0)

inline static constexpr unsigned int FAKDJHMJOHF_TypeDefinitionIndex = 75361;

	class FAKDJHMJOHF : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* DACMHFNGKCG; // 0x10
		::System::UInt32 ANOPNMFJLMI; // 0x18
		::LPPKGHJGOCC GMCNLFICNOB; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::LPPKGHJGOCC a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LPPKGHJGOCC))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* LLHHMDJOJLA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_LLHHMDJOJLA_OFFSET))(this);
		}

		::System::Void LMKNFOBJMMK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_LMKNFOBJMMK_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_DISPOSE_OFFSET))(this);
		}

	};
