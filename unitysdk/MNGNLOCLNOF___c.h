#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGNLOCLNOF;
namespace System { class Object; }

#define MNGNLOCLNOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA997E0)
#define MNGNLOCLNOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA99820)
#define MNGNLOCLNOF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA99830)

inline static constexpr unsigned int MNGNLOCLNOF___c_TypeDefinitionIndex = 32925;

	class MNGNLOCLNOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGNLOCLNOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF___C_CTOR_OFFSET))(this);
		}

		::MNGNLOCLNOF* __cctor_b__18_0()
		{
			return ((::MNGNLOCLNOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGNLOCLNOF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
