#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPGPBFFBKGI;
class GEIHCPAOKKK;
namespace System { template <typename T1, typename T2> class Action_2; }

#define NDHOELFHEIO___C_FDGKMJIJKJJ_OFFSET UNITYSDK_OFFSET(0xE576180)
#define NDHOELFHEIO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE576130)
#define NDHOELFHEIO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE576170)

inline static constexpr unsigned int NDHOELFHEIO___c_TypeDefinitionIndex = 44836;

class NDHOELFHEIO___c : public ::System::Object
{
public:
	static ::System::Action_2<::GEIHCPAOKKK*, ::EPGPBFFBKGI*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::GEIHCPAOKKK*, ::EPGPBFFBKGI*>**)Il2CppClass::FromTypeDefinitionIndex(NDHOELFHEIO___c_TypeDefinitionIndex)->GetStaticField(0x454E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NDHOELFHEIO___c_TypeDefinitionIndex)->GetStaticField(0x454E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDHOELFHEIO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHOELFHEIO___C__CTOR_OFFSET))(this);
	}

	::System::Void FDGKMJIJKJJ(::GEIHCPAOKKK* OHPJHPEOFLD, ::EPGPBFFBKGI* HKNHEEDHGBI)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::EPGPBFFBKGI*))((::PBYTE)hIl2Cpp + NDHOELFHEIO___C_FDGKMJIJKJJ_OFFSET))(this, OHPJHPEOFLD, HKNHEEDHGBI);
	}
};
