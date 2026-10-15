#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMNBIGCFJJB.h"
class CNLNGOAONAC;
class FCOEMCEDLNL;
namespace System { class String; }

#define CNLNGOAONAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88F50)
#define CNLNGOAONAC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC88F60)
#define CNLNGOAONAC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC88F00)

inline static constexpr unsigned int CNLNGOAONAC_TypeDefinitionIndex = 21061;

	class CNLNGOAONAC : public ::BMNBIGCFJJB
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x30
		::System::Single LHLIGPFJFGE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLNGOAONAC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CNLNGOAONAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNLNGOAONAC*))((::PBYTE)hIl2Cpp + CNLNGOAONAC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CNLNGOAONAC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNLNGOAONAC*))((::PBYTE)hIl2Cpp + CNLNGOAONAC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
