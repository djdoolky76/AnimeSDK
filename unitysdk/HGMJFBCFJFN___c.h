#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGMJFBCFJFN;
namespace System { class Object; }

#define HGMJFBCFJFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F87CC70)
#define HGMJFBCFJFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F87CCB0)
#define HGMJFBCFJFN___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1F87CCC0)

inline static constexpr unsigned int HGMJFBCFJFN___c_TypeDefinitionIndex = 28617;

	class HGMJFBCFJFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C_CTOR_OFFSET))(this);
		}

		::HGMJFBCFJFN* __cctor_b__72_0()
		{
			return ((::HGMJFBCFJFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMJFBCFJFN___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
