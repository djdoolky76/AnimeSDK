#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEEKBMHJIP.h"
#include "unitysdk/LMCJNMNOKOI.h"
#include "unitysdk/RPG/GameCore/GluttonyProgressLeaderType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPMIMKCKGME_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCA540)
#define PPMIMKCKGME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCCA470)
#define PPMIMKCKGME_DMAMKMGINKN_OFFSET UNITYSDK_OFFSET(0xCCCA060)
#define PPMIMKCKGME_EHJDLDJHAKF_OFFSET UNITYSDK_OFFSET(0xCCCA120)
#define PPMIMKCKGME_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xCCCA1C0)
#define PPMIMKCKGME_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCCCA510)
#define PPMIMKCKGME_JDOKPKPNICG_OFFSET UNITYSDK_OFFSET(0xCCCA390)
#define PPMIMKCKGME_OBCCKPGBLMJ_OFFSET UNITYSDK_OFFSET(0xCCCA410)
#define PPMIMKCKGME_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCCCA530)

inline static constexpr unsigned int PPMIMKCKGME_TypeDefinitionIndex = 73748;

	class PPMIMKCKGME : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LMCJNMNOKOI>* LICKJJHEKGG; // 0x10
		::AJEEKBMHJIP _Progress_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMIMKCKGME_CTOR_OFFSET))(this);
		}

		::System::Boolean DMAMKMGINKN(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PPMIMKCKGME_DMAMKMGINKN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EHJDLDJHAKF(::System::UInt32 a1, ::LMCJNMNOKOI a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LMCJNMNOKOI))((::PBYTE)hIl2Cpp + PPMIMKCKGME_EHJDLDJHAKF_OFFSET))(this, a1, a2);
		}

		::System::Boolean EJDAKAECODE(::System::Double a1, ::System::Double a2, ::System::Single a3, ::RPG::GameCore::GluttonyProgressLeaderType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Double, ::System::Single, ::RPG::GameCore::GluttonyProgressLeaderType))((::PBYTE)hIl2Cpp + PPMIMKCKGME_EJDAKAECODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OBCCKPGBLMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMIMKCKGME_OBCCKPGBLMJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMIMKCKGME_DISPOSE_OFFSET))(this);
		}

		::AJEEKBMHJIP get_Progress()
		{
			return ((::AJEEKBMHJIP(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMIMKCKGME_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::AJEEKBMHJIP a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJEEKBMHJIP))((::PBYTE)hIl2Cpp + PPMIMKCKGME_SET_PROGRESS_OFFSET))(this, a1);
		}

		static ::System::Boolean JDOKPKPNICG(::System::Double a1)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + PPMIMKCKGME_JDOKPKPNICG_OFFSET))(a1);
		}

	};
