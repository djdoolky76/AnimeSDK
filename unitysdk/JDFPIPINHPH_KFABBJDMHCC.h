#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDFPIPINHPH_BlockType.h"
#include "unitysdk/System/Object.h"
class KNKPLOGICFO;
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define JDFPIPINHPH_KFABBJDMHCC_BKGGLHNLGBN_OFFSET UNITYSDK_OFFSET(0x165B63E0)
#define JDFPIPINHPH_KFABBJDMHCC_BOFBGHDILDN_OFFSET UNITYSDK_OFFSET(0x165B64A0)
#define JDFPIPINHPH_KFABBJDMHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x165B5000)
#define JDFPIPINHPH_KFABBJDMHCC_EJMFOGIHIOJ_OFFSET UNITYSDK_OFFSET(0x165B5B30)
#define JDFPIPINHPH_KFABBJDMHCC_GJGOGDHAAGM_OFFSET UNITYSDK_OFFSET(0x165B6440)
#define JDFPIPINHPH_KFABBJDMHCC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x165B55B0)
#define JDFPIPINHPH_KFABBJDMHCC_JOIJAKPNKGB_OFFSET UNITYSDK_OFFSET(0x165B6570)
#define JDFPIPINHPH_KFABBJDMHCC_KMGAPHPDDEI_OFFSET UNITYSDK_OFFSET(0x165B5120)
#define JDFPIPINHPH_KFABBJDMHCC_NPDPDCOEHGL_OFFSET UNITYSDK_OFFSET(0x165B65D0)
#define JDFPIPINHPH_KFABBJDMHCC_PMEOOCCGIFH_OFFSET UNITYSDK_OFFSET(0x165B6510)

inline static constexpr unsigned int JDFPIPINHPH_KFABBJDMHCC_TypeDefinitionIndex = 72798;

	class JDFPIPINHPH_KFABBJDMHCC : public ::System::Object
	{
	public:
		::RPG::Client::RspHandler* KBIBOELPMFL; // 0x10
		::KNKPLOGICFO* BJMAMHMCOEL; // 0x18
		::System::String* BJGAMICBIGO; // 0x20
		::System::Action* HGMNOPCPIKH; // 0x28
		::System::Single BDGADLBDLJJ; // 0x30
		::System::Single IDDACMMNLKH; // 0x34
		::JDFPIPINHPH_BlockType CFGEJHAOKED; // 0x38
		::System::Boolean HBLGIBHMEDL; // 0x3C
		::System::Boolean APHIEJBCJOF; // 0x3D
		::System::UInt16 HLMLGEDJFDH; // 0x3E
		::System::Single LOHLFBEDMLG; // 0x40
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
