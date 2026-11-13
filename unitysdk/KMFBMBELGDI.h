#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMFBMBELGDI_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0x17BA9360)
#define KMFBMBELGDI_CTOR_OFFSET UNITYSDK_OFFSET(0x17BA9A90)
#define KMFBMBELGDI_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x17BA93B0)
#define KMFBMBELGDI_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x17BA9310)

inline static constexpr unsigned int KMFBMBELGDI_TypeDefinitionIndex = 80228;

	class KMFBMBELGDI : public ::FJNNEOKOCJD
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFBMBELGDI_CTOR_OFFSET))(this);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + KMFBMBELGDI_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + KMFBMBELGDI_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + KMFBMBELGDI_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
