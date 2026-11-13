#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIAIIJCJMP;
namespace RPG::GameCore { class ChimeraDuelRoundRow; }
namespace System { class String; }

#define OFIAIIJCJMP_BKOIDOGAJIL_OFFSET UNITYSDK_OFFSET(0x1766A510)
#define OFIAIIJCJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1766A130)
#define OFIAIIJCJMP_FEKIPCDCOFL_OFFSET UNITYSDK_OFFSET(0x1766A1B0)
#define OFIAIIJCJMP_GET_ID_OFFSET UNITYSDK_OFFSET(0x17669E90)
#define OFIAIIJCJMP_HJCMCAFOHEL_OFFSET UNITYSDK_OFFSET(0x17669F00)
#define OFIAIIJCJMP_JPBEGDPCKPM_OFFSET UNITYSDK_OFFSET(0x1766A140)
#define OFIAIIJCJMP_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x1766A0E0)
#define OFIAIIJCJMP_NBPOCMGMKMN_OFFSET UNITYSDK_OFFSET(0x1766A040)
#define OFIAIIJCJMP_OLDLDICBGNH_OFFSET UNITYSDK_OFFSET(0x17669FA0)
#define OFIAIIJCJMP_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0x17669EA0)

inline static constexpr unsigned int OFIAIIJCJMP_TypeDefinitionIndex = 64819;

	class OFIAIIJCJMP : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelRoundRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChimeraDuelRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_PDAENODHFCM_OFFSET))(this);
		}

		::System::Int32 HJCMCAFOHEL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_HJCMCAFOHEL_OFFSET))(this);
		}

		::System::Int32 OLDLDICBGNH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_OLDLDICBGNH_OFFSET))(this);
		}

		::System::String* NBPOCMGMKMN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_NBPOCMGMKMN_OFFSET))(this);
		}

		static ::OFIAIIJCJMP* LHLALAKKKKJ(::System::UInt32 a1)
		{
			return ((::OFIAIIJCJMP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_LHLALAKKKKJ_OFFSET))(a1);
		}

		::System::UInt32 JPBEGDPCKPM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_JPBEGDPCKPM_OFFSET))(this);
		}

		::System::UInt32 FEKIPCDCOFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_FEKIPCDCOFL_OFFSET))(this);
		}

		::System::UInt32 BKOIDOGAJIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP_BKOIDOGAJIL_OFFSET))(this);
		}

	};
