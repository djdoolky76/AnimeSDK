#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C6E5F0)
#define LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6E630)
#define LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET UNITYSDK_OFFSET(0x16C6E640)

inline static constexpr unsigned int LevelUpProgressWidget___c_TypeDefinitionIndex = 62399;

class LevelUpProgressWidget___c : public ::System::Object
{
public:
	static ::DG::Tweening::TweenCallback** StaticGet___9__13_1()
	{
		return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x3BBF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LevelUpProgressWidget___c_TypeDefinitionIndex)->GetStaticField(0x3BBF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__CTOR_OFFSET))(this);
	}

	::System::Void _ProgressBarAnim_b__13_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEVELUPPROGRESSWIDGET___C__PROGRESSBARANIM_B__13_1_OFFSET))(this);
	}
};
