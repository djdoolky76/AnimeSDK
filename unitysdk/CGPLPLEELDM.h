#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class LuaUI3DController; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UI3DLinkRegistry; }
namespace RPG::Client { class UIController; }
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace Sofa { class BaseSofaWindow_SofaUIController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGPLPLEELDM_BFBIJJBLFAO_OFFSET UNITYSDK_OFFSET(0xCC89650)
#define CGPLPLEELDM_BIKHBOLNMJK_OFFSET UNITYSDK_OFFSET(0xCC897D0)
#define CGPLPLEELDM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC89CD0)
#define CGPLPLEELDM_DOJJIEHGHEF_OFFSET UNITYSDK_OFFSET(0xCC89B50)
#define CGPLPLEELDM_NEIGNFLNODL_OFFSET UNITYSDK_OFFSET(0xCC89830)
#define CGPLPLEELDM_PDFIAMDKPID_OFFSET UNITYSDK_OFFSET(0xCC89C20)
#define CGPLPLEELDM_PKLLFGJGKPK_OFFSET UNITYSDK_OFFSET(0xCC896E0)

inline static constexpr unsigned int CGPLPLEELDM_TypeDefinitionIndex = 72993;

	class CGPLPLEELDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Sofa::BaseSofaWindow*, ::Sofa::BaseSofaUI3DWindow*>* ELBFCIAOFIO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPLPLEELDM_CTOR_OFFSET))(this);
		}

		::RPG::Client::UI3DLinkRegistry* BFBIJJBLFAO()
		{
			return ((::RPG::Client::UI3DLinkRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPLPLEELDM_BFBIJJBLFAO_OFFSET))(this);
		}

		::RPG::Client::IUI3DController* PKLLFGJGKPK(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CGPLPLEELDM_PKLLFGJGKPK_OFFSET))(this, a1);
		}

		::System::Void DOJJIEHGHEF(::Sofa::BaseSofaWindow* a1, ::Sofa::BaseSofaUI3DWindow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*, ::Sofa::BaseSofaUI3DWindow*))((::PBYTE)hIl2Cpp + CGPLPLEELDM_DOJJIEHGHEF_OFFSET))(this, a1, a2);
		}

		::System::Void PDFIAMDKPID(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + CGPLPLEELDM_PDFIAMDKPID_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUI3DController* BIKHBOLNMJK(::RPG::Client::LuaUIController* a1)
		{
			return ((::RPG::Client::LuaUI3DController*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CGPLPLEELDM_BIKHBOLNMJK_OFFSET))(this, a1);
		}

		::Sofa::BaseSofaUI3DWindow* NEIGNFLNODL(::Sofa::BaseSofaWindow_SofaUIController* a1)
		{
			return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::Sofa::BaseSofaWindow_SofaUIController*))((::PBYTE)hIl2Cpp + CGPLPLEELDM_NEIGNFLNODL_OFFSET))(this, a1);
		}

	};
