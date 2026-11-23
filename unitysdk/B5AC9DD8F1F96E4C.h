#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A39C1E943F78FB47;
class E687A01DFBC67C30;
class F6DD1D9256FCD8BF;
namespace A418C49FA6A8C1F7 { class EA90F6849CE74CF0; }
namespace A418C49FA6A8C1F7 { class EDA9A0CF8D2EC7AA; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B5AC9DD8F1F96E4C_B98D3974D2702B9E_OFFSET UNITYSDK_OFFSET(0x42BA620)
#define B5AC9DD8F1F96E4C_F7493AD6C15D9664_OFFSET UNITYSDK_OFFSET(0x42BA080)
#define B5AC9DD8F1F96E4C_FEB4BCFB0527BB07_OFFSET UNITYSDK_OFFSET(0x42BA560)
#define B5AC9DD8F1F96E4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x42BA6F0)

inline static constexpr unsigned int B5AC9DD8F1F96E4C_TypeDefinitionIndex = 14131;

class B5AC9DD8F1F96E4C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::F6DD1D9256FCD8BF*, ::A39C1E943F78FB47*>** StaticGet_B7279E778351A1FA()
	{
		return (::System::Collections::Generic::Dictionary_2<::F6DD1D9256FCD8BF*, ::A39C1E943F78FB47*>**)Il2CppClass::FromTypeDefinitionIndex(B5AC9DD8F1F96E4C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::E687A01DFBC67C30*, ::A39C1E943F78FB47*>** StaticGet_E2FD6ABAFE5D1F7F()
	{
		return (::System::Collections::Generic::Dictionary_2<::E687A01DFBC67C30*, ::A39C1E943F78FB47*>**)Il2CppClass::FromTypeDefinitionIndex(B5AC9DD8F1F96E4C_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Type** StaticGet_BAA026891CFDB83C()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(B5AC9DD8F1F96E4C_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::A39C1E943F78FB47* F7493AD6C15D9664(::F6DD1D9256FCD8BF* A0621193A852362A)
	{
		return ((::A39C1E943F78FB47*(*)(::F6DD1D9256FCD8BF*))((::PBYTE)hIl2Cpp + B5AC9DD8F1F96E4C_F7493AD6C15D9664_OFFSET))(A0621193A852362A);
	}

	static ::System::Void B98D3974D2702B9E(::A418C49FA6A8C1F7::EDA9A0CF8D2EC7AA* B88E0DC1063F2196)
	{
		return ((::System::Void(*)(::A418C49FA6A8C1F7::EDA9A0CF8D2EC7AA*))((::PBYTE)hIl2Cpp + B5AC9DD8F1F96E4C_B98D3974D2702B9E_OFFSET))(B88E0DC1063F2196);
	}

	static ::System::Void FEB4BCFB0527BB07(::A418C49FA6A8C1F7::EA90F6849CE74CF0* A3BDDE9D1F2C8C6A)
	{
		return ((::System::Void(*)(::A418C49FA6A8C1F7::EA90F6849CE74CF0*))((::PBYTE)hIl2Cpp + B5AC9DD8F1F96E4C_FEB4BCFB0527BB07_OFFSET))(A3BDDE9D1F2C8C6A);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B5AC9DD8F1F96E4C__CCTOR_OFFSET))();
	}
};
