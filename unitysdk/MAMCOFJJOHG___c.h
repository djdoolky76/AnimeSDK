#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAMCOFJJOHG;
namespace System { class Object; }

#define MAMCOFJJOHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DB820)
#define MAMCOFJJOHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DB860)
#define MAMCOFJJOHG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9DB870)

inline static constexpr unsigned int MAMCOFJJOHG___c_TypeDefinitionIndex = 32315;

	class MAMCOFJJOHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAMCOFJJOHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG___C_CTOR_OFFSET))(this);
		}

		::MAMCOFJJOHG* __cctor_b__38_0()
		{
			return ((::MAMCOFJJOHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMCOFJJOHG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
