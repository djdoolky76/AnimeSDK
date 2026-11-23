#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BBE31BC58EEFB23D;
namespace System { class Object; }

#define ABC_CHESSGAME_SERVERCHESSGAMESCENE_F114F8DC3617F261_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ABC_CHESSGAME_SERVERCHESSGAMESCENE_F114F8DC3617F261__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4AD0)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ServerChessGameScene_F114F8DC3617F261_TypeDefinitionIndex = 9881;

	class ServerChessGameScene_F114F8DC3617F261 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_SERVERCHESSGAMESCENE_F114F8DC3617F261__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::BBE31BC58EEFB23D* B9BBEA9B09FA5268)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBE31BC58EEFB23D*))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_SERVERCHESSGAMESCENE_F114F8DC3617F261_INVOKE_OFFSET))(this, B9BBEA9B09FA5268);
		}
	};
}
