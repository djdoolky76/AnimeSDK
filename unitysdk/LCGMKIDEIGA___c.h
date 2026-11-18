#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class AKDPNDDJEIJ;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LCGMKIDEIGA___C_GHDPAAFMFLH_OFFSET UNITYSDK_OFFSET(0x1A2ECE70)
#define LCGMKIDEIGA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2ECE20)
#define LCGMKIDEIGA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ECE60)

inline static constexpr unsigned int LCGMKIDEIGA___c_TypeDefinitionIndex = 61001;

class LCGMKIDEIGA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LCGMKIDEIGA___c_TypeDefinitionIndex)->GetStaticField(0x4A180);
	}
	static ::System::Action_2<::AKDPNDDJEIJ*, ::AEMCAOEICDG*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::AKDPNDDJEIJ*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(LCGMKIDEIGA___c_TypeDefinitionIndex)->GetStaticField(0x4A188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCGMKIDEIGA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA___C__CTOR_OFFSET))(this);
	}

	::System::Void GHDPAAFMFLH(::AKDPNDDJEIJ* GDCKCOJNKJL, ::AEMCAOEICDG* IPLJNKNDBFI)
	{
		return ((::System::Void(*)(::PVOID, ::AKDPNDDJEIJ*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + LCGMKIDEIGA___C_GHDPAAFMFLH_OFFSET))(this, GDCKCOJNKJL, IPLJNKNDBFI);
	}
};
