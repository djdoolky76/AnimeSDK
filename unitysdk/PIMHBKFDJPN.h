#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHMGGIHEHJE;
class KPDKCEAFBHI;
class NFOMEHLKIHF;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PIMHBKFDJPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D50A0)
#define PIMHBKFDJPN_DDEGGHFLCAH_OFFSET UNITYSDK_OFFSET(0x1A9D5710)
#define PIMHBKFDJPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9D50B0)
#define PIMHBKFDJPN_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1A9D5990)
#define PIMHBKFDJPN_KHOCKDJLFHE_OFFSET UNITYSDK_OFFSET(0x1A9D5550)
#define PIMHBKFDJPN_KLNHCOAKPPN_OFFSET UNITYSDK_OFFSET(0x1A9D5860)
#define PIMHBKFDJPN_NAOOFAEGJKL_OFFSET UNITYSDK_OFFSET(0x1A9D5100)
#define PIMHBKFDJPN_OLFEPAPMGOJ_OFFSET UNITYSDK_OFFSET(0x1A9D5290)
#define PIMHBKFDJPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9D5230)
#define PIMHBKFDJPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A9D53D0)
#define PIMHBKFDJPN_TICK_OFFSET UNITYSDK_OFFSET(0x1A9D5430)

inline static constexpr unsigned int PIMHBKFDJPN_TypeDefinitionIndex = 59692;

	class PIMHBKFDJPN : public ::GELIALJDFBL
	{
	public:
		::GHMGGIHEHJE* KAKNDAGHGCN; // 0x18
		::NFOMEHLKIHF* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Single BPAIDCADMDO; // 0x30
		::System::Boolean DCEHBJJIFFD; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NFOMEHLKIHF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NFOMEHLKIHF*))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_GETCONFIG_OFFSET))(this);
		}

		::KPDKCEAFBHI* DDEGGHFLCAH()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_DDEGGHFLCAH_OFFSET))(this);
		}

		::System::Void OLFEPAPMGOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_OLFEPAPMGOJ_OFFSET))(this);
		}

		::System::Void NAOOFAEGJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_NAOOFAEGJKL_OFFSET))(this);
		}

		static ::System::Boolean KHOCKDJLFHE(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_KHOCKDJLFHE_OFFSET))(a1);
		}

		static ::System::Boolean KLNHCOAKPPN(::KPDKCEAFBHI* a1)
		{
			return ((::System::Boolean(*)(::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + PIMHBKFDJPN_KLNHCOAKPPN_OFFSET))(a1);
		}

	};
