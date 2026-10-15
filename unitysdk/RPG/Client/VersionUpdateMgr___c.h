#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
class HPPGIADOJBF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE43FBC0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE43FC00)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__GETPREDOWNLOADSIZE_B__19_0_OFFSET UNITYSDK_OFFSET(0xE440070)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__GETPREDOWNLOADSIZE_B__19_1_OFFSET UNITYSDK_OFFSET(0xE440170)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOSCORE_B__23_0_OFFSET UNITYSDK_OFFSET(0xE440280)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOSCORE_B__23_1_OFFSET UNITYSDK_OFFSET(0xE440380)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOS_B__21_0_OFFSET UNITYSDK_OFFSET(0xE440270)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_0_OFFSET UNITYSDK_OFFSET(0xE43FE20)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_1_OFFSET UNITYSDK_OFFSET(0xE43FF70)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_4_OFFSET UNITYSDK_OFFSET(0xE43FF20)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOS_B__8_0_OFFSET UNITYSDK_OFFSET(0xE43FE10)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___GETDOWNLOADSIZE_B__7_0_OFFSET UNITYSDK_OFFSET(0xE43FC10)
#define RPG_CLIENT_VERSIONUPDATEMGR___C___GETDOWNLOADSIZE_B__7_1_OFFSET UNITYSDK_OFFSET(0xE43FD10)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c_TypeDefinitionIndex = 61279;

	class VersionUpdateMgr___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC20);
		}

		static ::System::Func_2<::HPPGIADOJBF*, ::System::Int64>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::HPPGIADOJBF*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC28);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC30);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC38);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC40);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC48);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC50);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC60);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC68);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC70);
		}

		static ::System::Func_2<::HGDELEAHIJO*, ::System::Int64>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::HGDELEAHIJO*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3DC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C_CTOR_OFFSET))(this);
		}

		::System::Int64 __GetDownloadSize_b__7_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___GETDOWNLOADSIZE_B__7_0_OFFSET))(this, a1);
		}

		::System::Int64 __GetDownloadSize_b__7_1(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___GETDOWNLOADSIZE_B__7_1_OFFSET))(this, a1);
		}

		::System::Boolean __CalcBlockHPatchDownloadInfos_b__8_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOS_B__8_0_OFFSET))(this, a1);
		}

		::System::Int64 __CalcBlockHPatchDownloadInfosCore_b__9_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_0_OFFSET))(this, a1);
		}

		::System::Int64 __CalcBlockHPatchDownloadInfosCore_b__9_4(::HPPGIADOJBF* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HPPGIADOJBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_4_OFFSET))(this, a1);
		}

		::System::Int64 __CalcBlockHPatchDownloadInfosCore_b__9_1(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__9_1_OFFSET))(this, a1);
		}

		::System::Int64 _GetPreDownloadSize_b__19_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__GETPREDOWNLOADSIZE_B__19_0_OFFSET))(this, a1);
		}

		::System::Int64 _GetPreDownloadSize_b__19_1(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__GETPREDOWNLOADSIZE_B__19_1_OFFSET))(this, a1);
		}

		::System::Boolean __CalcAudioHPatchDownloadInfos_b__21_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOS_B__21_0_OFFSET))(this, a1);
		}

		::System::Int64 __CalcAudioHPatchDownloadInfosCore_b__23_0(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOSCORE_B__23_0_OFFSET))(this, a1);
		}

		::System::Int64 __CalcAudioHPatchDownloadInfosCore_b__23_1(::HGDELEAHIJO* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C___CALCAUDIOHPATCHDOWNLOADINFOSCORE_B__23_1_OFFSET))(this, a1);
		}

	};
}
