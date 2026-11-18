#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigVideoAudioMapping; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define LAHPMAAOACA___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x1A2E81F0)
#define LAHPMAAOACA___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1A2E8370)
#define LAHPMAAOACA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2E81A0)
#define LAHPMAAOACA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E81E0)

inline static constexpr unsigned int LAHPMAAOACA___c_TypeDefinitionIndex = 68687;

class LAHPMAAOACA___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LAHPMAAOACA___c_TypeDefinitionIndex)->GetStaticField(0x4A160);
	}
	static ::System::Action_1<::MoleMole::ConfigVideoAudioMapping*>** StaticGet___9__1_1()
	{
		return (::System::Action_1<::MoleMole::ConfigVideoAudioMapping*>**)Il2CppClass::FromTypeDefinitionIndex(LAHPMAAOACA___c_TypeDefinitionIndex)->GetStaticField(0x4A168);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LAHPMAAOACA___c_TypeDefinitionIndex)->GetStaticField(0x4A170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAHPMAAOACA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHPMAAOACA___C__CTOR_OFFSET))(this);
	}

	::System::Void JAFCCEBIBJP(::MoleMole::ConfigVideoAudioMapping* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigVideoAudioMapping*))((::PBYTE)hIl2Cpp + LAHPMAAOACA___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHPMAAOACA___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
