#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJBFCEBNGF;
namespace System { class Object; }

#define ANJBFCEBNGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6340C0)
#define ANJBFCEBNGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E634100)
#define ANJBFCEBNGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E634110)

inline static constexpr unsigned int ANJBFCEBNGF___c_TypeDefinitionIndex = 26756;

	class ANJBFCEBNGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x478B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJBFCEBNGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF___C_CTOR_OFFSET))(this);
		}

		::ANJBFCEBNGF* __cctor_b__33_0()
		{
			return ((::ANJBFCEBNGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
