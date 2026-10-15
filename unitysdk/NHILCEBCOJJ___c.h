#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHILCEBCOJJ;
namespace System { class Object; }

#define NHILCEBCOJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1C00)
#define NHILCEBCOJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1C40)
#define NHILCEBCOJJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAF1C50)

inline static constexpr unsigned int NHILCEBCOJJ___c_TypeDefinitionIndex = 27408;

	class NHILCEBCOJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHILCEBCOJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ___C_CTOR_OFFSET))(this);
		}

		::NHILCEBCOJJ* __cctor_b__23_0()
		{
			return ((::NHILCEBCOJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
