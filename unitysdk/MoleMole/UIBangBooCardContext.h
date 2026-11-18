#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJMLLONLLEG;
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGBOOCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191856C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooCardContext_TypeDefinitionIndex = 62183;

	class UIBangBooCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::CJMLLONLLEG*>* OnPointerDown; // 0x28
		::Foundation::AssetPath BangBooIconPath; // 0x30
		::Foundation::AssetPath SkillIcon; // 0x40
		::System::Func_1<::System::Boolean>* IsFeeEnough; // 0x50
		::System::Int32 TemplateID; // 0x58
		::System::Int32 DeployCooldown; // 0x5C
		::System::Int32 InitialFee; // 0x60
		::System::Boolean IsRepeat; // 0x64
		::System::Byte _padding0[0x3];
		::System::Int32 DeployCost; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
