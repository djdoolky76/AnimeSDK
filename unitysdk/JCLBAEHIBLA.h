#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAANIPGJEB;
class GFCOHGKHIPJ;
class HAFCMNPMFGO;
class NIMCJKKDGNG;
class PNPEAAAFLAA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCLBAEHIBLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C130880)
#define JCLBAEHIBLA_EMPOAKIKBDI_OFFSET UNITYSDK_OFFSET(0x1C1307D0)

inline static constexpr unsigned int JCLBAEHIBLA_TypeDefinitionIndex = 37197;

	class JCLBAEHIBLA : public ::System::Object
	{
	public:
		::NIMCJKKDGNG* ADCPPJNMGJP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HAFCMNPMFGO*>* GEGKCAOLMOH; // 0x18
		::BFAANIPGJEB* MJGPGGNMDDC; // 0x20
		::PNPEAAAFLAA* GNLAGMCLFFI; // 0x28
		::GFCOHGKHIPJ* HHCFJMFDLAF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLBAEHIBLA_CTOR_OFFSET))(this);
		}

		::HAFCMNPMFGO* EMPOAKIKBDI(::System::UInt32 a1)
		{
			return ((::HAFCMNPMFGO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCLBAEHIBLA_EMPOAKIKBDI_OFFSET))(this, a1);
		}

	};
