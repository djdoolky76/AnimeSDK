#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCOKHFFALL;
namespace System { class Object; }

#define GFCOKHFFALL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F750550)
#define GFCOKHFFALL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F750590)
#define GFCOKHFFALL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7505A0)

inline static constexpr unsigned int GFCOKHFFALL___c_TypeDefinitionIndex = 34888;

	class GFCOKHFFALL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCOKHFFALL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL___C_CTOR_OFFSET))(this);
		}

		::GFCOKHFFALL* __cctor_b__28_0()
		{
			return ((::GFCOKHFFALL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
