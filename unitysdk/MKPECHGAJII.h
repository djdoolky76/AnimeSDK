#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTriggerTutorial; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MKPECHGAJII_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xB9A3FF0)
#define MKPECHGAJII_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A3B00)
#define MKPECHGAJII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A3B10)
#define MKPECHGAJII_ILJBJLGEMIP_OFFSET UNITYSDK_OFFSET(0xB9A4510)
#define MKPECHGAJII_NKLHGEFLFNG_OFFSET UNITYSDK_OFFSET(0xB9A4200)
#define MKPECHGAJII_ONLJNKGEGAN_OFFSET UNITYSDK_OFFSET(0xB9A4170)
#define MKPECHGAJII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A3C60)
#define MKPECHGAJII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9A3D00)
#define MKPECHGAJII_TICK_OFFSET UNITYSDK_OFFSET(0xB9A3E50)

inline static constexpr unsigned int MKPECHGAJII_TypeDefinitionIndex = 58933;

	class MKPECHGAJII : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* NNFJKIPMAAI; // 0x18
		::System::Action_1<::System::Boolean>* CIFOILLJFNF; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::WaitTriggerTutorial* OFKGLJOAMLD; // 0x30
		::System::Boolean HDPLEHFEOFC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + MKPECHGAJII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPECHGAJII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPECHGAJII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPECHGAJII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKPECHGAJII_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ONLJNKGEGAN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKPECHGAJII_ONLJNKGEGAN_OFFSET))(this, a1);
		}

		::System::Void NKLHGEFLFNG(::System::Action* a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MKPECHGAJII_NKLHGEFLFNG_OFFSET))(this, a1, a2);
		}

		::System::Void ILJBJLGEMIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPECHGAJII_ILJBJLGEMIP_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKPECHGAJII_BJLJAHMLKIO_OFFSET))(this, a1);
		}

	};
