#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IHIKPPFNMKF_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x164227B0)
#define IHIKPPFNMKF_CTOR_OFFSET UNITYSDK_OFFSET(0x16422800)
#define IHIKPPFNMKF_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0x16422750)
#define IHIKPPFNMKF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16422050)
#define IHIKPPFNMKF_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x16422550)
#define IHIKPPFNMKF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x164225E0)
#define IHIKPPFNMKF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x164220A0)

inline static constexpr unsigned int IHIKPPFNMKF_TypeDefinitionIndex = 65181;

	class IHIKPPFNMKF : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightRole* AMLNAMDJKBD; // 0x10
		::RPG::Client::GridFightRole* OOMBMABGGHJ; // 0x18
		::System::UInt32 GJOKKELANBJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IHIKPPFNMKF_ISCONCERNEDWITH_OFFSET))(this, a1);
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
