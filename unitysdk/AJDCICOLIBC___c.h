#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCICOLIBC;
namespace System { class Object; }

#define AJDCICOLIBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E391E60)
#define AJDCICOLIBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E391E90)
#define AJDCICOLIBC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E391EA0)

inline static constexpr unsigned int AJDCICOLIBC___c_TypeDefinitionIndex = 30603;

	class AJDCICOLIBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDCICOLIBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC___C_CTOR_OFFSET))(this);
		}

		::AJDCICOLIBC* __cctor_b__28_0()
		{
			return ((::AJDCICOLIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
