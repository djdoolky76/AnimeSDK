#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define BKOIJCDHFFG___C_MGAIGLBHPLK_OFFSET UNITYSDK_OFFSET(0xFF85670)
#define BKOIJCDHFFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF85620)
#define BKOIJCDHFFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF85660)

inline static constexpr unsigned int BKOIJCDHFFG___c_TypeDefinitionIndex = 57819;

class BKOIJCDHFFG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKOIJCDHFFG___c_TypeDefinitionIndex)->GetStaticField(0x401B0);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__5_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(BKOIJCDHFFG___c_TypeDefinitionIndex)->GetStaticField(0x401B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKOIJCDHFFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIJCDHFFG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MGAIGLBHPLK(::Nap::NapECS::EcsComponent* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + BKOIJCDHFFG___C_MGAIGLBHPLK_OFFSET))(this, CBLGCIFLMKL);
	}
};
