#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GHMGGIHEHJE;
class KPDKCEAFBHI;
class NFOMEHLKIHF;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define PIMHBKFDJPN_CTOR_OFFSET UNITYSDK_OFFSET(0xCB98630)
#define PIMHBKFDJPN_DDEGGHFLCAH_OFFSET UNITYSDK_OFFSET(0xCB98CA0)
#define PIMHBKFDJPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB98640)
#define PIMHBKFDJPN_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xCB98F30)
#define PIMHBKFDJPN_KHOCKDJLFHE_OFFSET UNITYSDK_OFFSET(0xCB98AE0)
#define PIMHBKFDJPN_KLNHCOAKPPN_OFFSET UNITYSDK_OFFSET(0xCB98E00)
#define PIMHBKFDJPN_NAOOFAEGJKL_OFFSET UNITYSDK_OFFSET(0xCB98690)
#define PIMHBKFDJPN_OLFEPAPMGOJ_OFFSET UNITYSDK_OFFSET(0xCB98820)
#define PIMHBKFDJPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB987C0)
#define PIMHBKFDJPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB98960)
#define PIMHBKFDJPN_TICK_OFFSET UNITYSDK_OFFSET(0xCB989C0)

inline static constexpr unsigned int PIMHBKFDJPN_TypeDefinitionIndex = 59692;

	class PIMHBKFDJPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GHMGGIHEHJE* KAKNDAGHGCN; // 0x20
		::NFOMEHLKIHF* OFKGLJOAMLD; // 0x28
		::System::Boolean DCEHBJJIFFD; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single BPAIDCADMDO; // 0x34
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
