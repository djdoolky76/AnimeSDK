#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/OIPMNNAHIFP.h"
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class IPromise; }

#define HLKOBNFAMOI_CFMCHKEBNBA_OFFSET UNITYSDK_OFFSET(0x15D63250)
#define HLKOBNFAMOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D63E00)
#define HLKOBNFAMOI_GJKAOFGFAHJ_OFFSET UNITYSDK_OFFSET(0x15D63620)
#define HLKOBNFAMOI_NHFGEDAILEH_OFFSET UNITYSDK_OFFSET(0x15D63A60)
#define HLKOBNFAMOI_NIBDLNNMANG_OFFSET UNITYSDK_OFFSET(0x15D63440)
#define HLKOBNFAMOI_START_OFFSET UNITYSDK_OFFSET(0x15D631C0)
#define HLKOBNFAMOI_STOP_OFFSET UNITYSDK_OFFSET(0x15D63200)

	class HLKOBNFAMOI : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CFMCHKEBNBA(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_CFMCHKEBNBA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NIBDLNNMANG(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_NIBDLNNMANG_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GJKAOFGFAHJ(::OIPMNNAHIFP a1, ::Il2CppArray<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::Il2CppArray<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_GJKAOFGFAHJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NHFGEDAILEH(::OIPMNNAHIFP a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + HLKOBNFAMOI_NHFGEDAILEH_OFFSET))(this, a1, a2);
		}

	};
