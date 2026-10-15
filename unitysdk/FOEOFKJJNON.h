#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }

#define FOEOFKJJNON_CTOR_OFFSET UNITYSDK_OFFSET(0x158DC2F0)
#define FOEOFKJJNON_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x158DC3E0)
#define FOEOFKJJNON___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x158DC420)

inline static constexpr unsigned int FOEOFKJJNON_TypeDefinitionIndex = 59273;

	class FOEOFKJJNON : public ::System::Object
	{
	public:
		::System::Boolean INJJGMIGFFD; // 0x10
		::System::Void _ctor(::RPG::Client::Promises::IPromise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + FOEOFKJJNON_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEOFKJJNON_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEOFKJJNON___CTOR_B__0_0_OFFSET))(this);
		}

	};
