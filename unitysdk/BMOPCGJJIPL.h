#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightAugmentEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define BMOPCGJJIPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC06D0)
#define BMOPCGJJIPL_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBDBFA40)
#define BMOPCGJJIPL_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xBDC0180)
#define BMOPCGJJIPL_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xBDC00A0)
#define BMOPCGJJIPL_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xBDBFFC0)
#define BMOPCGJJIPL_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xBDC04F0)
#define BMOPCGJJIPL_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBDBFB10)
#define BMOPCGJJIPL_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xBDBFED0)
#define BMOPCGJJIPL_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xBDC0110)
#define BMOPCGJJIPL_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xBDBFF40)
#define BMOPCGJJIPL_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xBDC0030)
#define BMOPCGJJIPL_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBDC0260)
#define BMOPCGJJIPL_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBDC01F0)

inline static constexpr unsigned int BMOPCGJJIPL_TypeDefinitionIndex = 64389;

	class BMOPCGJJIPL : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightAugmentEffectData* FNGKPEFHFBO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BMOPCGJJIPL_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
