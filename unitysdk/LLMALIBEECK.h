#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGOPCAEJMN.h"
#include "unitysdk/JHDEHAPEDIH.h"
#include "unitysdk/JHPEPDKHCJP.h"

class HCIANHKCFIL;
class LONKKOMHFMD;
class NNEBEOAFJLE;
namespace Foundation { template <typename T> class AggregateObject_1; }

#define LLMALIBEECK_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1850F650)
#define LLMALIBEECK_LBCDGHMEJMM_OFFSET UNITYSDK_OFFSET(0x1850F850)
#define LLMALIBEECK_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x1850F8E0)
#define LLMALIBEECK_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1850F7C0)
#define LLMALIBEECK_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1850F5E0)
#define LLMALIBEECK_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1850F1B0)
#define LLMALIBEECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1850F7B0)

inline static constexpr unsigned int LLMALIBEECK_TypeDefinitionIndex = 46733;

class LLMALIBEECK : public ::JHPEPDKHCJP
{
public:
	::NNEBEOAFJLE* NGGFFANKIKE; // 0x10
	::JHDEHAPEDIH PMKINFHDLFD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMALIBEECK__CTOR_OFFSET))(this);
	}

	::System::Void OnInitialized(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* JPMDNBICBON)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + LLMALIBEECK_ONINITIALIZED_OFFSET))(this, JPMDNBICBON);
	}

	::System::Void OKLLFEIJKHN(::LONKKOMHFMD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + LLMALIBEECK_OKLLFEIJKHN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HCIANHKCFIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + LLMALIBEECK_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NIGDIMFIAEJ(::HCIANHKCFIL* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HCIANHKCFIL*))((::PBYTE)hIl2Cpp + LLMALIBEECK_NIGDIMFIAEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LBCDGHMEJMM(::Foundation::AggregateObject_1<::CNGOPCAEJMN>* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AggregateObject_1<::CNGOPCAEJMN>*))((::PBYTE)hIl2Cpp + LLMALIBEECK_LBCDGHMEJMM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NEJABFNFKIN(::LONKKOMHFMD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LONKKOMHFMD*))((::PBYTE)hIl2Cpp + LLMALIBEECK_NEJABFNFKIN_OFFSET))(this, MIALFKCCCPI);
	}
};
