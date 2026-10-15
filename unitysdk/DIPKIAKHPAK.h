#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;
class FALOGMPHKKH;
class FPHPFJLAJDK;
class OJLNNNNKBJD;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DIPKIAKHPAK_CTOR_OFFSET UNITYSDK_OFFSET(0xF22B0B0)
#define DIPKIAKHPAK_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xF22A3C0)
#define DIPKIAKHPAK_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xF22A500)
#define DIPKIAKHPAK_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xF22AB10)
#define DIPKIAKHPAK_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xF22A410)
#define DIPKIAKHPAK_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xF22B060)
#define DIPKIAKHPAK_UPDATEPROJECTIONADD_OFFSET UNITYSDK_OFFSET(0xF22A6E0)
#define DIPKIAKHPAK_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xF22A880)

	class DIPKIAKHPAK : public ::AMCOEFHHBPO
	{
	public:
		::OJLNNNNKBJD* POPNPMOFPIB; // 0x10
		::FALOGMPHKKH* CFMAOLOFAGJ; // 0x18
		::JJDFGMMMCMI JLIJFAKGEGH; // 0x20
		::System::UInt32 COKLKOEPCJE; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateProjectionAdd(::FPHPFJLAJDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEPROJECTIONADD_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPKIAKHPAK_UPDATEDONE_OFFSET))(this);
		}

	};
