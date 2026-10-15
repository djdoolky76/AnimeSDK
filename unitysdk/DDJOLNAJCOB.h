#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADHNHMOBGPI;
class CBJILMHOMGP;
class CEEGMMCFCBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define DDJOLNAJCOB_AEMILEDDCIP_OFFSET UNITYSDK_OFFSET(0xE4E2EA0)
#define DDJOLNAJCOB_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xE4E2060)
#define DDJOLNAJCOB_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E1E50)
#define DDJOLNAJCOB_DFAHCGNOLFF_OFFSET UNITYSDK_OFFSET(0xE4E2790)
#define DDJOLNAJCOB_GET_CLEARCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E23A0)
#define DDJOLNAJCOB_GET_ICONITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE4E23C0)
#define DDJOLNAJCOB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE4E2330)
#define DDJOLNAJCOB_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE4E2350)
#define DDJOLNAJCOB_GET_ISNOTRELEASEDVISIBLE_OFFSET UNITYSDK_OFFSET(0xE4E2360)
#define DDJOLNAJCOB_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0xE4E2340)
#define DDJOLNAJCOB_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xE4E2370)
#define DDJOLNAJCOB_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2380)
#define DDJOLNAJCOB_GET_SETROLECOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E2390)
#define DDJOLNAJCOB_GET_UPGRADECOMMAND_OFFSET UNITYSDK_OFFSET(0xE4E23B0)
#define DDJOLNAJCOB_HJEGGOEFOGN_OFFSET UNITYSDK_OFFSET(0xE4E23D0)
#define DDJOLNAJCOB_IFFNJAMKKAA_OFFSET UNITYSDK_OFFSET(0xE4E2D30)
#define DDJOLNAJCOB_PJACKFAOFKA_OFFSET UNITYSDK_OFFSET(0xE4E2A60)

inline static constexpr unsigned int DDJOLNAJCOB_TypeDefinitionIndex = 49715;

	class DDJOLNAJCOB : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _IsNotReleasedVisible_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _IsLocked_k__BackingField; // 0x18
		::ADHNHMOBGPI* _IconItemViewModel_k__BackingField; // 0x20
		::CEEGMMCFCBG* _SelectCommand_k__BackingField; // 0x28
		::CEEGMMCFCBG* _ClearCommand_k__BackingField; // 0x30
		::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x40
		::CEEGMMCFCBG* _UpgradeCommand_k__BackingField; // 0x48
		::CBJILMHOMGP* _SetRoleCommand_k__BackingField; // 0x50
		::System::Int32 _Index_k__BackingField; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_INDEX_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_ISROLEVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsLocked()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_ISLOCKED_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsNotReleasedVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_ISNOTRELEASEDVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
		{
			return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_ROLEID_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_SelectCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_SELECTCOMMAND_OFFSET))(this);
		}

		::CBJILMHOMGP* get_SetRoleCommand()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_SETROLECOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ClearCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_CLEARCOMMAND_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_UpgradeCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_UPGRADECOMMAND_OFFSET))(this);
		}

		::ADHNHMOBGPI* get_IconItemViewModel()
		{
			return ((::ADHNHMOBGPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_GET_ICONITEMVIEWMODEL_OFFSET))(this);
		}

		::System::Void HJEGGOEFOGN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_HJEGGOEFOGN_OFFSET))(this, a1);
		}

		::System::Void DFAHCGNOLFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_DFAHCGNOLFF_OFFSET))(this);
		}

		::System::Void PJACKFAOFKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_PJACKFAOFKA_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void IFFNJAMKKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_IFFNJAMKKAA_OFFSET))(this);
		}

		::System::Void AEMILEDDCIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJOLNAJCOB_AEMILEDDCIP_OFFSET))(this);
		}

	};
