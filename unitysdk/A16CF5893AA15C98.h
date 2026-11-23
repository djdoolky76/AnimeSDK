#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4D24C80720EF0B3/A11D908F3AC31322.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"
#include "unitysdk/UnityEngine/Vector2.h"

class A16CF5893AA15C98_A3861A3204C77657;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AB4BABFB400D6C39; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
template <typename T> class FCECB52A00C1344E;

#define A16CF5893AA15C98_B4BCDFAC1CB1BBD7_OFFSET UNITYSDK_OFFSET(0x4401E00)
#define A16CF5893AA15C98_B6B538C75E5EE96C_OFFSET UNITYSDK_OFFSET(0x4401D90)
#define A16CF5893AA15C98_B80E69E66867D435_OFFSET UNITYSDK_OFFSET(0x4402A90)
#define A16CF5893AA15C98_E4EAF4C5039A3E4A_OFFSET UNITYSDK_OFFSET(0x4402080)
#define A16CF5893AA15C98_F16E2E44664413EB_OFFSET UNITYSDK_OFFSET(0x4401BD0)
#define A16CF5893AA15C98_F4EC7ACD4EAAD195_1_OFFSET UNITYSDK_OFFSET(0x4402520)
#define A16CF5893AA15C98_F4EC7ACD4EAAD195_OFFSET UNITYSDK_OFFSET(0x4402680)
#define A16CF5893AA15C98__CCTOR_OFFSET UNITYSDK_OFFSET(0x44030B0)
#define A16CF5893AA15C98__CTOR_OFFSET UNITYSDK_OFFSET(0x4403130)

inline static constexpr unsigned int A16CF5893AA15C98_TypeDefinitionIndex = 19560;

class A16CF5893AA15C98 : public ::System::Object
{
public:
	static ::FCECB52A00C1344E<::UnityEngine::AF7290E01E012C43>** StaticGet_BD28135759041135()
	{
		return (::FCECB52A00C1344E<::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(A16CF5893AA15C98_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
	::System::Boolean F7E9B31E7398CC35; // 0x18
	::System::Boolean EBA91B7B21F80017; // 0x19
	::System::Byte _padding0[0x6];
	::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>* E4300DEAAE676EF3; // 0x20
	::B4D24C80720EF0B3::A11D908F3AC31322 A09D559E0D8918EF; // 0x28
	::UnityEngine::Vector2 B4529C9D0DD99DB1; // 0x2C
	::System::Byte _padding1[0x4];
	::A16CF5893AA15C98_A3861A3204C77657* E37F52A9F23F2B63; // 0x38
	::UnityEngine::Vector2 BE23826648AD4E80; // 0x40
	::System::Single A49B255CE515AEFF; // 0x48

	::System::Void E4EAF4C5039A3E4A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_E4EAF4C5039A3E4A_OFFSET))(this);
	}

	::System::Void B6B538C75E5EE96C(::UnityEngine::AB4BABFB400D6C39* BAFBBB8691317753)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AB4BABFB400D6C39*))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_B6B538C75E5EE96C_OFFSET))(this, BAFBBB8691317753);
	}

	::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67)
	{
		return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + A16CF5893AA15C98__CTOR_OFFSET))(this, F4DFD92A32442E67);
	}

	::System::Void B4BCDFAC1CB1BBD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_B4BCDFAC1CB1BBD7_OFFSET))(this);
	}

	::System::Void F4EC7ACD4EAAD195(::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>* BF9FEC313BE8AC63)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AB4BABFB400D6C39*>*))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_F4EC7ACD4EAAD195_OFFSET))(this, BF9FEC313BE8AC63);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A16CF5893AA15C98__CCTOR_OFFSET))();
	}

	::System::Void F16E2E44664413EB(::UnityEngine::Vector2 AD60C9DB88F1D16F, ::System::Single AB5DECEBD76014D6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_F16E2E44664413EB_OFFSET))(this, AD60C9DB88F1D16F, AB5DECEBD76014D6);
	}

	::System::Void F4EC7ACD4EAAD195_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_F4EC7ACD4EAAD195_1_OFFSET))(this);
	}

	::System::Void B80E69E66867D435()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_B80E69E66867D435_OFFSET))(this);
	}
};
