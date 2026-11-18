#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/GMDAEPNIIEE.h"
#include "unitysdk/POMBBGPOKEI.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class IKGGCHBOBOD;
class JEPHFHPHAIB;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7B9970)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A7B9F10)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7BA1E0)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUS_OFFSET UNITYSDK_OFFSET(0x1A7B9AB0)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7BA740)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A7BA7F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessFocusCamera_TypeDefinitionIndex = 43640;

	class ChessFocusCamera
	{
	public:
		::System::Collections::Generic::List_1<::BMBMBLDFBID>* _cacheState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a, ::System::String* focusKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_INVOKE_OFFSET))(this, a, focusKey);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_ONGRAPHSTOPED_OFFSET))(this);
		}

		static ::System::Boolean TryFocus(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* pointList, ::GMDAEPNIIEE priority, ::POMBBGPOKEI focusCameraZMode, ::FBAMLABJMKF* chessboard, ::BMBMBLDFBID& cameraStateHandle, ::System::String* focusKey)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::GMDAEPNIIEE, ::POMBBGPOKEI, ::FBAMLABJMKF*, ::BMBMBLDFBID&, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUS_OFFSET))(pointList, priority, focusCameraZMode, chessboard, cameraStateHandle, focusKey);
		}

		static ::System::Boolean TryFocusInternal(::GMDAEPNIIEE priority, ::MoleMole::UIHollowChessboard3DModelController* chessboardCtrl, ::FBAMLABJMKF* hollowChessboard, ::JEPHFHPHAIB* cameraController, ::IKGGCHBOBOD* focusCamera, ::BMBMBLDFBID& cameraStateHandle)
		{
			return ((::System::Boolean(*)(::GMDAEPNIIEE, ::MoleMole::UIHollowChessboard3DModelController*, ::FBAMLABJMKF*, ::JEPHFHPHAIB*, ::IKGGCHBOBOD*, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUSINTERNAL_OFFSET))(priority, chessboardCtrl, hollowChessboard, cameraController, focusCamera, cameraStateHandle);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
