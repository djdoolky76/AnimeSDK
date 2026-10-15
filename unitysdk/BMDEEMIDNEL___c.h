#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMDEEMIDNEL;
namespace System { class Object; }

#define BMDEEMIDNEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6110)
#define BMDEEMIDNEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6140)
#define BMDEEMIDNEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFF6150)

inline static constexpr unsigned int BMDEEMIDNEL___c_TypeDefinitionIndex = 30264;

	class BMDEEMIDNEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDEEMIDNEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL___C_CTOR_OFFSET))(this);
		}

		::BMDEEMIDNEL* __cctor_b__28_0()
		{
			return ((::BMDEEMIDNEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
