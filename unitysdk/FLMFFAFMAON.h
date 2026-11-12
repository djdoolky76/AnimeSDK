#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFEAIMEDPNF.h"
class CENEFPOMFKG;
class KKAOOEJHHHE;

#define FLMFFAFMAON_CLEAR_OFFSET UNITYSDK_OFFSET(0x167AEFC0)
#define FLMFFAFMAON_COIEFOLMLFO_OFFSET UNITYSDK_OFFSET(0x167AEF10)
#define FLMFFAFMAON_CTOR_OFFSET UNITYSDK_OFFSET(0x167AF040)

inline static constexpr unsigned int FLMFFAFMAON_TypeDefinitionIndex = 55407;

	class FLMFFAFMAON : public ::MFEAIMEDPNF
	{
	public:
		::CENEFPOMFKG* IJGAPCNDIAG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMFFAFMAON_CTOR_OFFSET))(this);
		}

		static ::System::Boolean COIEFOLMLFO(::KKAOOEJHHHE* a1, ::CENEFPOMFKG* a2)
		{
			return ((::System::Boolean(*)(::KKAOOEJHHHE*, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + FLMFFAFMAON_COIEFOLMLFO_OFFSET))(a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMFFAFMAON_CLEAR_OFFSET))(this);
		}

	};
