#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace Proto { class ItemList; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define FAKDJHMJOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15676C20)
#define FAKDJHMJOHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15676EF0)
#define FAKDJHMJOHF_LLHHMDJOJLA_OFFSET UNITYSDK_OFFSET(0x15676CA0)
#define FAKDJHMJOHF_LMKNFOBJMMK_OFFSET UNITYSDK_OFFSET(0x15676E00)

inline static constexpr unsigned int FAKDJHMJOHF_TypeDefinitionIndex = 75360;

	class FAKDJHMJOHF : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::Proto::ItemList*, ::LPPKGHJGOCC>>* DACMHFNGKCG; // 0x10
		::System::UInt32 ANOPNMFJLMI; // 0x18
		::LPPKGHJGOCC GMCNLFICNOB; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::LPPKGHJGOCC a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LPPKGHJGOCC))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::LPPKGHJGOCC>>* LLHHMDJOJLA()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::LPPKGHJGOCC>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDJHMJOHF_LLHHMDJOJLA_OFFSET))(this);
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
