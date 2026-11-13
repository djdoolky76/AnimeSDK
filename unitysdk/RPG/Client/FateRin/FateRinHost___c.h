#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9BC0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9BF0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1E0C9C30)
#define RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1E0C9C00)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c_TypeDefinitionIndex = 83303;

	class FateRinHost___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.FateRin", "<>c")->GetStaticField(0x5CA40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin", "<>c")->GetStaticField(0x5CA48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C_CTOR_OFFSET))(this);
		}

		::LBJLBMOOJGM* __cctor_b__0_0()
		{
			return ((::LBJLBMOOJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET))(this);
		}

		::System::Void _TransferAndAutoShowHouguMapPage_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET))(this);
		}

	};
}
