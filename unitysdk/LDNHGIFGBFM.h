#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDNHGIFGBFM_ContentType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class OFIILELJGIE;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Object; }

#define LDNHGIFGBFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB63E740)
#define LDNHGIFGBFM_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB63E890)
#define LDNHGIFGBFM_DKHKDEBMGKM_OFFSET UNITYSDK_OFFSET(0xB63E670)
#define LDNHGIFGBFM_MOLJJCLLHEB_OFFSET UNITYSDK_OFFSET(0xB63EA10)
#define LDNHGIFGBFM_MPPEMAJEEOI_OFFSET UNITYSDK_OFFSET(0xB63E810)
#define LDNHGIFGBFM_NIBBJCDPNCJ_OFFSET UNITYSDK_OFFSET(0xB63E700)
#define LDNHGIFGBFM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB63EAB0)

inline static constexpr unsigned int LDNHGIFGBFM_TypeDefinitionIndex = 79484;

	class LDNHGIFGBFM : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Object*>* LFGMLJCCPCH; // 0x10
		::OFIILELJGIE* LKBKDNAMNEG; // 0x18
		::System::Nullable_1<::System::Boolean> OIMACANBFPP; // 0x20
		::System::Void _ctor(::OFIILELJGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean DKHKDEBMGKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_DKHKDEBMGKM_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Object*>* NIBBJCDPNCJ()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_NIBBJCDPNCJ_OFFSET))(this);
		}

		::LDNHGIFGBFM_ContentType MPPEMAJEEOI(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::LDNHGIFGBFM_ContentType(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_MPPEMAJEEOI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DADCFBHGLOH(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_DADCFBHGLOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MOLJJCLLHEB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_MOLJJCLLHEB_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNHGIFGBFM_PJPFIHFAHGO_OFFSET))(this);
		}

	};
