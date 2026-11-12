#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/LMNEKOLMGEM.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillConfig.h"
#include "unitysdk/System/Nullable_1.h"
class BALLHPKKDDH;
class CJLCPMDGIBO;
class HCBHBJEOCHL;
class NNOALJAEMCG;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class ItemCost; }
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARHELPER_CHECKACTIVEPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0xD050210)
#define RPG_CLIENT_AVATARHELPER_CHECKHASOBTAINEDMULTIPLEPATHS_OFFSET UNITYSDK_OFFSET(0xD050760)
#define RPG_CLIENT_AVATARHELPER_CHECKHASROLE_OFFSET UNITYSDK_OFFSET(0xD025FC0)
#define RPG_CLIENT_AVATARHELPER_CHECKHASSPECIFICPATH_OFFSET UNITYSDK_OFFSET(0xD0505C0)
#define RPG_CLIENT_AVATARHELPER_CHECKISACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD050850)
#define RPG_CLIENT_AVATARHELPER_CHECKISGENDER_OFFSET UNITYSDK_OFFSET(0xD051D60)
#define RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET UNITYSDK_OFFSET(0xD025370)
#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0xD051BE0)
#define RPG_CLIENT_AVATARHELPER_CHECKISSAMEROLE_OFFSET UNITYSDK_OFFSET(0xD050550)
#define RPG_CLIENT_AVATARHELPER_CHECKOBTAINEDSPECIFICPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0xD0503B0)
#define RPG_CLIENT_AVATARHELPER_CHECKSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0xD052690)
#define RPG_CLIENT_AVATARHELPER_CONVERTTOAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xD03E370)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xD04E6D0)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0xD026BC0)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xD04E770)
#define RPG_CLIENT_AVATARHELPER_EQUIPLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xD052320)
#define RPG_CLIENT_AVATARHELPER_EQUIPRELICS_OFFSET UNITYSDK_OFFSET(0xD0524D0)
#define RPG_CLIENT_AVATARHELPER_FILLALLOBTAINEDSPECIFICPATHAVATARSBYROLETO_OFFSET UNITYSDK_OFFSET(0xD04E930)
#define RPG_CLIENT_AVATARHELPER_FLIPSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0xD052750)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATARID_OFFSET UNITYSDK_OFFSET(0xD051F90)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F040)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATARID_OFFSET UNITYSDK_OFFSET(0xD0509A0)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD026D20)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xD050E40)
#define RPG_CLIENT_AVATARHELPER_GETADVPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xD04FEC0)
#define RPG_CLIENT_AVATARHELPER_GETALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xD04E4B0)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0xD04E8C0)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xD04E5C0)
#define RPG_CLIENT_AVATARHELPER_GETALLPATHDATA_OFFSET UNITYSDK_OFFSET(0xD052BC0)
#define RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F470)
#define RPG_CLIENT_AVATARHELPER_GETAVATARFORGROWTHDISPLAY_OFFSET UNITYSDK_OFFSET(0xD04F950)
#define RPG_CLIENT_AVATARHELPER_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0xD0520B0)
#define RPG_CLIENT_AVATARHELPER_GETAVATARPATH_OFFSET UNITYSDK_OFFSET(0xD02AD40)
#define RPG_CLIENT_AVATARHELPER_GETCOUNTOFOBTAINEDROLES_OFFSET UNITYSDK_OFFSET(0xD04E9E0)
#define RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET UNITYSDK_OFFSET(0xD051E60)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xD051B50)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xD051740)
#define RPG_CLIENT_AVATARHELPER_GETEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xD0506B0)
#define RPG_CLIENT_AVATARHELPER_GETELATIONPATH_OFFSET UNITYSDK_OFFSET(0xD052EE0)
#define RPG_CLIENT_AVATARHELPER_GETFILTERKEY_OFFSET UNITYSDK_OFFSET(0xD052B40)
#define RPG_CLIENT_AVATARHELPER_GETFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD04EE60)
#define RPG_CLIENT_AVATARHELPER_GETGENDER_OFFSET UNITYSDK_OFFSET(0xD051CB0)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xD04F540)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xD026A90)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F890)
#define RPG_CLIENT_AVATARHELPER_GETINITIALREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F340)
#define RPG_CLIENT_AVATARHELPER_GETKNIGHTPATH_OFFSET UNITYSDK_OFFSET(0xD053060)
#define RPG_CLIENT_AVATARHELPER_GETMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD052FA0)
#define RPG_CLIENT_AVATARHELPER_GETMEMORYPATH_OFFSET UNITYSDK_OFFSET(0xD0530E0)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xD051930)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xD04EF10)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET UNITYSDK_OFFSET(0xD050E80)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDSPECIFICPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xD04DD10)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD0515E0)
#define RPG_CLIENT_AVATARHELPER_GETPATHDATA_OFFSET UNITYSDK_OFFSET(0xD028AC0)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARFORCHANGEENHANCED_OFFSET UNITYSDK_OFFSET(0xD04FB20)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xD04FD80)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHPROFILE_OFFSET UNITYSDK_OFFSET(0xD04FA60)
#define RPG_CLIENT_AVATARHELPER_GETPRIESTPATH_OFFSET UNITYSDK_OFFSET(0xD0530A0)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD0517B0)
#define RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET UNITYSDK_OFFSET(0xD0518B0)
#define RPG_CLIENT_AVATARHELPER_GETREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F190)
#define RPG_CLIENT_AVATARHELPER_GETROGUEPATH_OFFSET UNITYSDK_OFFSET(0xD052F60)
#define RPG_CLIENT_AVATARHELPER_GETROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD04E810)
#define RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET UNITYSDK_OFFSET(0xD051DB0)
#define RPG_CLIENT_AVATARHELPER_GETSERIESSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xD053120)
#define RPG_CLIENT_AVATARHELPER_GETSHAMANPATH_OFFSET UNITYSDK_OFFSET(0xD052FE0)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xD04DE00)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xD051540)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD051AC0)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD04EA80)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARSFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD04EB40)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARWITHWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD04ED90)
#define RPG_CLIENT_AVATARHELPER_GETUPGRADEAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xD050030)
#define RPG_CLIENT_AVATARHELPER_GETWARLOCKPATH_OFFSET UNITYSDK_OFFSET(0xD053020)
#define RPG_CLIENT_AVATARHELPER_GETWARRIORPATH_OFFSET UNITYSDK_OFFSET(0xD052F20)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET UNITYSDK_OFFSET(0xD050BF0)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xD050AE0)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xD052400)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFRELICS_OFFSET UNITYSDK_OFFSET(0xD0525B0)
#define RPG_CLIENT_AVATARHELPER_TAKEPROMOTIONREWARD_OFFSET UNITYSDK_OFFSET(0xD0528D0)
#define RPG_CLIENT_AVATARHELPER_TOPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD052A50)
#define RPG_CLIENT_AVATARHELPER_UNLOCKTRACENODE_OFFSET UNITYSDK_OFFSET(0xD052250)
#define RPG_CLIENT_AVATARHELPER__CONVERTTOAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xD052EA0)
#define RPG_CLIENT_AVATARHELPER__GETPATHDATA_OFFSET UNITYSDK_OFFSET(0xD052A90)
#define RPG_CLIENT_AVATARHELPER__GETPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD052E50)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD0519D0)
#define RPG_CLIENT_AVATARHELPER__TRYGETPRERELEASESHELLAVATAR_OFFSET UNITYSDK_OFFSET(0xD04F750)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 64074;

	class AvatarHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllActivePathAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLACTIVEPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllObtainedSpecificPathAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllActivePathAvatars()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLACTIVEPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllObtainedSpecificPathAvatars()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllObtainedSpecificPathAvatarsByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllObtainedSpecificPathAvatarsByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET))(a1);
		}

		static ::System::Void FillAllObtainedSpecificPathAvatarsByRoleTo(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_FILLALLOBTAINEDSPECIFICPATHAVATARSBYROLETO_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCountOfObtainedRoles()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETCOUNTOFOBTAINEDROLES_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarForCurrentWorldLevel(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARFORCURRENTWORLDLEVEL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatarsForCurrentWorldLevel(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARSFORCURRENTWORLDLEVEL_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarWithWorldLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARWITHWORLDLEVEL_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetActivePathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetFixedPathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETFIXEDPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetObtainedSpecificPathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDSPECIFICPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetObtainedAvatarWithMaxEnhanced(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDAVATARWITHMAXENHANCED_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetActiveHeroAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATAR_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetRemotePlayerAvatar(::System::UInt32 a1, ::System::String* a2, ::Proto::DisplayAvatarDetailInfo* a3, ::CJLCPMDGIBO* a4)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::String*, ::Proto::DisplayAvatarDetailInfo*, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETREMOTEPLAYERAVATAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialRemotePlayerAvatar(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::CJLCPMDGIBO* a5)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALREMOTEPLAYERAVATAR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAssistantAvatar(::HCBHBJEOCHL* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatarWithActivePath(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHACTIVEPATH_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatarWithMaxEnhanced(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHMAXENHANCED_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATAR_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAvatarForGrowthDisplay(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARFORGROWTHDISPLAY_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarWithProfile(::System::UInt32 a1, ::NNOALJAEMCG* a2, ::System::UInt32 a3)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::NNOALJAEMCG*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHPROFILE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarForChangeEnhanced(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARFORCHANGEENHANCED_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarWithMaxEnhanced(::System::UInt32 a1, ::NNOALJAEMCG* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHMAXENHANCED_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAdvPlayerAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETADVPLAYERAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetUpgradeAvatarWithActivePath(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETUPGRADEAVATARWITHACTIVEPATH_OFFSET))(a1);
		}

		static ::System::Boolean CheckActivePathNeedsUpgrade(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKACTIVEPATHNEEDSUPGRADE_OFFSET))(a1);
		}

		static ::System::Boolean CheckObtainedSpecificPathNeedsUpgrade(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKOBTAINEDSPECIFICPATHNEEDSUPGRADE_OFFSET))(a1);
		}

		static ::DNFDBKCPBNM GetRoleIdentifier(::System::UInt32 a1)
		{
			return ((::DNFDBKCPBNM(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROLEIDENTIFIER_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsSameRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISSAMEROLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckHasRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASROLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasSpecificPath(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASSPECIFICPATH_OFFSET))(a1);
		}

		static ::System::UInt32 GetEidolonLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETEIDOLONLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasObtainedMultiplePaths(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASOBTAINEDMULTIPLEPATHS_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsActivePathAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISACTIVEPATHAVATAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetActivePathAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATARID_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* SwitchActivePath(::HNOHHOEPFHC a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* SwitchActivePaths(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET))(a1);
		}

		static ::HNOHHOEPFHC GetActivePathMultiPathAvatarType(::System::UInt32 a1)
		{
			return ((::HNOHHOEPFHC(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::HNOHHOEPFHC>* GetObtainedMultiPathAvatarTypesByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::HNOHHOEPFHC>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetSkinPreviewAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetOriginSkinByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType GetDamageType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::CombatPowerAvatarRarityType GetRarityType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET))(a1);
		}

		static ::System::String* GetMiniIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET))(a1);
		}

		static ::System::String* GetSideIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET))(a1);
		}

		static ::System::String* GetSmallPathIconPathByAvatarID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET))(a1);
		}

		static ::System::String* GetDamageTypeIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET))(a1);
		}

		static ::BALLHPKKDDH* GetPrototypeByAvatarID(::System::UInt32 a1)
		{
			return ((::BALLHPKKDDH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsOriginSkinID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET))(a1);
		}

		static ::RPG::GameCore::GenderType GetGender(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETGENDER_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsGender(::System::UInt32 a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISGENDER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRoleID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsHero(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET))(a1);
		}

		static ::System::UInt32 GetActiveHeroAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATARID_OFFSET))();
		}

		static ::System::String* GetAvatarName(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARNAME_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* UnlockTraceNode(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_UNLOCKTRACENODE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Promises::IPromise* EquipLightCone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_EQUIPLIGHTCONE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* TakeOffLightCone(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEOFFLIGHTCONE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* EquipRelics(::System::UInt32 a1, ::Il2CppArray<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::Il2CppArray<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_EQUIPRELICS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* TakeOffRelics(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEOFFRELICS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKSHOWSIMPLIFIEDSKILLDESC_OFFSET))();
		}

		static ::System::Void FlipShowSimplifiedSkillDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_FLIPSHOWSIMPLIFIEDSKILLDESC_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* TakePromotionReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEPROMOTIONREWARD_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::AvatarPath* GetPathData(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPATHDATA_OFFSET))(a1);
		}

		static ::LMNEKOLMGEM ToPathIdentifier(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::LMNEKOLMGEM(*)(::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TOPATHIDENTIFIER_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::AvatarPath* GetAvatarPath(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARPATH_OFFSET))(a1);
		}

		static ::System::UInt32 GetFilterKey(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::UInt32(*)(::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETFILTERKEY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarPath*>* GetAllPathData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarPath*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLPATHDATA_OFFSET))();
		}

		static ::RPG::GameCore::AvatarBaseType ConvertToAvatarBaseType(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CONVERTTOAVATARBASETYPE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::AvatarPath* GetElationPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETELATIONPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetWarriorPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETWARRIORPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetRoguePath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROGUEPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetMagePath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMAGEPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetShamanPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSHAMANPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetWarlockPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETWARLOCKPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetKnightPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETKNIGHTPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetPriestPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPRIESTPATH_OFFSET))();
		}

		static ::RPG::AvatarSystem::AvatarPath* GetMemoryPath()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMEMORYPATH_OFFSET))();
		}

		static ::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig> GetSeriesSkillConfig(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillConfig>(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSERIESSKILLCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::AvatarSystem::AvatarPath* _GetPathData(::LMNEKOLMGEM a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETPATHDATA_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseType _ConvertToAvatarBaseType(::LMNEKOLMGEM a1)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__CONVERTTOAVATARBASETYPE_OFFSET))(a1);
		}

		static ::LMNEKOLMGEM _GetPathIdentifier(::RPG::GameCore::AvatarBaseTypeRow* a1)
		{
			return ((::LMNEKOLMGEM(*)(::RPG::GameCore::AvatarBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETPATHIDENTIFIER_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* _GetSpecificPathAvatarByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* _TryGetPreReleaseShellAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__TRYGETPRERELEASESHELLAVATAR_OFFSET))(a1);
		}

	};
}
