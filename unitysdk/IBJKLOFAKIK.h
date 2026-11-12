#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABFLAJLMHM;
class EJCLAFODBMD;
class HMKGPMLLAFH;
class IHCBCCNGOBL;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBJKLOFAKIK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16DE5410)
#define IBJKLOFAKIK_CTOR_OFFSET UNITYSDK_OFFSET(0x16DE53F0)
#define IBJKLOFAKIK_MEPLHOJOGCG_OFFSET UNITYSDK_OFFSET(0x16DE5BD0)
#define IBJKLOFAKIK_OBBFOANNPKO_OFFSET UNITYSDK_OFFSET(0x16DE5620)

inline static constexpr unsigned int IBJKLOFAKIK_TypeDefinitionIndex = 82403;

	class IBJKLOFAKIK : public ::System::Object
	{
	public:
		::IHCBCCNGOBL* BKGONBBCKAH; // 0x10
		::EJCLAFODBMD* KDBNLBFFHDB; // 0x18
		::HMKGPMLLAFH* MEHJMKABEFA; // 0x20
		::EABFLAJLMHM* JDNJLANNING; // 0x28
		::System::Void _ctor(::HMKGPMLLAFH* a1, ::IHCBCCNGOBL* a2, ::EABFLAJLMHM* a3, ::EJCLAFODBMD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HMKGPMLLAFH*, ::IHCBCCNGOBL*, ::EABFLAJLMHM*, ::EJCLAFODBMD*))((::PBYTE)hIl2Cpp + IBJKLOFAKIK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewModel* BPLPBPMEODA()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJKLOFAKIK_BPLPBPMEODA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* OBBFOANNPKO()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJKLOFAKIK_OBBFOANNPKO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>* MEPLHOJOGCG()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJKLOFAKIK_MEPLHOJOGCG_OFFSET))(this);
		}

	};
