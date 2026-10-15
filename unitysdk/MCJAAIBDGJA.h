#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"
class EEPHEHAEFOF;
class FDLGMIIOACH;
class GMIFBFGDGJK;
class PBGNKMMDBGD;
class PBIGEJHGLEH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCJAAIBDGJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C719EE0)
#define MCJAAIBDGJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C719FB0)
#define MCJAAIBDGJA_GLJFNIPPLKE_OFFSET UNITYSDK_OFFSET(0x1C71A000)
#define MCJAAIBDGJA_PHOHPFCEGMM_OFFSET UNITYSDK_OFFSET(0x1C71A460)

inline static constexpr unsigned int MCJAAIBDGJA_TypeDefinitionIndex = 37291;

	class MCJAAIBDGJA : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* JLMHOPJLPMM; // 0x20
		::System::Void _ctor(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + MCJAAIBDGJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJAAIBDGJA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::MsgRetcode GLJFNIPPLKE(::System::UInt32 a1, ::PBIGEJHGLEH* a2, ::EEPHEHAEFOF* a3)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::PBIGEJHGLEH*, ::EEPHEHAEFOF*))((::PBYTE)hIl2Cpp + MCJAAIBDGJA_GLJFNIPPLKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PHOHPFCEGMM(::FDLGMIIOACH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDLGMIIOACH*))((::PBYTE)hIl2Cpp + MCJAAIBDGJA_PHOHPFCEGMM_OFFSET))(this, a1);
		}

	};
