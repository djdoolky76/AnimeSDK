#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define DOENEFFFOHP_CGNCFLKFJEB_OFFSET UNITYSDK_OFFSET(0x11FDD150)
#define DOENEFFFOHP_CICPJCBEDCL_OFFSET UNITYSDK_OFFSET(0x11FDCC60)
#define DOENEFFFOHP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDCC30)
#define DOENEFFFOHP_DHDAAOPOFMA_OFFSET UNITYSDK_OFFSET(0x11FDCD90)
#define DOENEFFFOHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FDCD40)
#define DOENEFFFOHP_GPGKNDKGGOK_OFFSET UNITYSDK_OFFSET(0x11FDD030)
#define DOENEFFFOHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FDCE80)
#define DOENEFFFOHP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FDCED0)
#define DOENEFFFOHP_TICK_OFFSET UNITYSDK_OFFSET(0x11FDCF20)

inline static constexpr unsigned int DOENEFFFOHP_TypeDefinitionIndex = 58883;

	class DOENEFFFOHP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitDialogueEvent* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::String* HCCMEMNAKAE; // 0x28
		::System::Int32 EBCMGIJNDPN; // 0x30
		::System::Boolean EJNDLAMCBKJ; // 0x34
		::System::Boolean CGCPJBPKEOF; // 0x35
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
