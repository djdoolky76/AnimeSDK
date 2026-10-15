#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class MonoInflatableFighter; }

#define JFDAODCOGBE_ABGBJEKGFIH_OFFSET UNITYSDK_OFFSET(0x16646940)
#define JFDAODCOGBE_ALGFIADBKEJ_OFFSET UNITYSDK_OFFSET(0x16646A00)
#define JFDAODCOGBE_ALJBNIIKPGP_OFFSET UNITYSDK_OFFSET(0x166469F0)
#define JFDAODCOGBE_CAPHDMKLLGA_OFFSET UNITYSDK_OFFSET(0x166469B0)
#define JFDAODCOGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x166465B0)
#define JFDAODCOGBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16646620)
#define JFDAODCOGBE_GET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x16646A10)
#define JFDAODCOGBE_GLOFILPIOCO_OFFSET UNITYSDK_OFFSET(0x16646830)
#define JFDAODCOGBE_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0x166465C0)
#define JFDAODCOGBE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16646670)
#define JFDAODCOGBE_MCPDPHFINIG_OFFSET UNITYSDK_OFFSET(0x16646890)
#define JFDAODCOGBE_OBEGGMAPFOL_OFFSET UNITYSDK_OFFSET(0x166468F0)
#define JFDAODCOGBE_SET_ISFROZEN_OFFSET UNITYSDK_OFFSET(0x16646A20)

	class JFDAODCOGBE : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x10
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
		::System::Single BNNFCGBBNNC; // 0x20
		::System::Boolean _IsFrozen_k__BackingField; // 0x24
		::System::Boolean CKAFABAMHKD; // 0x25
		::System::Boolean FDDFHBKGJDE; // 0x26
		::System::Byte _padding0[0x1];
		::System::Single IADFGIDGBGH; // 0x28
		::System::Single LLLIALEGIJD; // 0x2C
		::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::ACGKMEPLIBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + JFDAODCOGBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDAODCOGBE_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GLOFILPIOCO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDAODCOGBE_GLOFILPIOCO_OFFSET))(this, a1);
		}

		::System::Void MCPDPHFINIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDAODCOGBE_MCPDPHFINIG_OFFSET))(this, a1);
		}

		::System::Void OBEGGMAPFOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDAODCOGBE_OBEGGMAPFOL_OFFSET))(this, a1);
		}

		::System::Void ABGBJEKGFIH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDAODCOGBE_ABGBJEKGFIH_OFFSET))(this, a1);
		}

		::System::Void CAPHDMKLLGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_CAPHDMKLLGA_OFFSET))(this);
		}

		::System::Single ALJBNIIKPGP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_ALJBNIIKPGP_OFFSET))(this);
		}

		::System::Single ALGFIADBKEJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_ALGFIADBKEJ_OFFSET))(this);
		}

		::System::Boolean get_IsFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAODCOGBE_GET_ISFROZEN_OFFSET))(this);
		}

		::System::Void set_IsFrozen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDAODCOGBE_SET_ISFROZEN_OFFSET))(this, a1);
		}

	};
