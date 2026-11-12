#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPFKOIIMKBG.h"
#include "unitysdk/IMPNPPMLNPH.h"
class PJAKMIEOLKG;
namespace RPG::GameCore { class FreeStyleController; }
namespace System { class String; }

#define PJAKMIEOLKG_CAKNLCMBGDM_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA0580)
#define PJAKMIEOLKG_CAKNLCMBGDM_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xCBA1E10)

inline static constexpr unsigned int PJAKMIEOLKG_CAKNLCMBGDM_TypeDefinitionIndex = 58510;

	class PJAKMIEOLKG_CAKNLCMBGDM : public ::IMPNPPMLNPH
	{
	public:
		::System::String* JFAAAMANCDA; // 0x10
		::BPFKOIIMKBG HMBJNEIEIJK; // 0x18
		::System::Void _ctor(::PJAKMIEOLKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJAKMIEOLKG*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_CAKNLCMBGDM_CTOR_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::FreeStyleController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_CAKNLCMBGDM_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
