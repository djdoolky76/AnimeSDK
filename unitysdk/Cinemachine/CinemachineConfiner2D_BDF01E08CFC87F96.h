#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AAF95C9CE8DF069C;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }

#define CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_B40DDC093274BA33_OFFSET UNITYSDK_OFFSET(0x2A5EE50)
#define CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_BDBC9839C92720CE_OFFSET UNITYSDK_OFFSET(0x2A5F060)
#define CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_E3D17824AB1D819C_OFFSET UNITYSDK_OFFSET(0x2A5EF20)
#define CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_FEA41B73BBB9C2A6_OFFSET UNITYSDK_OFFSET(0x2A5EC60)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_BDF01E08CFC87F96_TypeDefinitionIndex = 18360;

	struct alignas(8) CinemachineConfiner2D_BDF01E08CFC87F96
	{
		::AAF95C9CE8DF069C* A61E0B6F1C170D91; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* BCD5BF1E1A101EBD; // 0x18
		::UnityEngine::ACF10FE87B4C5617 A05E92EA8B7E259B; // 0x20
		::UnityEngine::ACF10FE87B4C5617 E49E6DA813C1EA82; // 0x60
		::System::Single B52E9D08244CBD68; // 0xA0
		::System::Single FE8D2D57058E9377; // 0xA4
		::System::Single EF02E89037BB6123; // 0xA8
		::UnityEngine::ACF10FE87B4C5617 E1EFF79B92A7244A; // 0xAC
		::System::Byte _padding0[0x4];
		::UnityEngine::Collider2D* F385C3F99B10F46C; // 0xF0

		::System::Void B40DDC093274BA33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_B40DDC093274BA33_OFFSET))(this);
		}

		::System::Boolean BDBC9839C92720CE(::UnityEngine::Collider2D* B8262ADF3491710A, ::System::Single A087C11F0A7781FD, ::System::Single F82BFF4233E323DD, ::System::Boolean& A8A8AB23DE9D7CB2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::System::Single, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_BDBC9839C92720CE_OFFSET))(this, B8262ADF3491710A, A087C11F0A7781FD, F82BFF4233E323DD, A8A8AB23DE9D7CB2);
		}

		::System::Boolean E3D17824AB1D819C(::UnityEngine::Collider2D*& B8262ADF3491710A, ::System::Single& F82BFF4233E323DD, ::System::Single& B51662FCE7219E5F)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_E3D17824AB1D819C_OFFSET))(this, B8262ADF3491710A, F82BFF4233E323DD, B51662FCE7219E5F);
		}

		::System::Void FEA41B73BBB9C2A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_BDF01E08CFC87F96_FEA41B73BBB9C2A6_OFFSET))(this);
		}
	};
}
