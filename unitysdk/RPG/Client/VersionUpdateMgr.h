#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class EJLIOMPMHHI;
class HGDELEAHIJO;
class HJEIEIFLDGN;
class PNFLEMCDMJD;
namespace RPG::GameCore { class PckPatchConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR_CLEARDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xE4394D0)
#define RPG_CLIENT_VERSIONUPDATEMGR_CTOR_OFFSET UNITYSDK_OFFSET(0xE43FBB0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xE4395D0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET UNITYSDK_OFFSET(0xE439830)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xE4396D0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET UNITYSDK_OFFSET(0xE43C780)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADASSETSERVERUPDATEURL_OFFSET UNITYSDK_OFFSET(0xE43F490)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET UNITYSDK_OFFSET(0xE43C8F0)
#define RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xE43DF50)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xE43B0E0)
#define RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xE43B300)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xE4391C0)
#define RPG_CLIENT_VERSIONUPDATEMGR_ISPREDOWNLOADEDALLASSETS_OFFSET UNITYSDK_OFFSET(0xE43F520)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET UNITYSDK_OFFSET(0xE43B3B0)
#define RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET UNITYSDK_OFFSET(0xE43BE60)
#define RPG_CLIENT_VERSIONUPDATEMGR_MAKEDOWNLOADEDALLASSETSFLAG_OFFSET UNITYSDK_OFFSET(0xE439330)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET UNITYSDK_OFFSET(0xE43B570)
#define RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET UNITYSDK_OFFSET(0xE43B6A0)
#define RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xE43BFD0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xE43E570)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE439EF0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE43E430)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET UNITYSDK_OFFSET(0xE43A0A0)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE439D40)
#define RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET UNITYSDK_OFFSET(0xE43E2F0)
#define RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xE439990)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr_TypeDefinitionIndex = 61277;

	class VersionUpdateMgr : public ::System::Object
	{
	public:
		// static const ::System::String* DownloadAllAssetsFlagFile; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsDownloadedAllAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_ISDOWNLOADEDALLASSETS_OFFSET))();
		}

		static ::System::Void MakeDownloadedAllAssetsFlag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_MAKEDOWNLOADEDALLASSETSFLAG_OFFSET))();
		}

		static ::System::Void ClearDownloadedAllAssetsFlag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_CLEARDOWNLOADEDALLASSETSFLAG_OFFSET))();
		}

		static ::System::String* GetAssetServerUpdateUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETASSETSERVERUPDATEURL_OFFSET))();
		}

		static ::System::Void GetDownloadAllSize(::System::Action_1<::System::Int64>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZE_OFFSET))(a1);
		}

		static ::System::Void GetDownloadAllSizeWithBlackList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Action_2<::System::Int64, ::System::Int64>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETDOWNLOADALLSIZEWITHBLACKLIST_OFFSET))(a1, a2);
		}

		static ::System::Int64 _GetDownloadSize(::EJLIOMPMHHI* a1)
		{
			return ((::System::Int64(*)(::EJLIOMPMHHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__GETDOWNLOADSIZE_OFFSET))(a1);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfos(::PNFLEMCDMJD* a1, ::System::Int64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int64 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PNFLEMCDMJD*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcBlockHPatchDownloadInfosCore(::PNFLEMCDMJD* a1, ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>* a2, ::System::Int64 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int64 a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PNFLEMCDMJD*, ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHDOWNLOADINFOSCORE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean HavePredownloadAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADASSETS_OFFSET))();
		}

		static ::HJEIEIFLDGN* LoadMiniVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADMINIVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean HavePredownloadVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_HAVEPREDOWNLOADVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void RemovePckPatchFile(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHFILE_OFFSET))(a1);
		}

		static ::System::Void RemovePckPatchs(::RPG::GameCore::PckPatchConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::PckPatchConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_REMOVEPCKPATCHS_OFFSET))(a1, a2);
		}

		static ::HJEIEIFLDGN* LoadPredownloadVersion(::System::String* a1, ::System::String* a2)
		{
			return ((::HJEIEIFLDGN*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_LOADPREDOWNLOADVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void TryDeletePredownloadAssets(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_TRYDELETEPREDOWNLOADASSETS_OFFSET))(a1);
		}

		static ::System::Void GetPredownloadAllSize(::System::Action_2<::System::Int64, ::System::Int64>* a1)
		{
			return ((::System::Void(*)(::System::Action_2<::System::Int64, ::System::Int64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADALLSIZE_OFFSET))(a1);
		}

		static ::System::Int64 GetPreDownloadFullSize(::EJLIOMPMHHI* a1)
		{
			return ((::System::Int64(*)(::EJLIOMPMHHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADFULLSIZE_OFFSET))(a1);
		}

		static ::System::Int64 GetPreDownloadSize(::EJLIOMPMHHI* a1)
		{
			return ((::System::Int64(*)(::EJLIOMPMHHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADSIZE_OFFSET))(a1);
		}

		static ::System::Boolean _CalcBlockHPatchPreDownloadInfos(::PNFLEMCDMJD* a1, ::System::Int64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int64 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PNFLEMCDMJD*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCBLOCKHPATCHPREDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfos(::CEOABLKMPKE* a1, ::System::Int64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int64 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::CEOABLKMPKE*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchPreDownloadInfos(::CEOABLKMPKE* a1, ::System::Int64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int64 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::CEOABLKMPKE*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHPREDOWNLOADINFOS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _CalcAudioHPatchDownloadInfosCore(::CEOABLKMPKE* a1, ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>* a2, ::System::Int64 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int64 a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::CEOABLKMPKE*, ::System::Func_2<::HGDELEAHIJO*, ::System::Boolean>*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR__CALCAUDIOHPATCHDOWNLOADINFOSCORE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetPredownloadAssetServerUpdateUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_GETPREDOWNLOADASSETSERVERUPDATEURL_OFFSET))();
		}

		static ::System::Boolean IsPredownloadedAllAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR_ISPREDOWNLOADEDALLASSETS_OFFSET))();
		}

	};
}
