#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightPlayerChangeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define ANIHBJGNADE_BDHJOLFHJHD_OFFSET UNITYSDK_OFFSET(0x16701030)
#define ANIHBJGNADE_BHJLEFDPKBG_OFFSET UNITYSDK_OFFSET(0x16700BE0)
#define ANIHBJGNADE_CTOR_OFFSET UNITYSDK_OFFSET(0x16702410)
#define ANIHBJGNADE_FOCMPMLPMEJ_OFFSET UNITYSDK_OFFSET(0x16700CB0)
#define ANIHBJGNADE_GAOPAKEALLG_OFFSET UNITYSDK_OFFSET(0x167011D0)
#define ANIHBJGNADE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16700F00)
#define ANIHBJGNADE_MCPFCOJCNOC_OFFSET UNITYSDK_OFFSET(0x167010A0)
#define ANIHBJGNADE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16700F60)
#define ANIHBJGNADE_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x16701B90)
#define ANIHBJGNADE_UPDATEHP_OFFSET UNITYSDK_OFFSET(0x167019F0)
#define ANIHBJGNADE_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x16701DA0)
#define ANIHBJGNADE_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x16702200)

inline static constexpr unsigned int ANIHBJGNADE_TypeDefinitionIndex = 66737;

	class ANIHBJGNADE : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightPlayerChangeData* APPIHABBCGK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIHBJGNADE_CTOR_OFFSET))(this);
		}

		::System::UInt32 BHJLEFDPKBG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_BHJLEFDPKBG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID FOCMPMLPMEJ()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIHBJGNADE_FOCMPMLPMEJ_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + ANIHBJGNADE_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void BDHJOLFHJHD(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ANIHBJGNADE_BDHJOLFHJHD_OFFSET))(this, a1, a2);
		}

		::System::Boolean MCPFCOJCNOC(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + ANIHBJGNADE_MCPFCOJCNOC_OFFSET))(this, a1);
		}

		::System::Void GAOPAKEALLG(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ANIHBJGNADE_GAOPAKEALLG_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateHP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATEHP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATEMAXROLENUM_OFFSET))(this, a1);
		}

	};
