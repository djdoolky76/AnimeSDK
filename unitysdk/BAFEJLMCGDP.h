#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAFEJLMCGDP_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDA460)
#define BAFEJLMCGDP_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15BDA1C0)
#define BAFEJLMCGDP_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x15BDA170)

inline static constexpr unsigned int BAFEJLMCGDP_TypeDefinitionIndex = 77477;

	class BAFEJLMCGDP : public ::FJNNEOKOCJD
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFEJLMCGDP_CTOR_OFFSET))(this);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + BAFEJLMCGDP_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + BAFEJLMCGDP_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
