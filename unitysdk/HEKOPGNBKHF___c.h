#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System { template <typename T> class Comparison_1; }

#define HEKOPGNBKHF___C_MCBNCDDEKOO_OFFSET UNITYSDK_OFFSET(0x11010330)
#define HEKOPGNBKHF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x110102E0)
#define HEKOPGNBKHF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11010320)

inline static constexpr unsigned int HEKOPGNBKHF___c_TypeDefinitionIndex = 85177;

class HEKOPGNBKHF___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::ServerListInfo*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::MoleMole::ServerListInfo*>**)Il2CppClass::FromTypeDefinitionIndex(HEKOPGNBKHF___c_TypeDefinitionIndex)->GetStaticField(0x4F550);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HEKOPGNBKHF___c_TypeDefinitionIndex)->GetStaticField(0x4F558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEKOPGNBKHF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MCBNCDDEKOO(::MoleMole::ServerListInfo* EJCBEJMGFAJ, ::MoleMole::ServerListInfo* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ServerListInfo*, ::MoleMole::ServerListInfo*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF___C_MCBNCDDEKOO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
