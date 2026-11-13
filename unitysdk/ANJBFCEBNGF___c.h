#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJBFCEBNGF;
namespace System { class Object; }

#define ANJBFCEBNGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2019FD30)
#define ANJBFCEBNGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2019FD70)
#define ANJBFCEBNGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2019FD80)

inline static constexpr unsigned int ANJBFCEBNGF___c_TypeDefinitionIndex = 27287;

	class ANJBFCEBNGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C000);
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
