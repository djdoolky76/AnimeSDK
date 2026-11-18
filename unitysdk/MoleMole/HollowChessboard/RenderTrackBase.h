#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNFELOFCLBD.h"
#include "unitysdk/System/Object.h"

class DPFIKHDCGAD;
namespace MoleMole::HollowChessboard { class ICondition; }
namespace MoleMole::HollowChessboard { class IRenderEvent; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETALLSECTIONS_OFFSET UNITYSDK_OFFSET(0x119242E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETBINDEVENTS_OFFSET UNITYSDK_OFFSET(0x11924450)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETCONDITIONSBYINDEX_OFFSET UNITYSDK_OFFSET(0x119248E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETSECTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x11924330)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11924D20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderTrackBase_TypeDefinitionIndex = 60713;

	class RenderTrackBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DPFIKHDCGAD*>* GetAllSections()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DPFIKHDCGAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETALLSECTIONS_OFFSET))(this);
		}

		::DPFIKHDCGAD* GetSectionByIndex(::System::Int32 index)
		{
			return ((::DPFIKHDCGAD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETSECTIONBYINDEX_OFFSET))(this, index);
		}

		::System::Void GetBindEvents(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*& eventCollection, ::System::Int32 bindSectionIndex, ::JNFELOFCLBD linkableType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::IRenderEvent*>*&, ::System::Int32, ::JNFELOFCLBD))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETBINDEVENTS_OFFSET))(this, eventCollection, bindSectionIndex, linkableType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>* GetConditionsByIndex(::System::Int32 sectionIndex)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::ICondition*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERTRACKBASE_GETCONDITIONSBYINDEX_OFFSET))(this, sectionIndex);
		}
	};
}
