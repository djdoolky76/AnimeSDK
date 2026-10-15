#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC28A0)
#define MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__ONGETREMOTEVERSION_B__0_OFFSET UNITYSDK_OFFSET(0x1BFC28B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RegionTranslationManager___c__DisplayClass14_1_TypeDefinitionIndex = 7959;

	template <typename T>
	class RegionTranslationManager___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 latestVersion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnGetRemoteVersion_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REGIONTRANSLATIONMANAGER___C__DISPLAYCLASS14_1__ONGETREMOTEVERSION_B__0_OFFSET))(this, a1);
		}

	};
}
