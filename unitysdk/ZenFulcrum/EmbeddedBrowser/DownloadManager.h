#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Text; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class JSONNode; }

#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FE4F4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CANCELALL_OFFSET UNITYSDK_OFFSET(0x1FE50DF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1FE50FA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GETUSERDOWNLOADFOLDER_OFFSET UNITYSDK_OFFSET(0x1FE4FDB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1FE50400)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTARTED_OFFSET UNITYSDK_OFFSET(0x1FE4F710)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x1FE50030)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_MANAGEDOWNLOADS_OFFSET UNITYSDK_OFFSET(0x1FE4F5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1FE50A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_RESUMEALL_OFFSET UNITYSDK_OFFSET(0x1FE50C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_SHGETKNOWNFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1FE50FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FE502A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE51070)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int DownloadManager_TypeDefinitionIndex = 32772;

	class DownloadManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manageAllBrowsers; // 0x18
		::System::Boolean promptForFileNames; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* saveFolder; // 0x20
		::UnityEngine::UI::Text* statusBar; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* downloads; // 0x30
		::System::Text::StringBuilder* sb; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void ManageDownloads(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_MANAGEDOWNLOADS_OFFSET))(this, browser);
		}

		::System::Void HandleDownloadStarted(::ZenFulcrum::EmbeddedBrowser::Browser* browser, ::System::Int32 downloadId, ::ZenFulcrum::EmbeddedBrowser::JSONNode* info)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTARTED_OFFSET))(this, browser, downloadId, info);
		}

		::System::Void HandleDownloadStatus(::ZenFulcrum::EmbeddedBrowser::Browser* browser, ::System::Int32 downloadId, ::ZenFulcrum::EmbeddedBrowser::JSONNode* info)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_HANDLEDOWNLOADSTATUS_OFFSET))(this, browser, downloadId, info);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void PauseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_PAUSEALL_OFFSET))(this);
		}

		::System::Void ResumeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_RESUMEALL_OFFSET))(this);
		}

		::System::Void CancelAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CANCELALL_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_CLEARALL_OFFSET))(this);
		}

		::System::String* get_Status()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GET_STATUS_OFFSET))(this);
		}

		static ::System::String* GetUserDownloadFolder()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_GETUSERDOWNLOADFOLDER_OFFSET))();
		}

		static ::System::Int32 SHGetKnownFolderPath(::System::Guid rfid, ::System::UInt32 dwFlags, ::System::IntPtr hToken, ::System::IntPtr& ppszPath)
		{
			return ((::System::Int32(*)(::System::Guid, ::System::UInt32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_DOWNLOADMANAGER_SHGETKNOWNFOLDERPATH_OFFSET))(rfid, dwFlags, hToken, ppszPath);
		}
	};
}
