#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHEAIMFOMO;
namespace System { class Object; }

#define MGHEAIMFOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D790)
#define MGHEAIMFOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D7D0)
#define MGHEAIMFOMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA4D7E0)

inline static constexpr unsigned int MGHEAIMFOMO___c_TypeDefinitionIndex = 32151;

	class MGHEAIMFOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C_CTOR_OFFSET))(this);
		}

		::MGHEAIMFOMO* __cctor_b__18_0()
		{
			return ((::MGHEAIMFOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
