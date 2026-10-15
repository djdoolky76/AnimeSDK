#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLLMCOEIGHH_BBCIDLBBNMD_OFFSET UNITYSDK_OFFSET(0x15D581F0)
#define HLLMCOEIGHH_BDALJIHDBEM_OFFSET UNITYSDK_OFFSET(0x15D58D20)
#define HLLMCOEIGHH_BPKBLALPIMC_OFFSET UNITYSDK_OFFSET(0x15D583B0)
#define HLLMCOEIGHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D58180)
#define HLLMCOEIGHH_DACGAANLLOB_OFFSET UNITYSDK_OFFSET(0x15D58EC0)
#define HLLMCOEIGHH_DHKNDMPPJLJ_OFFSET UNITYSDK_OFFSET(0x15D58B30)
#define HLLMCOEIGHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D58350)
#define HLLMCOEIGHH_FICIADJMBMF_OFFSET UNITYSDK_OFFSET(0x15D58DB0)
#define HLLMCOEIGHH_FJKBCDLDMCA_OFFSET UNITYSDK_OFFSET(0x15D58750)
#define HLLMCOEIGHH_IPNELJOMCLE_OFFSET UNITYSDK_OFFSET(0x15D58170)
#define HLLMCOEIGHH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15D58630)
#define HLLMCOEIGHH_KGKOPNIPJKK_OFFSET UNITYSDK_OFFSET(0x15D58830)
#define HLLMCOEIGHH_LCNMIMPGOME_OFFSET UNITYSDK_OFFSET(0x15D58510)
#define HLLMCOEIGHH_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0x15D58950)

inline static constexpr unsigned int HLLMCOEIGHH_TypeDefinitionIndex = 60893;

	class HLLMCOEIGHH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MBABJFEENPB; // 0x10
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x18
		::System::Single GNNENFMJMAD; // 0x20
		::System::Single FAILINGJIPB; // 0x24
		::System::Boolean LMDNIFIABKM; // 0x28
		::System::Boolean OFAADGJDKAM; // 0x29
		::System::Boolean CPEPEIGBFKK; // 0x2A
		::System::Boolean NFBLAGIGBLC; // 0x2B
		// static const ::System::String* PKMDEMDHPPB; // 0x0
		// static const ::System::String* GBNIHAIINFA; // 0x0
		// static const ::System::Object OCILAIPHOEK; // 0x0
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IPNELJOMCLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_IPNELJOMCLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_DISPOSE_OFFSET))(this);
		}

		::System::Void LCNMIMPGOME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_LCNMIMPGOME_OFFSET))(this);
		}

		::System::Void BPKBLALPIMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_BPKBLALPIMC_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KGKOPNIPJKK(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_KGKOPNIPJKK_OFFSET))(this, a1, a2);
		}

		::System::Void BBCIDLBBNMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_BBCIDLBBNMD_OFFSET))(this);
		}

		::System::Void FJKBCDLDMCA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_FJKBCDLDMCA_OFFSET))(this, a1);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		::System::Void DHKNDMPPJLJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_DHKNDMPPJLJ_OFFSET))(this, a1);
		}

		::System::Void FICIADJMBMF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_FICIADJMBMF_OFFSET))(this, a1);
		}

		::System::Void DACGAANLLOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_DACGAANLLOB_OFFSET))(this, a1);
		}

		::System::Void BDALJIHDBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMCOEIGHH_BDALJIHDBEM_OFFSET))(this);
		}

	};
