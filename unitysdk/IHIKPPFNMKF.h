#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IHIKPPFNMKF_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x193B4590)
#define IHIKPPFNMKF_CTOR_OFFSET UNITYSDK_OFFSET(0x193B45E0)
#define IHIKPPFNMKF_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0x193B4530)
#define IHIKPPFNMKF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x193B3D20)
#define IHIKPPFNMKF_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x193B4320)
#define IHIKPPFNMKF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x193B43B0)
#define IHIKPPFNMKF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x193B3E70)

inline static constexpr unsigned int IHIKPPFNMKF_TypeDefinitionIndex = 66878;

	class IHIKPPFNMKF : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightRole* OOMBMABGGHJ; // 0x10
		::RPG::Client::GridFightRole* AMLNAMDJKBD; // 0x18
		::System::UInt32 GJOKKELANBJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Boolean DLGFMPNEHGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_DLGFMPNEHGO_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_BNNKNIJBGPA_OFFSET))(this);
		}

	};
