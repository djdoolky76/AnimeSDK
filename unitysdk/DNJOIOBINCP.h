#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RequestSetServerGroupPropertyV2; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DNJOIOBINCP_CTOR_OFFSET UNITYSDK_OFFSET(0x11963B20)
#define DNJOIOBINCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11964050)
#define DNJOIOBINCP_OBBAMDNOEHC_OFFSET UNITYSDK_OFFSET(0x11964090)
#define DNJOIOBINCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11963B90)
#define DNJOIOBINCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11963B30)
#define DNJOIOBINCP_TICK_OFFSET UNITYSDK_OFFSET(0x11963FF0)

	class DNJOIOBINCP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* BCEOFGNHABE; // 0x18
		::KFELGAIGHAP* MACKGFGJMLE; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::RequestSetServerGroupPropertyV2* OFKGLJOAMLD; // 0x30
		::System::UInt32 GILPDKAEMGP; // 0x38
		::System::UInt32 DLHOKIMOHFG; // 0x3C
		::System::UInt32 PEEFHNHDBMF; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + DNJOIOBINCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJOIOBINCP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJOIOBINCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNJOIOBINCP_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJOIOBINCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OBBAMDNOEHC(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DNJOIOBINCP_OBBAMDNOEHC_OFFSET))(this, a1, a2);
		}

	};
