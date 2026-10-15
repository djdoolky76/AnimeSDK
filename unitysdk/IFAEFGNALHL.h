#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IFAEFGNALHL_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x15F085E0)
#define IFAEFGNALHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15F08630)
#define IFAEFGNALHL_DJMPBKGDLKI_OFFSET UNITYSDK_OFFSET(0x15F083A0)
#define IFAEFGNALHL_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x15F07B40)
#define IFAEFGNALHL_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x15F08450)
#define IFAEFGNALHL_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x15F07D00)
#define IFAEFGNALHL_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x15F08500)

	class IFAEFGNALHL : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightBonusResultData* ADIKIGNBDMN; // 0x10
		::RPG::Client::GridFightEquipItemData* NDCHFDJLAML; // 0x18
		::RPG::Client::GridFightRole* LPNLGDLMJFM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAEFGNALHL_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IFAEFGNALHL_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFAEFGNALHL_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void DJMPBKGDLKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFAEFGNALHL_DJMPBKGDLKI_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IFAEFGNALHL_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAEFGNALHL_UPDATEDONE_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAEFGNALHL_BNNKNIJBGPA_OFFSET))(this);
		}

	};
