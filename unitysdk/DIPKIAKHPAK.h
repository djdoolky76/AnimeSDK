#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
class FALOGMPHKKH;
class FPHPFJLAJDK;
class OJLNNNNKBJD;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DIPKIAKHPAK_CTOR_OFFSET UNITYSDK_OFFSET(0xF9912B0)
#define DIPKIAKHPAK_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xF9905C0)
#define DIPKIAKHPAK_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xF990700)
#define DIPKIAKHPAK_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xF990D10)
#define DIPKIAKHPAK_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xF990610)
#define DIPKIAKHPAK_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0xF991260)
#define DIPKIAKHPAK_UPDATEPROJECTIONADD_OFFSET UNITYSDK_OFFSET(0xF9908E0)
#define DIPKIAKHPAK_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xF990A80)

inline static constexpr unsigned int DIPKIAKHPAK_TypeDefinitionIndex = 66879;

	class DIPKIAKHPAK : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::FALOGMPHKKH* CFMAOLOFAGJ; // 0x10
		::OJLNNNNKBJD* POPNPMOFPIB; // 0x18
		::System::UInt32 COKLKOEPCJE; // 0x20
		::JJDFGMMMCMI JLIJFAKGEGH; // 0x24
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
