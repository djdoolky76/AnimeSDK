#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class KJBIFIJCBCJ;
class NFAHODNHEKK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONCOEBGNBEJ_CGOAKGMEJLF_OFFSET UNITYSDK_OFFSET(0x1C7D9000)
#define ONCOEBGNBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8DF0)
#define ONCOEBGNBEJ_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C7D8E50)
#define ONCOEBGNBEJ_PJGPHHLECBL_OFFSET UNITYSDK_OFFSET(0x1C7D9AA0)
#define ONCOEBGNBEJ_TICK_OFFSET UNITYSDK_OFFSET(0x1C7D9E30)

inline static constexpr unsigned int ONCOEBGNBEJ_TypeDefinitionIndex = 37354;

	class ONCOEBGNBEJ : public ::HOCBJOJNLLC
	{
	public:
		::System::Collections::Generic::List_1<::KJBIFIJCBCJ*>* AHLBFGJGDCD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void CGOAKGMEJLF(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ_CGOAKGMEJLF_OFFSET))(this, a1);
		}

		::System::Void PJGPHHLECBL(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ_PJGPHHLECBL_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONCOEBGNBEJ_TICK_OFFSET))(this, a1);
		}

	};
