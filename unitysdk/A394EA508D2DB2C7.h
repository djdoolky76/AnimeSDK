#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/F0F9D4F9968FAF68.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A394EA508D2DB2C7_A2BCE28306A7A8B2_1_OFFSET UNITYSDK_OFFSET(0x27EE2C0)
#define A394EA508D2DB2C7_A2BCE28306A7A8B2_OFFSET UNITYSDK_OFFSET(0x27EE340)
#define A394EA508D2DB2C7_A74F6CADAE8ED4F0_OFFSET UNITYSDK_OFFSET(0x27EE470)
#define A394EA508D2DB2C7_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x27EE500)
#define A394EA508D2DB2C7_F6DDF447C34E2299_1_OFFSET UNITYSDK_OFFSET(0x27EE3D0)
#define A394EA508D2DB2C7_F6DDF447C34E2299_OFFSET UNITYSDK_OFFSET(0x27EE430)
#define A394EA508D2DB2C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x27EE590)
#define A394EA508D2DB2C7__CTOR_OFFSET UNITYSDK_OFFSET(0x27EE5E0)

inline static constexpr unsigned int A394EA508D2DB2C7_TypeDefinitionIndex = 16774;

class A394EA508D2DB2C7 : public ::System::Object
{
public:
	static ::System::UInt16* StaticGet_E3682FFE11482D13()
	{
		return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(A394EA508D2DB2C7_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::UInt16* StaticGet_E51AB5B3923AD09E()
	{
		return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(A394EA508D2DB2C7_TypeDefinitionIndex)->GetStaticField(0x2);
	}
	::System::Collections::Generic::List_1<::System::UInt16>* E8A93E0A5D3D8C61; // 0x10
	::System::Collections::Generic::List_1<::System::UInt16>* F480418393CB1E69; // 0x18
	::System::Collections::Generic::List_1<::System::UInt16>* F2B6E3B93D374F23; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt16>* E4CD6C85B2757045; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7__CTOR_OFFSET))(this);
	}

	::System::Int32 F6DDF447C34E2299()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_F6DDF447C34E2299_OFFSET))(this);
	}

	::System::UInt16 A2BCE28306A7A8B2(::UnityEngine::F0F9D4F9968FAF68 F967A0F854919567, ::System::Int32 B148B904ABBFFC02)
	{
		return ((::System::UInt16(*)(::PVOID, ::UnityEngine::F0F9D4F9968FAF68, ::System::Int32))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_A2BCE28306A7A8B2_OFFSET))(this, F967A0F854919567, B148B904ABBFFC02);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A394EA508D2DB2C7__CCTOR_OFFSET))();
	}

	::System::Boolean A74F6CADAE8ED4F0(::UnityEngine::F0F9D4F9968FAF68 A288CB28FC2A6DA3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::F0F9D4F9968FAF68))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_A74F6CADAE8ED4F0_OFFSET))(this, A288CB28FC2A6DA3);
	}

	::System::Int32 F6DDF447C34E2299_1(::UnityEngine::F0F9D4F9968FAF68 F967A0F854919567)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::F0F9D4F9968FAF68))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_F6DDF447C34E2299_1_OFFSET))(this, F967A0F854919567);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::UInt16 A2BCE28306A7A8B2_1(::System::Int32 BE32072C29C8E3C2)
	{
		return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A394EA508D2DB2C7_A2BCE28306A7A8B2_1_OFFSET))(this, BE32072C29C8E3C2);
	}
};
