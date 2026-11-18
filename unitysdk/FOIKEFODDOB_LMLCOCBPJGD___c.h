#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimationV2Index; }
namespace System { template <typename T> class Action_1; }

#define FOIKEFODDOB_LMLCOCBPJGD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x125B8500)
#define FOIKEFODDOB_LMLCOCBPJGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B84B0)
#define FOIKEFODDOB_LMLCOCBPJGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125B84F0)

inline static constexpr unsigned int FOIKEFODDOB_LMLCOCBPJGD___c_TypeDefinitionIndex = 66544;

class FOIKEFODDOB_LMLCOCBPJGD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_LMLCOCBPJGD___c_TypeDefinitionIndex)->GetStaticField(0x37770);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimationV2Index*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimationV2Index*>**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_LMLCOCBPJGD___c_TypeDefinitionIndex)->GetStaticField(0x37778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOIKEFODDOB_LMLCOCBPJGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_LMLCOCBPJGD___C__CTOR_OFFSET))(this);
	}

	::System::Void JFNPHKAHEJF(::MoleMole::Config::ConfigUIScriptableAnimationV2Index* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimationV2Index*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_LMLCOCBPJGD___C_JFNPHKAHEJF_OFFSET))(this, DFMKILICPFB);
	}
};
