#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DEMCGIIKAHM___C_HCAAFAGAKDN_OFFSET UNITYSDK_OFFSET(0x12069B00)
#define DEMCGIIKAHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12069AB0)
#define DEMCGIIKAHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12069AF0)

inline static constexpr unsigned int DEMCGIIKAHM___c_TypeDefinitionIndex = 76221;

class DEMCGIIKAHM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::AJJMHOGKDNF>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Int32, ::AJJMHOGKDNF>**)Il2CppClass::FromTypeDefinitionIndex(DEMCGIIKAHM___c_TypeDefinitionIndex)->GetStaticField(0x43140);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEMCGIIKAHM___c_TypeDefinitionIndex)->GetStaticField(0x43148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMCGIIKAHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMCGIIKAHM___C__CTOR_OFFSET))(this);
	}

	::AJJMHOGKDNF HCAAFAGAKDN(::System::Int32 HFMHOELKCAJ)
	{
		return ((::AJJMHOGKDNF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEMCGIIKAHM___C_HCAAFAGAKDN_OFFSET))(this, HFMHOELKCAJ);
	}
};
