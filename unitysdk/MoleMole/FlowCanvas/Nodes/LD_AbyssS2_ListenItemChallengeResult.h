#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/KAPINBBMLDJ.h"

class BPLKAFBAEHJ;
class HGAJKHIMKJP;
namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x139E05A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x139E05F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x139E0060)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x139E0720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x139E06E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__LISTENONITEMCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0x139E0310)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET UNITYSDK_OFFSET(0x139E0400)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x139E0730)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x139E0740)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex = 78398;

	class LD_AbyssS2_ListenItemChallengeResult : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::BPLKAFBAEHJ** StaticGet_s_data()
		{
			return (::BPLKAFBAEHJ**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0x44B90);
		}
		static ::KAPINBBMLDJ* StaticGet__lastReason()
		{
			return (::KAPINBBMLDJ*)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0xFDD0);
		}
		::FlowCanvas::FlowOutput* _OnEvent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _ListenOnItemChallengeResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__LISTENONITEMCHALLENGERESULT_OFFSET))(this);
		}

		::System::Void _OnItemDestroy(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* itemList, ::KAPINBBMLDJ reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::KAPINBBMLDJ))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET))(this, itemList, reason);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
