#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define DOENEFFFOHP_CGNCFLKFJEB_OFFSET UNITYSDK_OFFSET(0x11FE2550)
#define DOENEFFFOHP_CICPJCBEDCL_OFFSET UNITYSDK_OFFSET(0x11FE2060)
#define DOENEFFFOHP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE2030)
#define DOENEFFFOHP_DHDAAOPOFMA_OFFSET UNITYSDK_OFFSET(0x11FE2190)
#define DOENEFFFOHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE2140)
#define DOENEFFFOHP_GPGKNDKGGOK_OFFSET UNITYSDK_OFFSET(0x11FE2430)
#define DOENEFFFOHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FE2280)
#define DOENEFFFOHP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FE22D0)
#define DOENEFFFOHP_TICK_OFFSET UNITYSDK_OFFSET(0x11FE2320)

inline static constexpr unsigned int DOENEFFFOHP_TypeDefinitionIndex = 58883;

	class DOENEFFFOHP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* HCCMEMNAKAE; // 0x20
		::RPG::GameCore::WaitDialogueEvent* OFKGLJOAMLD; // 0x28
		::System::Boolean CGCPJBPKEOF; // 0x30
		::System::Boolean EJNDLAMCBKJ; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 EBCMGIJNDPN; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + DOENEFFFOHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENEFFFOHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENEFFFOHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENEFFFOHP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOENEFFFOHP_TICK_OFFSET))(this, a1);
		}

		::System::Void GPGKNDKGGOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOENEFFFOHP_GPGKNDKGGOK_OFFSET))(this, a1);
		}

		::System::Void CGNCFLKFJEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOENEFFFOHP_CGNCFLKFJEB_OFFSET))(this, a1);
		}

		::System::Void CICPJCBEDCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENEFFFOHP_CICPJCBEDCL_OFFSET))(this);
		}

		::System::Void DHDAAOPOFMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOENEFFFOHP_DHDAAOPOFMA_OFFSET))(this);
		}

	};
