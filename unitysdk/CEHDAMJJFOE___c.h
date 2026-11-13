#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHDAMJJFOE;
namespace System { class Object; }

#define CEHDAMJJFOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204CAAC0)
#define CEHDAMJJFOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204CAB00)
#define CEHDAMJJFOE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x204CAB10)

inline static constexpr unsigned int CEHDAMJJFOE___c_TypeDefinitionIndex = 30030;

	class CEHDAMJJFOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEHDAMJJFOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE___C_CTOR_OFFSET))(this);
		}

		::CEHDAMJJFOE* __cctor_b__33_0()
		{
			return ((::CEHDAMJJFOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHDAMJJFOE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
