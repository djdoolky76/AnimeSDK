#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightPortalEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PPEHHLABAMB_CTOR_OFFSET UNITYSDK_OFFSET(0xCCB3D80)
#define PPEHHLABAMB_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xCCB3760)
#define PPEHHLABAMB_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xCCB3C60)
#define PPEHHLABAMB_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xCCB3B80)
#define PPEHHLABAMB_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xCCB3AA0)
#define PPEHHLABAMB_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xCCB3CD0)
#define PPEHHLABAMB_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xCCB37B0)
#define PPEHHLABAMB_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xCCB39B0)
#define PPEHHLABAMB_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xCCB3BF0)
#define PPEHHLABAMB_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xCCB3A20)
#define PPEHHLABAMB_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xCCB3B10)

inline static constexpr unsigned int PPEHHLABAMB_TypeDefinitionIndex = 65838;

	class PPEHHLABAMB : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightPortalEffectData* FNGKPEFHFBO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEHHLABAMB_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + PPEHHLABAMB_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + PPEHHLABAMB_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
