#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIFDHMKADE_CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCIFDHMKADE_OPCKNPGJDLN;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCIFDHMKADE_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA7EE0)
#define BCIFDHMKADE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EA8100)
#define BCIFDHMKADE_EAILPILLKJH_OFFSET UNITYSDK_OFFSET(0x15EA7EF0)
#define BCIFDHMKADE_GMBOBBFIBJO_OFFSET UNITYSDK_OFFSET(0x15EA8DF0)
#define BCIFDHMKADE_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15EA8D70)
#define BCIFDHMKADE_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0x15EA8CE0)
#define BCIFDHMKADE_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x15EA9140)
#define BCIFDHMKADE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EA8140)
#define BCIFDHMKADE_KMNNKNOAIHL_OFFSET UNITYSDK_OFFSET(0x15EA8230)
#define BCIFDHMKADE_KOGELKDGAGK_OFFSET UNITYSDK_OFFSET(0x15EA9000)
#define BCIFDHMKADE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15EA8980)

inline static constexpr unsigned int BCIFDHMKADE_TypeDefinitionIndex = 78637;

	class BCIFDHMKADE : public ::System::Object
	{
	public:
		::BCIFDHMKADE_OPCKNPGJDLN* JJBOPOPCOCH; // 0x10
		::RPG::GameCore::AnchorInfo* GNMKMIGAIMA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* IAIHPPPOMFD; // 0x20
		::RPG::GameCore::AnchorInfo* GBGDOEEJLNI; // 0x28
		::UnityEngine::Vector3 NPHFNMFEGMH; // 0x30
		::System::Single HADOIOBDNIO; // 0x3C
		::System::Single MKNNIHBDLPL; // 0x40
		::System::Single LDLLKKKKPAG; // 0x44
		::System::Single IGMMDOHEMOH; // 0x48
		::System::Single ANMLBOLKEBM; // 0x4C
		::System::Single JADAJLJPNCG; // 0x50
		::System::Single CHMOCJPBCHG; // 0x54
		::System::Single ECODDBJCIJJ; // 0x58
		::System::Single KOAOMFNCHFD; // 0x5C
		::System::Single EJCFJMAHAKP; // 0x60
		::System::Boolean FMNEEONAMNO; // 0x64
		::System::Byte _padding0[0x3];
		::System::Single BDPIFEPCHFC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::RPG::GameCore::AnchorInfo* a1, ::RPG::GameCore::AnchorInfo* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::AnchorInfo*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BCIFDHMKADE_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void EAILPILLKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_EAILPILLKJH_OFFSET))(this);
		}

		::BCIFDHMKADE_OPCKNPGJDLN* HPNKDJDJMLN(::BCIFDHMKADE_CameraState a1)
		{
			return ((::BCIFDHMKADE_OPCKNPGJDLN*(*)(::PVOID, ::BCIFDHMKADE_CameraState))((::PBYTE)hIl2Cpp + BCIFDHMKADE_HPNKDJDJMLN_OFFSET))(this, a1);
		}

		::System::Void GMBOBBFIBJO(::BCIFDHMKADE_CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE_CameraState))((::PBYTE)hIl2Cpp + BCIFDHMKADE_GMBOBBFIBJO_OFFSET))(this, a1);
		}

		::System::Void KMNNKNOAIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_KMNNKNOAIHL_OFFSET))(this);
		}

		::System::Boolean KOGELKDGAGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_KOGELKDGAGK_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_JKEONEEPIHH_OFFSET))(this);
		}

	};
