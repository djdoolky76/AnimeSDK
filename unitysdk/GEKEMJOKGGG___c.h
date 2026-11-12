#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEKEMJOKGGG;
namespace System { class Object; }

#define GEKEMJOKGGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7494C0)
#define GEKEMJOKGGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7494F0)
#define GEKEMJOKGGG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F749500)

inline static constexpr unsigned int GEKEMJOKGGG___c_TypeDefinitionIndex = 26836;

	class GEKEMJOKGGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEKEMJOKGGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG___C_CTOR_OFFSET))(this);
		}

		::GEKEMJOKGGG* __cctor_b__28_0()
		{
			return ((::GEKEMJOKGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKEMJOKGGG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
