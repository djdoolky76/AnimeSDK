#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"

class F2004B69BD346DB7;
namespace ABC::ChessGame { class MonoChessGameScene; }
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define ABC_CHESSGAME_MONOCHESSGAMESCENE_E4F6C8F60A307E01_A142A368D0770A04_OFFSET UNITYSDK_OFFSET(0x1E8E1D0)
#define ABC_CHESSGAME_MONOCHESSGAMESCENE_E4F6C8F60A307E01__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int MonoChessGameScene_E4F6C8F60A307E01_TypeDefinitionIndex = 9569;

	class MonoChessGameScene_E4F6C8F60A307E01 : public ::System::Object
	{
	public:
		::ABC::ChessGame::MonoChessGameScene* A544919C800E2923; // 0x10
		::ABC::Collections::Pooled::PooledList_1<::System::UInt64>* E358657B22300BC5; // 0x18
		::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>* E044F9B0E4251284; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOCHESSGAMESCENE_E4F6C8F60A307E01__CTOR_OFFSET))(this);
		}

		::System::Void A142A368D0770A04(::System::UInt64 A2945EFB5D99316D, ::F2004B69BD346DB7* E98CFDE87EC698B3, ::UnityEngine::Object* A86A90C31A146E9C, ::System::Int32 AB2DD1142EEFB55A, ::EE42CBC98A7AE171::FE7248E34A936E8C E77E870649A35264)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_MONOCHESSGAMESCENE_E4F6C8F60A307E01_A142A368D0770A04_OFFSET))(this, A2945EFB5D99316D, E98CFDE87EC698B3, A86A90C31A146E9C, AB2DD1142EEFB55A, E77E870649A35264);
		}
	};
}
