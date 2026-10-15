#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLJLNCHJHB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGMLJMLDCCG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAFB30)
#define NGMLJMLDCCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBAF650)
#define NGMLJMLDCCG_FCFGFGFDFAD_OFFSET UNITYSDK_OFFSET(0xBBAF8A0)
#define NGMLJMLDCCG_GIGMCLEEFLO_OFFSET UNITYSDK_OFFSET(0xBBAF9B0)
#define NGMLJMLDCCG_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0xBBAF770)
#define NGMLJMLDCCG_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0xBBAF810)

	class NGMLJMLDCCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::INLJLNCHJHB>* OHJMBHDAJCA; // 0x10
		::System::Boolean EMJHNHGEFKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_KCIEEJPFOCM_OFFSET))(this);
		}

		::INLJLNCHJHB FCFGFGFDFAD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::INLJLNCHJHB(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_FCFGFGFDFAD_OFFSET))(this, a1);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void GIGMCLEEFLO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGMLJMLDCCG_GIGMCLEEFLO_OFFSET))(this, a1);
		}

	};
