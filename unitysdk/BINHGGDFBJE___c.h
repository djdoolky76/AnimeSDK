#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAANBOICNA;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BINHGGDFBJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB793E20)
#define BINHGGDFBJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB793E60)
#define BINHGGDFBJE___C__GETNEEDDOWNLOADAUDIOSIZE_B__43_0_OFFSET UNITYSDK_OFFSET(0xB793EB0)
#define BINHGGDFBJE___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET UNITYSDK_OFFSET(0xB793E70)
#define BINHGGDFBJE___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET UNITYSDK_OFFSET(0xB793E90)
#define BINHGGDFBJE___C__GETNEEDDOWNLOADVIDEOSIZE_B__44_0_OFFSET UNITYSDK_OFFSET(0xB793ED0)
#define BINHGGDFBJE___C___SAVEVIDEOLIST_B__58_0_OFFSET UNITYSDK_OFFSET(0xB793EF0)

inline static constexpr unsigned int BINHGGDFBJE___c_TypeDefinitionIndex = 59620;

	class BINHGGDFBJE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F340);
		}

		static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F348);
		}

		static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F350);
		}

		static ::System::Func_2<::CHAANBOICNA*, ::System::String*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::CHAANBOICNA*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F358);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F360);
		}

		static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINHGGDFBJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetNeedDownloadSizeForWhiteList_b__23_0(::RPG::Client::AudioBundleInfoItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET))(this, a1);
		}

		::System::String* _GetNeedDownloadSizeForWhiteList_b__23_1(::RPG::Client::VideoBundleInfoItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET))(this, a1);
		}

		::System::String* _GetNeedDownloadAudioSize_b__43_0(::RPG::Client::AudioBundleInfoItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__GETNEEDDOWNLOADAUDIOSIZE_B__43_0_OFFSET))(this, a1);
		}

		::System::String* _GetNeedDownloadVideoSize_b__44_0(::RPG::Client::VideoBundleInfoItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C__GETNEEDDOWNLOADVIDEOSIZE_B__44_0_OFFSET))(this, a1);
		}

		::System::String* __SaveVideoList_b__58_0(::CHAANBOICNA* a1)
		{
			return ((::System::String*(*)(::PVOID, ::CHAANBOICNA*))((::PBYTE)hIl2Cpp + BINHGGDFBJE___C___SAVEVIDEOLIST_B__58_0_OFFSET))(this, a1);
		}

	};
