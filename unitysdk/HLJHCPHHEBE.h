#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class BIDDFDEAEGB;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define HLJHCPHHEBE_CTOR_OFFSET UNITYSDK_OFFSET(0x198A19B0)
#define HLJHCPHHEBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198A19C0)
#define HLJHCPHHEBE_EJFOGHMDGDL_OFFSET UNITYSDK_OFFSET(0x198A2510)
#define HLJHCPHHEBE_EOMBAJELKLL_OFFSET UNITYSDK_OFFSET(0x198A2E70)
#define HLJHCPHHEBE_HCEIACLBOEF_OFFSET UNITYSDK_OFFSET(0x198A21F0)
#define HLJHCPHHEBE_HKHGNKGCDCI_OFFSET UNITYSDK_OFFSET(0x198A2C70)
#define HLJHCPHHEBE_HOBDHDEJLAJ_OFFSET UNITYSDK_OFFSET(0x198A1C10)
#define HLJHCPHHEBE_INOHICKCBAJ_OFFSET UNITYSDK_OFFSET(0x198A2050)
#define HLJHCPHHEBE_MPBCEPDCPCJ_OFFSET UNITYSDK_OFFSET(0x198A1E80)
#define HLJHCPHHEBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198A1B40)
#define HLJHCPHHEBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198A1A10)
#define HLJHCPHHEBE_PPKPKNNDDON_OFFSET UNITYSDK_OFFSET(0x198A1D60)
#define HLJHCPHHEBE_TICK_OFFSET UNITYSDK_OFFSET(0x198A1E20)

inline static constexpr unsigned int HLJHCPHHEBE_TypeDefinitionIndex = 53570;

	class HLJHCPHHEBE : public ::GELIALJDFBL
	{
	public:
		::BIDDFDEAEGB* NMCGNBHEBCL; // 0x18
		::RPG::GameCore::AdvPassByValueClientServer* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::String* OMKJJDMNMGJ; // 0x30
		::System::Int16 GMPIIDAOPCA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_TICK_OFFSET))(this, a1);
		}

		::System::Object* MPBCEPDCPCJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_MPBCEPDCPCJ_OFFSET))(this, a1);
		}

		::System::Object* INOHICKCBAJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_INOHICKCBAJ_OFFSET))(this, a1);
		}

		::System::Object* HCEIACLBOEF(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_HCEIACLBOEF_OFFSET))(this, a1);
		}

		::System::Object* EJFOGHMDGDL(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_EJFOGHMDGDL_OFFSET))(this, a1, a2);
		}

		::System::Object* HOBDHDEJLAJ(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_HOBDHDEJLAJ_OFFSET))(this, a1);
		}

		::System::Void HKHGNKGCDCI(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_HKHGNKGCDCI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskState EOMBAJELKLL(::System::String* a1, ::System::Object* a2)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_EOMBAJELKLL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskState PPKPKNNDDON(::System::String* a1, ::System::Object* a2)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + HLJHCPHHEBE_PPKPKNNDDON_OFFSET))(this, a1, a2);
		}

	};
