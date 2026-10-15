#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class JIAPCHALLMF;
class KIICEFFNEGG;
namespace RPG::Client::PixAir { class PixAirGameProgressNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB4CEF0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_GET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDB4E190)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSVIEWMODEL_SET_NODEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xDB4E1A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressViewModel_TypeDefinitionIndex = 79258;

	class PixAirGameProgressViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* _NodeViewModels_k__BackingField; // 0x20
		::KIICEFFNEGG* _WindowService; // 0x28
		::JIAPCHALLMF* _GameFlowService; // 0x30
		::System::Single Progress; // 0x38
		::System::UInt32 CurAreaID; // 0x3C
		::System::UInt32 CurNodeID; // 0x40
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
