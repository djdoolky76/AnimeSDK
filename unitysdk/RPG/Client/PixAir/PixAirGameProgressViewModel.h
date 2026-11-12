#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class JIAPCHALLMF;
class KIICEFFNEGG;
namespace RPG::Client::PixAir { class PixAirGameProgressNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE5A5100)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE5A63A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE5A63B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressViewModel_TypeDefinitionIndex = 82035;

	class PixAirGameProgressViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::JIAPCHALLMF* _GameFlowService; // 0x20
		::KIICEFFNEGG* _WindowService; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* _NodeViewModels_k__BackingField; // 0x30
		::System::UInt32 CurNodeID; // 0x38
		::System::Single Progress; // 0x3C
		::System::UInt32 CurAreaID; // 0x40
		::System::Void _ctor(::KIICEFFNEGG* a1, ::JIAPCHALLMF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KIICEFFNEGG*, ::JIAPCHALLMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* get_NodeViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET))(this);
		}

		::System::Void set_NodeViewModels(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET))(this, a1);
		}

	};
}
