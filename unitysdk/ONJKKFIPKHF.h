#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONJKKFIPKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E35E0)
#define ONJKKFIPKHF_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C7E3640)
#define ONJKKFIPKHF_GHDPPCEGIHA_OFFSET UNITYSDK_OFFSET(0x1C7E37A0)
#define ONJKKFIPKHF_HGCPMHECECO_OFFSET UNITYSDK_OFFSET(0x1C7E3F20)
#define ONJKKFIPKHF_TICK_OFFSET UNITYSDK_OFFSET(0x1C7E3C20)

inline static constexpr unsigned int ONJKKFIPKHF_TypeDefinitionIndex = 37346;

	class ONJKKFIPKHF : public ::HOCBJOJNLLC
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple*>* MEBHIJOEDHP; // 0x28
		::System::UInt64 ACEPCNAKOEH; // 0x30
		::System::Int32 PPENONBJDFO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJKKFIPKHF_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONJKKFIPKHF_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void GHDPPCEGIHA(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ONJKKFIPKHF_GHDPPCEGIHA_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONJKKFIPKHF_TICK_OFFSET))(this, a1);
		}

		::System::Void HGCPMHECECO(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ONJKKFIPKHF_HGCPMHECECO_OFFSET))(this, a1);
		}

	};
