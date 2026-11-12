#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDPPONBABG;
namespace System { class Object; }

#define AJDPPONBABG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F67C520)
#define AJDPPONBABG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F67C560)
#define AJDPPONBABG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F67C570)

inline static constexpr unsigned int AJDPPONBABG___c_TypeDefinitionIndex = 36054;

	class AJDPPONBABG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDPPONBABG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG___C_CTOR_OFFSET))(this);
		}

		::AJDPPONBABG* __cctor_b__23_0()
		{
			return ((::AJDPPONBABG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
