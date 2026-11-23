#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEE2ED4F588A2816.h"

class B6613C9D7676EEFB;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class AD3C66B368BBC67E; }
namespace System::Threading { class E3E5DF04DCFE6819; }
namespace System::Threading { class F0BF3AC54BEC2EEF; }

#define AEB41C8C17A560DD_AB3CE1D0D6AC7235_OFFSET UNITYSDK_OFFSET(0x3C53B40)
#define AEB41C8C17A560DD_B74E3BEE07164DD9_OFFSET UNITYSDK_OFFSET(0x3C53A60)
#define AEB41C8C17A560DD_F2C4E97AE7BC061C_OFFSET UNITYSDK_OFFSET(0x3C53BE0)
#define AEB41C8C17A560DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C53E10)
#define AEB41C8C17A560DD__CTOR_OFFSET UNITYSDK_OFFSET(0x3C53ED0)

inline static constexpr unsigned int AEB41C8C17A560DD_TypeDefinitionIndex = 11574;

class AEB41C8C17A560DD : public ::FEE2ED4F588A2816
{
public:
	static ::System::Threading::E3E5DF04DCFE6819** StaticGet_F8DA81F129FAE547()
	{
		return (::System::Threading::E3E5DF04DCFE6819**)Il2CppClass::FromTypeDefinitionIndex(AEB41C8C17A560DD_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Threading::AD3C66B368BBC67E** StaticGet_F163AB6C3FD22AE1()
	{
		return (::System::Threading::AD3C66B368BBC67E**)Il2CppClass::FromTypeDefinitionIndex(AEB41C8C17A560DD_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::System::Threading::F0BF3AC54BEC2EEF* E82F4B0B9E5CC40C; // 0x20

	static ::System::Void AB3CE1D0D6AC7235(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AEB41C8C17A560DD_AB3CE1D0D6AC7235_OFFSET))(E5EB06E4FD2C32F7);
	}

	static ::System::Threading::AD3C66B368BBC67E* B74E3BEE07164DD9()
	{
		return ((::System::Threading::AD3C66B368BBC67E*(*)())((::PBYTE)hIl2Cpp + AEB41C8C17A560DD_B74E3BEE07164DD9_OFFSET))();
	}

	::System::Void _ctor(::System::Threading::F0BF3AC54BEC2EEF* E6CE7391633EEC68, ::System::Action* BC288918C940C7A6, ::System::Boolean B5086C6B7E1F1EA0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::F0BF3AC54BEC2EEF*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEB41C8C17A560DD__CTOR_OFFSET))(this, E6CE7391633EEC68, BC288918C940C7A6, B5086C6B7E1F1EA0);
	}

	::System::Void F2C4E97AE7BC061C(::B6613C9D7676EEFB* F57B154938238684, ::System::Boolean BBF55F72FBB9F035)
	{
		return ((::System::Void(*)(::PVOID, ::B6613C9D7676EEFB*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEB41C8C17A560DD_F2C4E97AE7BC061C_OFFSET))(this, F57B154938238684, BBF55F72FBB9F035);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEB41C8C17A560DD__CCTOR_OFFSET))();
	}
};
