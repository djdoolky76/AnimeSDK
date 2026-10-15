#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define PDGKDJGGMDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BE480)
#define PDGKDJGGMDF_EIBMILLGNJA_OFFSET UNITYSDK_OFFSET(0x1C7BE710)
#define PDGKDJGGMDF_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C7BE490)
#define PDGKDJGGMDF_TICK_OFFSET UNITYSDK_OFFSET(0x1C7BE630)

inline static constexpr unsigned int PDGKDJGGMDF_TypeDefinitionIndex = 37352;

	class PDGKDJGGMDF : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGKDJGGMDF_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + PDGKDJGGMDF_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + PDGKDJGGMDF_TICK_OFFSET))(this, a1);
		}

		::System::Boolean EIBMILLGNJA(::NFAHODNHEKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + PDGKDJGGMDF_EIBMILLGNJA_OFFSET))(this, a1);
		}

	};
