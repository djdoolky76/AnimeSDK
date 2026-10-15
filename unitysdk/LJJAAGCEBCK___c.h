#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJAAGCEBCK;
namespace System { class Object; }

#define LJJAAGCEBCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9846D0)
#define LJJAAGCEBCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E984700)
#define LJJAAGCEBCK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E984710)

	class LJJAAGCEBCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJAAGCEBCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJAAGCEBCK___C_CTOR_OFFSET))(this);
		}

		::LJJAAGCEBCK* __cctor_b__43_0()
		{
			return ((::LJJAAGCEBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJAAGCEBCK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
