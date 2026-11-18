#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/TitleShowType.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define GPPMPHICDEA_HAEHECKEDHG_BDADJHJAMFA_OFFSET UNITYSDK_OFFSET(0x795F60)
#define GPPMPHICDEA_HAEHECKEDHG_HCDCEPCPMEF_1_OFFSET UNITYSDK_OFFSET(0x7960E0)
#define GPPMPHICDEA_HAEHECKEDHG_HCDCEPCPMEF_OFFSET UNITYSDK_OFFSET(0x795E80)
#define GPPMPHICDEA_HAEHECKEDHG_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x796160)
#define GPPMPHICDEA_HAEHECKEDHG_JMKKNOPJAGJ_OFFSET UNITYSDK_OFFSET(0x796060)
#define GPPMPHICDEA_HAEHECKEDHG_NLJDMFNFFNJ_OFFSET UNITYSDK_OFFSET(0x795F10)
#define GPPMPHICDEA_HAEHECKEDHG_PMJHCFFCBLK_OFFSET UNITYSDK_OFFSET(0x795FE0)
#define GPPMPHICDEA_HAEHECKEDHG__CTOR_OFFSET UNITYSDK_OFFSET(0x795E60)

inline static constexpr unsigned int GPPMPHICDEA_HAEHECKEDHG_TypeDefinitionIndex = 42647;

struct alignas(8) GPPMPHICDEA_HAEHECKEDHG
{
	::System::Int32 HJDJEOAEICO; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action* CBKCOOIKPBE; // 0x18
	::Il2CppArray<::System::Object*>* NOJCGEDDJHG; // 0x20
	::System::Int64 MIMCMAKGELI; // 0x28
	::UnityEngine::UI::Extension::TitleShowType GCJHLGPCBNB; // 0x30
	::System::Byte _padding1[0x4];
	::System::String* JBGMEIJJPKL; // 0x38
	::System::Boolean CFLCOMIEOHI; // 0x40
	::System::Byte _padding2[0x7];
	::MoleMole::UIGeneralTipsPopWindowController* IELPKOJHDKB; // 0x48

	::System::Void _ctor(::System::Int32 JLDNMNKIAAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG__CTOR_OFFSET))(this, JLDNMNKIAAE);
	}

	/*
	::GPPMPHICDEA_HAEHECKEDHG HCDCEPCPMEF(::System::String* LILDFEEELNG)
	{
		return ((::GPPMPHICDEA_HAEHECKEDHG(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_HCDCEPCPMEF_OFFSET))(this, LILDFEEELNG);
	}
	*/

	::Il2CppArray<::System::Object*>* NLJDMFNFFNJ()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_NLJDMFNFFNJ_OFFSET))(this);
	}

	/*
	::GPPMPHICDEA_HAEHECKEDHG BDADJHJAMFA(::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::GPPMPHICDEA_HAEHECKEDHG(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_BDADJHJAMFA_OFFSET))(this, KOIBHLHLMFC);
	}
	*/

	/*
	::GPPMPHICDEA_HAEHECKEDHG PMJHCFFCBLK(::System::Int64 PENCLEDOJLL)
	{
		return ((::GPPMPHICDEA_HAEHECKEDHG(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_PMJHCFFCBLK_OFFSET))(this, PENCLEDOJLL);
	}
	*/

	/*
	::GPPMPHICDEA_HAEHECKEDHG JMKKNOPJAGJ(::System::Action* FJPKEALJGJM)
	{
		return ((::GPPMPHICDEA_HAEHECKEDHG(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_JMKKNOPJAGJ_OFFSET))(this, FJPKEALJGJM);
	}
	*/

	/*
	::GPPMPHICDEA_HAEHECKEDHG HCDCEPCPMEF_1(::UnityEngine::UI::Extension::TitleShowType OANPJOJFIDM)
	{
		return ((::GPPMPHICDEA_HAEHECKEDHG(*)(::PVOID, ::UnityEngine::UI::Extension::TitleShowType))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_HCDCEPCPMEF_1_OFFSET))(this, OANPJOJFIDM);
	}
	*/

	::MoleMole::UIGeneralTipsPopWindowController* HFBPONNNLBA()
	{
		return ((::MoleMole::UIGeneralTipsPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HAEHECKEDHG_HFBPONNNLBA_OFFSET))(this);
	}
};
