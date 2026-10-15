#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class CaculateNodeData; }
namespace UnityEngine::UI { class CaculateNodeRebuild; }
namespace UnityEngine::UI { class TextScanner; }

#define UNITYENGINE_UI_CACULATENODEREBUILD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E26F0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E2590)
#define UNITYENGINE_UI_CACULATENODEREBUILD_MERGETOPOPERATOR_OFFSET UNITYSDK_OFFSET(0x1F4E1A10)
#define UNITYENGINE_UI_CACULATENODEREBUILD_PROCESS_OFFSET UNITYSDK_OFFSET(0x1F4E1020)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READCACULATENODE_OFFSET UNITYSDK_OFFSET(0x1F4E0EB0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READDIGITS_OFFSET UNITYSDK_OFFSET(0x1F4E2100)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READNUMBER_OFFSET UNITYSDK_OFFSET(0x1F4E1BB0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READOBJECT_OFFSET UNITYSDK_OFFSET(0x1F4E1AD0)
#define UNITYENGINE_UI_CACULATENODEREBUILD_READOPERATOR_OFFSET UNITYSDK_OFFSET(0x1F4E18E0)

namespace UnityEngine::UI
{
	class CaculateNodeRebuild : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* builder; // 0x10
		::System::Collections::Generic::Stack_1<::System::Int32>* mBrackets; // 0x18
		::System::Collections::Generic::Stack_1<::UnityEngine::UI::CaculateNodeData*>* mValueStack; // 0x20
		::System::Collections::Generic::Stack_1<::UnityEngine::UI::CaculateNodeData*>* mOpStack; // 0x28
		static ::UnityEngine::UI::CaculateNodeRebuild** StaticGet_NodeBuilder()
		{
			return (::UnityEngine::UI::CaculateNodeRebuild**)UnitySDK::FromName("UnityEngine.UI", "CaculateNodeRebuild")->GetStaticField(0x32910);
		}

		static ::UnityEngine::UI::TextScanner** StaticGet_scanner()
		{
			return (::UnityEngine::UI::TextScanner**)UnitySDK::FromName("UnityEngine.UI", "CaculateNodeRebuild")->GetStaticField(0x32918);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_CCTOR_OFFSET))();
		}

		::UnityEngine::UI::CaculateNodeData* ReadCaculateNode(::System::String* a1)
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READCACULATENODE_OFFSET))(this, a1);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_PROCESS_OFFSET))(this);
		}

		::System::Void MergeTopOperator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_MERGETOPOPERATOR_OFFSET))(this);
		}

		::UnityEngine::UI::CaculateNodeData* ReadNumber()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READNUMBER_OFFSET))(this);
		}

		::System::Void ReadDigits(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READDIGITS_OFFSET))(this, a1);
		}

		::UnityEngine::UI::CaculateNodeData* ReadObject()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READOBJECT_OFFSET))(this);
		}

		::UnityEngine::UI::CaculateNodeData* ReadOperator()
		{
			return ((::UnityEngine::UI::CaculateNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CACULATENODEREBUILD_READOPERATOR_OFFSET))(this);
		}

	};
}
