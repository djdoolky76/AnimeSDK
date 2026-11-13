#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHBOLKMEEMG;
namespace System { class Object; }

#define IHBOLKMEEMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7EF770)
#define IHBOLKMEEMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7EF7B0)
#define IHBOLKMEEMG___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F7EF7C0)

inline static constexpr unsigned int IHBOLKMEEMG___c_TypeDefinitionIndex = 28052;

	class IHBOLKMEEMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHBOLKMEEMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBOLKMEEMG___C_CTOR_OFFSET))(this);
		}

		::IHBOLKMEEMG* __cctor_b__58_0()
		{
			return ((::IHBOLKMEEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBOLKMEEMG___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
