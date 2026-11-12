#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJHDLFCJDM;
class IIDHAJDAMDE;
class OKGMPIHJKHP;
class PNCLOEBACJP;
namespace System { class String; }

#define FGEDCADJJFG_CTOR_OFFSET UNITYSDK_OFFSET(0x166789E0)
#define FGEDCADJJFG_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0x166792E0)
#define FGEDCADJJFG_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16679530)
#define FGEDCADJJFG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x166789F0)
#define FGEDCADJJFG_IMMJOEECOHG_OFFSET UNITYSDK_OFFSET(0x166795C0)

inline static constexpr unsigned int FGEDCADJJFG_TypeDefinitionIndex = 79943;

	class FGEDCADJJFG : public ::System::Object
	{
	public:
		::OKGMPIHJKHP* CEFLLELKFOP; // 0x10
		::System::Void _ctor(::OKGMPIHJKHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKGMPIHJKHP*))((::PBYTE)hIl2Cpp + FGEDCADJJFG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKKFFCBJOKM(::IIDHAJDAMDE* a1, ::CEJHDLFCJDM* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIDHAJDAMDE*, ::CEJHDLFCJDM*))((::PBYTE)hIl2Cpp + FGEDCADJJFG_HKKFFCBJOKM_OFFSET))(this, a1, a2);
		}

		::System::Void IMMJOEECOHG(::PNCLOEBACJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNCLOEBACJP*))((::PBYTE)hIl2Cpp + FGEDCADJJFG_IMMJOEECOHG_OFFSET))(this, a1);
		}

		static ::System::Boolean DLGFMPNEHGO(::IIDHAJDAMDE* a1, ::CEJHDLFCJDM* a2)
		{
			return ((::System::Boolean(*)(::IIDHAJDAMDE*, ::CEJHDLFCJDM*))((::PBYTE)hIl2Cpp + FGEDCADJJFG_DLGFMPNEHGO_OFFSET))(a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGEDCADJJFG_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
