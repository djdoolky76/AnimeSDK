#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDFPIPINHPH_BlockType.h"
#include "unitysdk/System/Object.h"
class KNKPLOGICFO;
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define JDFPIPINHPH_KFABBJDMHCC_BKGGLHNLGBN_OFFSET UNITYSDK_OFFSET(0x16987F00)
#define JDFPIPINHPH_KFABBJDMHCC_BOFBGHDILDN_OFFSET UNITYSDK_OFFSET(0x16987FC0)
#define JDFPIPINHPH_KFABBJDMHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x16986B30)
#define JDFPIPINHPH_KFABBJDMHCC_EJMFOGIHIOJ_OFFSET UNITYSDK_OFFSET(0x16987650)
#define JDFPIPINHPH_KFABBJDMHCC_GJGOGDHAAGM_OFFSET UNITYSDK_OFFSET(0x16987F60)
#define JDFPIPINHPH_KFABBJDMHCC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x169870D0)
#define JDFPIPINHPH_KFABBJDMHCC_JOIJAKPNKGB_OFFSET UNITYSDK_OFFSET(0x16988090)
#define JDFPIPINHPH_KFABBJDMHCC_KMGAPHPDDEI_OFFSET UNITYSDK_OFFSET(0x16986C50)
#define JDFPIPINHPH_KFABBJDMHCC_NPDPDCOEHGL_OFFSET UNITYSDK_OFFSET(0x169880F0)
#define JDFPIPINHPH_KFABBJDMHCC_PMEOOCCGIFH_OFFSET UNITYSDK_OFFSET(0x16988030)

inline static constexpr unsigned int JDFPIPINHPH_KFABBJDMHCC_TypeDefinitionIndex = 74877;

	class JDFPIPINHPH_KFABBJDMHCC : public ::System::Object
	{
	public:
		::System::String* BJGAMICBIGO; // 0x10
		::RPG::Client::RspHandler* KBIBOELPMFL; // 0x18
		::System::Action* HGMNOPCPIKH; // 0x20
		::KNKPLOGICFO* BJMAMHMCOEL; // 0x28
		::System::Boolean APHIEJBCJOF; // 0x30
		::System::Boolean HBLGIBHMEDL; // 0x31
		::System::UInt16 HLMLGEDJFDH; // 0x32
		::System::Single LOHLFBEDMLG; // 0x34
		::System::Single BDGADLBDLJJ; // 0x38
		::JDFPIPINHPH_BlockType CFGEJHAOKED; // 0x3C
		::System::Single IDDACMMNLKH; // 0x40
		::System::Void _ctor(::System::UInt16 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::RPG::Client::RspHandler* a5, ::System::Action* a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EJMFOGIHIOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_EJMFOGIHIOJ_OFFSET))(this, a1);
		}

		::System::Boolean PMEOOCCGIFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_PMEOOCCGIFH_OFFSET))(this);
		}

		::System::Boolean JOIJAKPNKGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_JOIJAKPNKGB_OFFSET))(this);
		}

		::System::Boolean NPDPDCOEHGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_NPDPDCOEHGL_OFFSET))(this);
		}

		::System::Void KMGAPHPDDEI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_KMGAPHPDDEI_OFFSET))(this, a1);
		}

		::System::Boolean BKGGLHNLGBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_BKGGLHNLGBN_OFFSET))(this);
		}

		::System::Void GJGOGDHAAGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_GJGOGDHAAGM_OFFSET))(this);
		}

		::System::Void BOFBGHDILDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_BOFBGHDILDN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFPIPINHPH_KFABBJDMHCC_HADOHLNHHGB_OFFSET))(this);
		}

	};
