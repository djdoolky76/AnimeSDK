#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBFJJFDFABF;
namespace System { class Object; }

#define LBFJJFDFABF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F7810)
#define LBFJJFDFABF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F7850)
#define LBFJJFDFABF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8F7860)

inline static constexpr unsigned int LBFJJFDFABF___c_TypeDefinitionIndex = 31121;

	class LBFJJFDFABF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x295F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFJJFDFABF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF___C_CTOR_OFFSET))(this);
		}

		::LBFJJFDFABF* __cctor_b__33_0()
		{
			return ((::LBFJJFDFABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
