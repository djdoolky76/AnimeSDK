#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NJEIPCDKLMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC0D7B0)
#define NJEIPCDKLMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0D7F0)
#define NJEIPCDKLMG___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET UNITYSDK_OFFSET(0xBC0D800)

	class NJEIPCDKLMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E40);
		}

		static ::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEIPCDKLMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJEIPCDKLMG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetDiceSurfaceDisplayDataList_b__17_0(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + NJEIPCDKLMG___C__GETDICESURFACEDISPLAYDATALIST_B__17_0_OFFSET))(this, a1);
		}

	};
