#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHPMBNFIENA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ELAHHHHOELH;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_BALLGAMEOPTIONSWIDGET02CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174BE8C0)

namespace MoleMole
{
	inline static constexpr unsigned int BallGameOptionsWidget02Context_TypeDefinitionIndex = 61197;

	class BallGameOptionsWidget02Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_2<::ELAHHHHOELH*, ::System::Int32>* refreshAction; // 0x28
		::System::Boolean IsNew; // 0x30
		::System::Boolean IsSelf; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 Index; // 0x34
		::System::Int32 OriginalBulletID; // 0x38
		::System::Int32 BulletID; // 0x3C
		::JHPMBNFIENA Usage; // 0x40
		::System::Int32 RefreshCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BALLGAMEOPTIONSWIDGET02CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
