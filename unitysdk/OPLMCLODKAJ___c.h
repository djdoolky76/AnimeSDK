#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPLMCLODKAJ;
namespace System { class Object; }

#define OPLMCLODKAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9A90)
#define OPLMCLODKAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9AD0)
#define OPLMCLODKAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEB9AE0)

inline static constexpr unsigned int OPLMCLODKAJ___c_TypeDefinitionIndex = 31391;

	class OPLMCLODKAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B4D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLMCLODKAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ___C_CTOR_OFFSET))(this);
		}

		::OPLMCLODKAJ* __cctor_b__23_0()
		{
			return ((::OPLMCLODKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLMCLODKAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
