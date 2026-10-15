#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_JIPLAJGFIEB_CLEAR_OFFSET UNITYSDK_OFFSET(0xD445DA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_JIPLAJGFIEB_CTOR_OFFSET UNITYSDK_OFFSET(0xD445EE0)

namespace RPG::Client::LittleGame::FiveDim
{
	class FiveDimGridPropView_JIPLAJGFIEB : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::RPG::PoolList_1<::System::Object*>*>* ODFADCFOJKH; // 0x10
		::UnityEngine::GameObject* OAGHFEOLJOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_JIPLAJGFIEB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_JIPLAJGFIEB_CLEAR_OFFSET))(this);
		}

	};
}
