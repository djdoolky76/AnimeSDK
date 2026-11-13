#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKGPJOBNMKJ;
namespace System { class Object; }

#define BKGPJOBNMKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE2AE0)
#define BKGPJOBNMKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE2B10)
#define BKGPJOBNMKJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FAE2B20)

inline static constexpr unsigned int BKGPJOBNMKJ___c_TypeDefinitionIndex = 30999;

	class BKGPJOBNMKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x568F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGPJOBNMKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ___C_CTOR_OFFSET))(this);
		}

		::BKGPJOBNMKJ* __cctor_b__33_0()
		{
			return ((::BKGPJOBNMKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
