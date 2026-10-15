#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONBKDFCGJO;
namespace System { class Object; }

#define IONBKDFCGJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD320)
#define IONBKDFCGJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AD360)
#define IONBKDFCGJO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6AD370)

inline static constexpr unsigned int IONBKDFCGJO___c_TypeDefinitionIndex = 26764;

	class IONBKDFCGJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x552F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONBKDFCGJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO___C_CTOR_OFFSET))(this);
		}

		::IONBKDFCGJO* __cctor_b__18_0()
		{
			return ((::IONBKDFCGJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONBKDFCGJO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
