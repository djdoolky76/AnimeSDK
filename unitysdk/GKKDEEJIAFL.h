#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKKDEEJIAFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D9760)
#define GKKDEEJIAFL_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x1A8D94B0)
#define GKKDEEJIAFL_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x1A8D9460)

inline static constexpr unsigned int GKKDEEJIAFL_TypeDefinitionIndex = 80206;

	class GKKDEEJIAFL : public ::FJNNEOKOCJD
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKKDEEJIAFL_CTOR_OFFSET))(this);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + GKKDEEJIAFL_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + GKKDEEJIAFL_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
