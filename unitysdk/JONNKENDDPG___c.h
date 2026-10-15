#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JONNKENDDPG;
namespace System { class Object; }

#define JONNKENDDPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AD510)
#define JONNKENDDPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AD550)
#define JONNKENDDPG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7CA5E0)

inline static constexpr unsigned int JONNKENDDPG___c_TypeDefinitionIndex = 31072;

	class JONNKENDDPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JONNKENDDPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG___C_CTOR_OFFSET))(this);
		}

		::JONNKENDDPG* __cctor_b__33_0()
		{
			return ((::JONNKENDDPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONNKENDDPG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
