#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BC409F9D6A48E8B9;
class FC5450E34EADA2D8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ED5126F8CE08070E; }

#define E0C798F95A29BC19_AC50633C757E667C_A200FA2C85F1E0D2_OFFSET UNITYSDK_OFFSET(0x41C32D0)
#define E0C798F95A29BC19_AC50633C757E667C_BBC0F043C0FBA0B5_OFFSET UNITYSDK_OFFSET(0x41C3260)
#define E0C798F95A29BC19_AC50633C757E667C_E6D96990788E1653_OFFSET UNITYSDK_OFFSET(0x41C3040)
#define E0C798F95A29BC19_AC50633C757E667C_F3223F4CD48492B1_OFFSET UNITYSDK_OFFSET(0x41C31D0)
#define E0C798F95A29BC19_AC50633C757E667C__CCTOR_OFFSET UNITYSDK_OFFSET(0x41C3310)

namespace E0C798F95A29BC19
{
	inline static constexpr unsigned int AC50633C757E667C_TypeDefinitionIndex = 21444;

	class AC50633C757E667C : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ED5126F8CE08070E*>** StaticGet_FF23FF8B0922D3D4()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ED5126F8CE08070E*>**)Il2CppClass::FromTypeDefinitionIndex(AC50633C757E667C_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::FC5450E34EADA2D8*>** StaticGet_E8CAC9F4BA2D1F26()
		{
			return (::System::Collections::Generic::List_1<::FC5450E34EADA2D8*>**)Il2CppClass::FromTypeDefinitionIndex(AC50633C757E667C_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Collections::Generic::List_1<::BC409F9D6A48E8B9*>** StaticGet_BD2318AC8B1058D1()
		{
			return (::System::Collections::Generic::List_1<::BC409F9D6A48E8B9*>**)Il2CppClass::FromTypeDefinitionIndex(AC50633C757E667C_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E0C798F95A29BC19_AC50633C757E667C__CCTOR_OFFSET))();
		}

		static ::System::Void F3223F4CD48492B1(::System::IntPtr B03018C24D85EDA4, ::UnityEngine::ED5126F8CE08070E* E7F13465F7E064E1)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::ED5126F8CE08070E*))((::PBYTE)hIl2Cpp + E0C798F95A29BC19_AC50633C757E667C_F3223F4CD48492B1_OFFSET))(B03018C24D85EDA4, E7F13465F7E064E1);
		}

		static ::System::Void BBC0F043C0FBA0B5(::BC409F9D6A48E8B9* E3E06922737CCF04)
		{
			return ((::System::Void(*)(::BC409F9D6A48E8B9*))((::PBYTE)hIl2Cpp + E0C798F95A29BC19_AC50633C757E667C_BBC0F043C0FBA0B5_OFFSET))(E3E06922737CCF04);
		}

		static ::System::Void A200FA2C85F1E0D2(::System::String* F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E0C798F95A29BC19_AC50633C757E667C_A200FA2C85F1E0D2_OFFSET))(F5AEFA05C9F71B82);
		}

		static ::System::Void E6D96990788E1653()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E0C798F95A29BC19_AC50633C757E667C_E6D96990788E1653_OFFSET))();
		}
	};
}
