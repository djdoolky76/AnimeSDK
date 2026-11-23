#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::ChessGame { class ChessAnimIKMonoComponent_A971AE4ABA3ACE50; }
namespace ABC::ChessGame { class ChessAnimTargetIKPluginConfig; }
namespace AF69BF3B1319FD97 { class E7C7C5AA3043BA8D; }
namespace E68AA4EB51923C98 { class EBE679782781F278; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_A160B0D69EED09A9_OFFSET UNITYSDK_OFFSET(0x1E3C9F0)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_AA90BF351B002C08_OFFSET UNITYSDK_OFFSET(0x1E3A780)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B132932C21EBBBC0_OFFSET UNITYSDK_OFFSET(0x1E3C4F0)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B272E4219AB4D056_OFFSET UNITYSDK_OFFSET(0x1E3AC70)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B501B79512BB7CEB_OFFSET UNITYSDK_OFFSET(0x1E3C7E0)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B623AC72C4BB3D65_OFFSET UNITYSDK_OFFSET(0x1E3AD70)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_BA6FC0ED222A3FB0_OFFSET UNITYSDK_OFFSET(0x1E3BE60)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_BFD69BCAC31A33F5_OFFSET UNITYSDK_OFFSET(0x1E3CA10)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_EA82057904F18E95_OFFSET UNITYSDK_OFFSET(0x1E3A1A0)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x1E3B5E0)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x1E3BC70)
#define ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C880)

namespace ABC::ChessGame
{
	inline static constexpr unsigned int ChessAnimIKMonoComponent_TypeDefinitionIndex = 9536;

	class ChessAnimIKMonoComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AF69BF3B1319FD97::E7C7C5AA3043BA8D* E85DA8F9FBBCFAAC; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* FFD469EF2489399E; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* A3DB0240A776A85C; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* ADD965BCE9FDE880; // 0x38
		::UnityEngine::ACF10FE87B4C5617 A148F72E7B5DB587; // 0x40
		::UnityEngine::ACF10FE87B4C5617 E57350A1FBF2389F; // 0x80
		::System::Boolean E715C8F466F2F1E4; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single A86D6D0D60826BDA; // 0xC4
		::ABC::ChessGame::ChessAnimIKMonoComponent_A971AE4ABA3ACE50* FB283DB550A7FB54; // 0xC8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>* B9051B649320AD1A; // 0xD0
		::ABC::ChessGame::ChessAnimTargetIKPluginConfig* E4F1AC1DB67C2601; // 0xD8
		::System::Nullable_1<::UnityEngine::Vector3> Target; // 0xE0

		::System::Void B623AC72C4BB3D65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B623AC72C4BB3D65_OFFSET))(this);
		}

		::System::Void EA82057904F18E95()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_EA82057904F18E95_OFFSET))(this);
		}

		::System::Void B501B79512BB7CEB(::UnityEngine::Vector3 EE4DACB543F6C134)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B501B79512BB7CEB_OFFSET))(this, EE4DACB543F6C134);
		}

		::System::Void EEA5D6E8F4B2655A(::E68AA4EB51923C98::EBE679782781F278* ACDE58E97E37D13C, ::AF69BF3B1319FD97::E7C7C5AA3043BA8D* FFEED6BE70907BDC)
		{
			return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::EBE679782781F278*, ::AF69BF3B1319FD97::E7C7C5AA3043BA8D*))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_EEA5D6E8F4B2655A_OFFSET))(this, ACDE58E97E37D13C, FFEED6BE70907BDC);
		}

		::UnityEngine::Transform* BFD69BCAC31A33F5()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_BFD69BCAC31A33F5_OFFSET))(this);
		}

		::System::Void B272E4219AB4D056()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B272E4219AB4D056_OFFSET))(this);
		}

		::System::Void BA6FC0ED222A3FB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_BA6FC0ED222A3FB0_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* A160B0D69EED09A9()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_A160B0D69EED09A9_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void AA90BF351B002C08(::UnityEngine::Transform* E0711E950016FD99, ::System::Collections::Generic::List_1<::System::Object*>* E1DA90E6F01E7795)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_AA90BF351B002C08_OFFSET))(this, E0711E950016FD99, E1DA90E6F01E7795);
		}

		::System::Void B132932C21EBBBC0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CHESSGAME_CHESSANIMIKMONOCOMPONENT_B132932C21EBBBC0_OFFSET))(this);
		}
	};
}
