#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightPlayerChangeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define ANIHBJGNADE_BHJLEFDPKBG_OFFSET UNITYSDK_OFFSET(0x1558C420)
#define ANIHBJGNADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1558D030)
#define ANIHBJGNADE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1558C4F0)
#define ANIHBJGNADE_JNJHAIEIHMH_OFFSET UNITYSDK_OFFSET(0x1558C600)
#define ANIHBJGNADE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1558C550)
#define ANIHBJGNADE_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1558C7A0)
#define ANIHBJGNADE_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x1558C9C0)
#define ANIHBJGNADE_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x1558CE20)

inline static constexpr unsigned int ANIHBJGNADE_TypeDefinitionIndex = 65070;

	class ANIHBJGNADE : public ::AMCOEFHHBPO
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

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + ANIHBJGNADE_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ANIHBJGNADE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void JNJHAIEIHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIHBJGNADE_JNJHAIEIHMH_OFFSET))(this, a1, a2);
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
