#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class MMEDLCAENAL;
class PFBCBNMKFAK;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define OKNBLMBAMMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEFBA0)
#define OKNBLMBAMMD_DJMPBKGDLKI_OFFSET UNITYSDK_OFFSET(0xBEEF1B0)
#define OKNBLMBAMMD_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBEEEDA0)
#define OKNBLMBAMMD_JNJHAIEIHMH_OFFSET UNITYSDK_OFFSET(0xBEEF7C0)
#define OKNBLMBAMMD_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xBEEF670)
#define OKNBLMBAMMD_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xBEEF590)
#define OKNBLMBAMMD_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xBEEF310)
#define OKNBLMBAMMD_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xBEEFB40)
#define OKNBLMBAMMD_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBEEEDF0)
#define OKNBLMBAMMD_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xBEEF220)
#define OKNBLMBAMMD_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xBEEF600)
#define OKNBLMBAMMD_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xBEEF290)
#define OKNBLMBAMMD_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xBEEF520)
#define OKNBLMBAMMD_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0xBEEF750)
#define OKNBLMBAMMD_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBEEF8B0)
#define OKNBLMBAMMD_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBEEF6E0)

inline static constexpr unsigned int OKNBLMBAMMD_TypeDefinitionIndex = 64390;

	class OKNBLMBAMMD : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightAugmentEffectData* FNGKPEFHFBO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void DJMPBKGDLKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_DJMPBKGDLKI_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdatePresent(::PFBCBNMKFAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBCBNMKFAK*))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEPRESENT_OFFSET))(this, a1);
		}

		::System::Void JNJHAIEIHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_JNJHAIEIHMH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + OKNBLMBAMMD_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
