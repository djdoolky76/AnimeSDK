#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Unit.h"
class NBKNHOHKDJI;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class Observer_1; }
namespace R3 { template <typename T> class Subject_1; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define NBKNHOHKDJI_AIPHJEHDPCB_OFFSET UNITYSDK_OFFSET(0x1EC5A560)
#define NBKNHOHKDJI_BJNMMBJDMOG_OFFSET UNITYSDK_OFFSET(0x1EC5A9E0)
#define NBKNHOHKDJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59790)
#define NBKNHOHKDJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC5A870)
#define NBKNHOHKDJI_EJLPFEAEADE_OFFSET UNITYSDK_OFFSET(0x1EC59CC0)
#define NBKNHOHKDJI_EMGHGCGDEOL_OFFSET UNITYSDK_OFFSET(0x1EC5A500)
#define NBKNHOHKDJI_SUBSCRIBECORE_OFFSET UNITYSDK_OFFSET(0x1EC5A620)

inline static constexpr unsigned int NBKNHOHKDJI_TypeDefinitionIndex = 44241;

	class NBKNHOHKDJI
	{
	public:
		::System::Action_1<::NBKNHOHKDJI*>* IOAEBFCPHCK; // 0x10
		::R3::Subject_1<::R3::Unit>* AAEDJDAIACP; // 0x18
		::System::IDisposable* JLPMGIHHHBG; // 0x20
		::System::Boolean KAIJFBNPEAE; // 0x28
		::System::Boolean GFAMGLFOMGI; // 0x29
		::System::Boolean AFGOLMJALGN; // 0x2A
		::System::Void _ctor(::R3::Observable_1<::System::Boolean>* a1, ::System::Boolean a2, ::System::Action_1<::NBKNHOHKDJI*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Observable_1<::System::Boolean>*, ::System::Boolean, ::System::Action_1<::NBKNHOHKDJI*>*))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EMGHGCGDEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_EMGHGCGDEOL_OFFSET))(this);
		}

		::System::Void EJLPFEAEADE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_EJLPFEAEADE_OFFSET))(this, a1);
		}

		::System::IDisposable* SubscribeCore(::R3::Observer_1<::System::Boolean>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::R3::Observer_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_SUBSCRIBECORE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_DISPOSE_OFFSET))(this);
		}

		::System::Void BJNMMBJDMOG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_BJNMMBJDMOG_OFFSET))(this, a1);
		}

		::System::Void AIPHJEHDPCB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBKNHOHKDJI_AIPHJEHDPCB_OFFSET))(this, a1);
		}

	};
