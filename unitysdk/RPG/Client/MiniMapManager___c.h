#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGIBKJLGLIC;
namespace RPG::Client { class MiniMapZone; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MINIMAPMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6B7EC0)
#define RPG_CLIENT_MINIMAPMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD6B7EF0)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET UNITYSDK_OFFSET(0xD6B7F00)
#define RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET UNITYSDK_OFFSET(0xD6B8420)
#define RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET UNITYSDK_OFFSET(0xD6B8620)

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager___c_TypeDefinitionIndex = 60659;

	class MiniMapManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MiniMapZone*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::RPG::Client::MiniMapZone*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52EA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52EA8);
		}

		static ::System::Comparison_1<::JGIBKJLGLIC*>** StaticGet___9__20_1()
		{
			return (::System::Comparison_1<::JGIBKJLGLIC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52EB0);
		}

		static ::System::Comparison_1<::JGIBKJLGLIC*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::JGIBKJLGLIC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x52EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMiniMapIcons_b__20_0(::JGIBKJLGLIC* a1, ::JGIBKJLGLIC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JGIBKJLGLIC*, ::JGIBKJLGLIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetMiniMapIcons_b__20_1(::JGIBKJLGLIC* a1, ::JGIBKJLGLIC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JGIBKJLGLIC*, ::JGIBKJLGLIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C__GETMINIMAPICONS_B__20_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __RegisterZoneInternal_b__25_0(::RPG::Client::MiniMapZone* a1, ::RPG::Client::MiniMapZone* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MiniMapZone*, ::RPG::Client::MiniMapZone*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPMANAGER___C___REGISTERZONEINTERNAL_B__25_0_OFFSET))(this, a1, a2);
		}

	};
}
