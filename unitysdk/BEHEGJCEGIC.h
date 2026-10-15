#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define BEHEGJCEGIC_CLPIJMILKHP_OFFSET UNITYSDK_OFFSET(0x16322C00)
#define BEHEGJCEGIC_CTOR_OFFSET UNITYSDK_OFFSET(0x16322D90)
#define BEHEGJCEGIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16322B00)
#define BEHEGJCEGIC_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x16322D30)
#define BEHEGJCEGIC_FFAHBFPELBG_OFFSET UNITYSDK_OFFSET(0x16322870)
#define BEHEGJCEGIC_IABHCPENNGH_OFFSET UNITYSDK_OFFSET(0x163228B0)
#define BEHEGJCEGIC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16322A20)
#define BEHEGJCEGIC_MIKFBHOGENJ_OFFSET UNITYSDK_OFFSET(0x16322910)
#define BEHEGJCEGIC_TICK_OFFSET UNITYSDK_OFFSET(0x16322BA0)

inline static constexpr unsigned int BEHEGJCEGIC_TypeDefinitionIndex = 67443;

	class BEHEGJCEGIC : public ::System::Object
	{
	public:
		::System::UInt32 LHJPKFDLIIN; // 0x10
		::System::UInt32 HEPGMFLMABD; // 0x14
		::System::UInt32 MLFCDJGHHLG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_CTOR_OFFSET))(this);
		}

		::System::Void FFAHBFPELBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_FFAHBFPELBG_OFFSET))(this);
		}

		::System::Void IABHCPENNGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_IABHCPENNGH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_TICK_OFFSET))(this, a1);
		}

		::System::Void CLPIJMILKHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_CLPIJMILKHP_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void MIKFBHOGENJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHEGJCEGIC_MIKFBHOGENJ_OFFSET))(this);
		}

	};
