#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KPOPHKNMCAJ_CCCKHPAJFEA_OFFSET UNITYSDK_OFFSET(0xB5D2280)
#define KPOPHKNMCAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D40B0)

inline static constexpr unsigned int KPOPHKNMCAJ_TypeDefinitionIndex = 79695;

	class KPOPHKNMCAJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOPHKNMCAJ_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* CCCKHPAJFEA(::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*))((::PBYTE)hIl2Cpp + KPOPHKNMCAJ_CCCKHPAJFEA_OFFSET))(this, a1);
		}

	};
