#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JONNKENDDPG;
namespace System { class Object; }

#define JONNKENDDPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FADD830)
#define JONNKENDDPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FADD870)
#define JONNKENDDPG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FADD880)

inline static constexpr unsigned int JONNKENDDPG___c_TypeDefinitionIndex = 31985;

	class JONNKENDDPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x478E0);
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
