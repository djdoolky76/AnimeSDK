#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define NGEDPCODJEM___C_EENOPNCPDNL_OFFSET UNITYSDK_OFFSET(0x13756770)
#define NGEDPCODJEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13756720)
#define NGEDPCODJEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13756760)

inline static constexpr unsigned int NGEDPCODJEM___c_TypeDefinitionIndex = 90981;

class NGEDPCODJEM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NGEDPCODJEM___c_TypeDefinitionIndex)->GetStaticField(0x48EC0);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(NGEDPCODJEM___c_TypeDefinitionIndex)->GetStaticField(0x48EC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGEDPCODJEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEDPCODJEM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean EENOPNCPDNL(::Nap::NapECS::EcsComponent* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NGEDPCODJEM___C_EENOPNCPDNL_OFFSET))(this, CBLGCIFLMKL);
	}
};
