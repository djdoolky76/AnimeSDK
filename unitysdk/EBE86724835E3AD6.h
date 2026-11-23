#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ProceduralWorlds::Setup { class SetupSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define EBE86724835E3AD6_A247D569BD335004_OFFSET UNITYSDK_OFFSET(0x29CB3F0)
#define EBE86724835E3AD6_E242C77E3EED041E_OFFSET UNITYSDK_OFFSET(0x29CB3C0)
#define EBE86724835E3AD6_E9F6B0A368131A22_OFFSET UNITYSDK_OFFSET(0x168A070)
#define EBE86724835E3AD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EBE86724835E3AD6_TypeDefinitionIndex = 15695;

class EBE86724835E3AD6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBE86724835E3AD6__CTOR_OFFSET))(this);
	}

	static ::System::String* E242C77E3EED041E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EBE86724835E3AD6_E242C77E3EED041E_OFFSET))();
	}

	static ::UnityEngine::Object* E9F6B0A368131A22(::System::String* EA4B5CFD16075773, ::System::Type* B921B7FE9A0F70BF)
	{
		return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + EBE86724835E3AD6_E9F6B0A368131A22_OFFSET))(EA4B5CFD16075773, B921B7FE9A0F70BF);
	}

	static ::ProceduralWorlds::Setup::SetupSettings* A247D569BD335004()
	{
		return ((::ProceduralWorlds::Setup::SetupSettings*(*)())((::PBYTE)hIl2Cpp + EBE86724835E3AD6_A247D569BD335004_OFFSET))();
	}
};
