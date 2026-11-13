#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CriWare/CriAtomExCategory_ReactParameter.h"
#include "unitysdk/CriWare/CriAtomEx_AisacInfo.h"
namespace System { class String; }

#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1E2DE2B0)
#define CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET UNITYSDK_OFFSET(0x1E2DE170)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1E2DE210)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DE370)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET UNITYSDK_OFFSET(0x1E2DE770)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DE890)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET UNITYSDK_OFFSET(0x1E2DE4D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DE630)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x1E2DCD40)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DD040)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DD1C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET UNITYSDK_OFFSET(0x1E2DE9B0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DEAD0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x1E2DEBF0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DED10)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E2DC9E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x1E2DD330)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DD8D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DDA00)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DB480)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DB3D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET UNITYSDK_OFFSET(0x1E2DB900)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DB7E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET UNITYSDK_OFFSET(0x1E2DC240)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DC120)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET UNITYSDK_OFFSET(0x1E2DBDC0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DBCA0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DB6C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DB5A0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DC000)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DBEE0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1E2DDFB0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DE0D0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1E2DC5C0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DC390)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DDB30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DDC50)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DDD70)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DDE90)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E2DC7E0)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DB340)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DB290)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET UNITYSDK_OFFSET(0x1E2DBB70)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DBA30)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET UNITYSDK_OFFSET(0x1E2DD450)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DD570)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET UNITYSDK_OFFSET(0x1E2DD690)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DD7B0)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET UNITYSDK_OFFSET(0x1E2DE7F0)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET UNITYSDK_OFFSET(0x1E2DE6F0)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET UNITYSDK_OFFSET(0x1E2DE570)
#define CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET UNITYSDK_OFFSET(0x1E2DE430)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET UNITYSDK_OFFSET(0x1E2DCAE0)
#define CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2DCDD0)
#define CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x1E2DD0F0)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET UNITYSDK_OFFSET(0x1E2DEA30)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET UNITYSDK_OFFSET(0x1E2DE930)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1E2DEC70)
#define CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1E2DEB70)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E2DC8E0)
#define CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET UNITYSDK_OFFSET(0x1E2DD290)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1E2DD950)
#define CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET UNITYSDK_OFFSET(0x1E2DD850)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1E2BC100)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E2BBFD0)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET UNITYSDK_OFFSET(0x1E2DB880)
#define CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET UNITYSDK_OFFSET(0x1E2DB740)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET UNITYSDK_OFFSET(0x1E2DC1C0)
#define CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1E2DC080)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET UNITYSDK_OFFSET(0x1E2DBD40)
#define CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET UNITYSDK_OFFSET(0x1E2DBC00)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET UNITYSDK_OFFSET(0x1E2DB640)
#define CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET UNITYSDK_OFFSET(0x1E2DB500)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1E2DBF80)
#define CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E2DBE40)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1E2DE030)
#define CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1E2DDF30)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1E2DC530)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1E2DC2C0)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x1E2DC650)
#define CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1E2DC460)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET UNITYSDK_OFFSET(0x1E2DDBB0)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET UNITYSDK_OFFSET(0x1E2DDAB0)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET UNITYSDK_OFFSET(0x1E2DDDF0)
#define CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET UNITYSDK_OFFSET(0x1E2DDCF0)
#define CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E2DC6E0)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1E2BBE90)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1E2BBD50)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET UNITYSDK_OFFSET(0x1E2DBAE0)
#define CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET UNITYSDK_OFFSET(0x1E2DB980)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET UNITYSDK_OFFSET(0x1E2DD710)
#define CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1E2DD610)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET UNITYSDK_OFFSET(0x1E2DD4D0)
#define CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET UNITYSDK_OFFSET(0x1E2DD3D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_TypeDefinitionIndex = 40957;

	class CriAtomExCategory : public ::System::Object
	{
	public:
		static ::System::Void SetVolume(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SetVolume_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetVolume(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetVolume_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void Mute(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_OFFSET))(a1, a2);
		}

		static ::System::Void Mute_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_MUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMuted(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_OFFSET))(a1);
		}

		static ::System::Boolean IsMuted_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISMUTED_1_OFFSET))(a1);
		}

		static ::System::Void Solo(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Solo_1(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SOLO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSoloed(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_OFFSET))(a1);
		}

		static ::System::Boolean IsSoloed_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISSOLOED_1_OFFSET))(a1);
		}

		static ::System::Void Pause(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_OFFSET))(a1, a2);
		}

		static ::System::Void Pause_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_PAUSE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPaused(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_OFFSET))(a1);
		}

		static ::System::Boolean IsPaused_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ISPAUSED_1_OFFSET))(a1);
		}

		static ::System::Void SetAisacControl(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISACCONTROL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAisac_1(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETAISAC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacInfo a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetCurrentAisacControlValue(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUE_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Void Stop(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_OFFSET))(a1);
		}

		static ::System::Void Stop_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOP_1_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_OFFSET))(a1);
		}

		static ::System::Void StopWithoutReleaseTime_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIME_1_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetTotalVolume_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETTOTALVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void SetFadeInTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeInTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEINTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_OFFSET))(a1, a2);
		}

		static ::System::Void SetFadeOutTime_1(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETFADEOUTTIME_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ResetAllAisacControl(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_OFFSET))(a1);
		}

		static ::System::Boolean ResetAllAisacControl_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_RESETALLAISACCONTROL_1_OFFSET))(a1);
		}

		static ::System::Void AttachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void AttachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_ATTACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisac_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISAC_1_OFFSET))(a1, a2);
		}

		static ::System::Void DetachAisacAll(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_OFFSET))(a1);
		}

		static ::System::Void DetachAisacAll_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_DETACHAISACALL_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_OFFSET))(a1);
		}

		static ::System::Int32 GetNumAttachedAisacs_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACS_1_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetNumCuePlayingCount_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNT_1_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetVolumeById(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExCategory_GetVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_MuteByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_MUTEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsMutedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISMUTEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloById(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SoloByName(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SOLOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_IsSoloedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISSOLOEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseById(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_PauseByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_PAUSEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_IsPausedByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ISPAUSEDBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetAisacControlById(::System::Int32 a1, ::System::UInt16 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetAisacControlByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETAISACCONTROLBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExCategory_SetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Void(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetReactParameter(::System::String* a1, ::CriWare::CriAtomExCategory_ReactParameter a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExCategory_ReactParameter))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTPARAMETER_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoById(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetAttachedAisacInfoByName(::System::String* a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETATTACHEDAISACINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExCategory_GetCurrentAisacControlValueByName(::System::String* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETCURRENTAISACCONTROLVALUEBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExCategory_ReactStatus criAtomExCategory_GetReactStatus(::System::String* a1)
		{
			return ((::CriWare::CriAtomExCategory_ReactStatus(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETREACTSTATUS_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeById(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYID_OFFSET))(a1);
		}

		static ::System::Single criAtomExCategory_GetTotalVolumeByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETTOTALVOLUMEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeInTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEINTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeById(::System::Int32 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_SetFadeOutTimeByName(::System::String* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETFADEOUTTIMEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlById(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYID_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExCategory_ResetAllAisacControlByName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_RESETALLAISACCONTROLBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_AttachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_AttachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_ATTACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacById(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_DetachAisacAllByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_DETACHAISACALLBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumAttachedAisacsByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMATTACHEDAISACSBYNAME_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountById(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExCategory_GetNumCuePlayingCountByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeById(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYID_OFFSET))(a1);
		}

		static ::System::Void criAtomExCategory_StopWithoutReleaseTimeByName(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_STOPWITHOUTRELEASETIMEBYNAME_OFFSET))(a1);
		}

	};
}
