#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ConvinceShowToast; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define AKHDBDDAIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCE7A0)
#define AKHDBDDAIKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CCEA50)
#define AKHDBDDAIKG_DPCOKBDIADP_OFFSET UNITYSDK_OFFSET(0x12CCE980)
#define AKHDBDDAIKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCE7B0)
#define AKHDBDDAIKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CCEAA0)
#define AKHDBDDAIKG_TICK_OFFSET UNITYSDK_OFFSET(0x12CCEAF0)
#define AKHDBDDAIKG__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x12CCEB50)

inline static constexpr unsigned int AKHDBDDAIKG_TypeDefinitionIndex = 52712;

	class AKHDBDDAIKG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ConvinceShowToast* OFKGLJOAMLD; // 0x20
		::System::Boolean BFIPMHHFJJH; // 0x28
		// static const ::System::String* PAEOOHJEGME; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceShowToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceShowToast*))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_TICK_OFFSET))(this, a1);
		}

		::System::String* DPCOKBDIADP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHDBDDAIKG_DPCOKBDIADP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHDBDDAIKG__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
