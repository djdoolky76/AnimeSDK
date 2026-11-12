#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POLGKEAJIHD;
namespace System { class Object; }

#define POLGKEAJIHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27F020)
#define POLGKEAJIHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F27F060)
#define POLGKEAJIHD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F27F070)

inline static constexpr unsigned int POLGKEAJIHD___c_TypeDefinitionIndex = 26868;

	class POLGKEAJIHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x468D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POLGKEAJIHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGKEAJIHD___C_CTOR_OFFSET))(this);
		}

		::POLGKEAJIHD* __cctor_b__33_0()
		{
			return ((::POLGKEAJIHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGKEAJIHD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
