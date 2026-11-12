#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKFJNFGBGPL;
namespace System { class Object; }

#define HKFJNFGBGPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8ACD90)
#define HKFJNFGBGPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8ACDD0)
#define HKFJNFGBGPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8ACDE0)

inline static constexpr unsigned int HKFJNFGBGPL___c_TypeDefinitionIndex = 27239;

	class HKFJNFGBGPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKFJNFGBGPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL___C_CTOR_OFFSET))(this);
		}

		::HKFJNFGBGPL* __cctor_b__28_0()
		{
			return ((::HKFJNFGBGPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFJNFGBGPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
