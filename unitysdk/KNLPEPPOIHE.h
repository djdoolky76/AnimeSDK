#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNLPEPPOIHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB588630)
#define KNLPEPPOIHE_DBOKPDIMFCO_OFFSET UNITYSDK_OFFSET(0xB5884B0)
#define KNLPEPPOIHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB587E60)
#define KNLPEPPOIHE_GAAKMIMKMCG_OFFSET UNITYSDK_OFFSET(0xB588190)
#define KNLPEPPOIHE_GIFJPNCJNJG_OFFSET UNITYSDK_OFFSET(0xB588130)
#define KNLPEPPOIHE_HFGFDFGCHPL_OFFSET UNITYSDK_OFFSET(0xB5881F0)
#define KNLPEPPOIHE_KJBNFIPEENL_OFFSET UNITYSDK_OFFSET(0xB587FE0)

	class KNLPEPPOIHE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* ANDNFCABFNG; // 0x10
		::System::UInt32 GELOAIIHFPD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 KJBNFIPEENL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_KJBNFIPEENL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GIFJPNCJNJG(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_GIFJPNCJNJG_OFFSET))(this, a1, a2);
		}

		::System::Void GAAKMIMKMCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_GAAKMIMKMCG_OFFSET))(this, a1);
		}

		::System::Void HFGFDFGCHPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_HFGFDFGCHPL_OFFSET))(this, a1);
		}

		::System::Int32 DBOKPDIMFCO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KNLPEPPOIHE_DBOKPDIMFCO_OFFSET))(this, a1, a2);
		}

	};
