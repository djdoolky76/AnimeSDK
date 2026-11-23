#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ABC_UI_MONOHEXCHESSBOARD_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x22DBF50)
#define ABC_UI_MONOHEXCHESSBOARD_E1BAFE3396A00E19_OFFSET UNITYSDK_OFFSET(0x22DC080)
#define ABC_UI_MONOHEXCHESSBOARD_F0A70AE06A22207E_OFFSET UNITYSDK_OFFSET(0x22DC150)
#define ABC_UI_MONOHEXCHESSBOARD_F447BED3C2BADA49_OFFSET UNITYSDK_OFFSET(0x22DC4A0)
#define ABC_UI_MONOHEXCHESSBOARD_FA65B27AA52DD864_OFFSET UNITYSDK_OFFSET(0x22DC420)
#define ABC_UI_MONOHEXCHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x22DC550)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoHexChessBoard_TypeDefinitionIndex = 7292;

	class MonoHexChessBoard : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Width; // 0x20
		::System::Int32 Height; // 0x24
		::System::Single Size; // 0x28
		::UnityEngine::Vector2 StartOffset; // 0x2C
		::System::Byte _padding0[0x4];
		::ABC::UI::MonoPrefabLoader* ChessGridLoader; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BFC01518E6DDF9B7; // 0x40

		::System::Int32 FA65B27AA52DD864(::System::Int32 E955C02910D334F4, ::System::Int32 BD61B8671BC80BD4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD_FA65B27AA52DD864_OFFSET))(this, E955C02910D334F4, BD61B8671BC80BD4);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F0A70AE06A22207E()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD_F0A70AE06A22207E_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 E1BAFE3396A00E19(::System::Single F54AF627638DE3C9, ::System::Int32 E955C02910D334F4, ::System::Int32 BD61B8671BC80BD4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD_E1BAFE3396A00E19_OFFSET))(F54AF627638DE3C9, E955C02910D334F4, BD61B8671BC80BD4);
		}

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Void F447BED3C2BADA49(::System::Int32& F83557CE653BF86F, ::System::Int32& A2AAE08A81012A6B, ::System::Int32& A1AC1F36754929D1, ::System::Int32& F1F5367190D1F204)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD_F447BED3C2BADA49_OFFSET))(this, F83557CE653BF86F, A2AAE08A81012A6B, A1AC1F36754929D1, F1F5367190D1F204);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOHEXCHESSBOARD__CTOR_OFFSET))(this);
		}
	};
}
