#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MJALCNNMCMM_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0xB9624C0)
#define MJALCNNMCMM_ALMCLJGAGAC_OFFSET UNITYSDK_OFFSET(0xB962650)
#define MJALCNNMCMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9626D0)
#define MJALCNNMCMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB962690)
#define MJALCNNMCMM_ELEPDOMDAGA_1_OFFSET UNITYSDK_OFFSET(0xB962580)
#define MJALCNNMCMM_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB962530)
#define MJALCNNMCMM_FMEFKNOAAMK_OFFSET UNITYSDK_OFFSET(0xB9624D0)
#define MJALCNNMCMM_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB962610)
#define MJALCNNMCMM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB9624E0)
#define MJALCNNMCMM_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xB9625D0)

	class MJALCNNMCMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_CTOR_OFFSET))(this);
		}

		::System::Boolean AKOIHNHCOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_AKOIHNHCOIA_OFFSET))(this);
		}

		::System::Int32 FMEFKNOAAMK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_FMEFKNOAAMK_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJALCNNMCMM_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJALCNNMCMM_ELEPDOMDAGA_OFFSET))(this, a1);
		}

		::System::Void ELEPDOMDAGA_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MJALCNNMCMM_ELEPDOMDAGA_1_OFFSET))(this, a1, a2);
		}

		::System::Void OHCJOIANPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_OHCJOIANPFG_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_HFKFNFKIEON_OFFSET))(this);
		}

		::System::String* ALMCLJGAGAC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_ALMCLJGAGAC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJALCNNMCMM_DISPOSE_OFFSET))(this);
		}

	};
