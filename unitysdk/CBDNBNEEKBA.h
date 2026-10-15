#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class DEJDAPDFMIE;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CBDNBNEEKBA_CHOOMNGLJHI_OFFSET UNITYSDK_OFFSET(0xC49FB90)
#define CBDNBNEEKBA_CTOR_OFFSET UNITYSDK_OFFSET(0xC49F860)
#define CBDNBNEEKBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC49F870)
#define CBDNBNEEKBA_GGEPLHACEKJ_OFFSET UNITYSDK_OFFSET(0xC49FD20)
#define CBDNBNEEKBA_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0xC4A0020)
#define CBDNBNEEKBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC49FA00)
#define CBDNBNEEKBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC49F900)
#define CBDNBNEEKBA_TICK_OFFSET UNITYSDK_OFFSET(0xC49FEB0)

inline static constexpr unsigned int CBDNBNEEKBA_TypeDefinitionIndex = 52611;

	class CBDNBNEEKBA : public ::GELIALJDFBL
	{
	public:
		::MJKLAEILHPK OLMFJLICIIA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::DEJDAPDFMIE* OFKGLJOAMLD; // 0x50
		// static const ::System::String* MNGCMKOMHNP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DEJDAPDFMIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DEJDAPDFMIE*))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_TICK_OFFSET))(this, a1);
		}

		::System::Void CHOOMNGLJHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_CHOOMNGLJHI_OFFSET))(this);
		}

		::System::Void GGEPLHACEKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_GGEPLHACEKJ_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBDNBNEEKBA_JLNIGEMKDJH_OFFSET))(this, a1);
		}

	};
