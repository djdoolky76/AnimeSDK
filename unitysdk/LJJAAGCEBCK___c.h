#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJAAGCEBCK;
namespace System { class Object; }

#define LJJAAGCEBCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F986190)
#define LJJAAGCEBCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9861C0)
#define LJJAAGCEBCK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F9861D0)

inline static constexpr unsigned int LJJAAGCEBCK___c_TypeDefinitionIndex = 27049;

	class LJJAAGCEBCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CF50);
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
