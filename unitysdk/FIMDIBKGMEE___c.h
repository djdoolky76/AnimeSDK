#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMDIBKGMEE;
namespace System { class Object; }

#define FIMDIBKGMEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36E310)
#define FIMDIBKGMEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36E350)
#define FIMDIBKGMEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E36E360)

inline static constexpr unsigned int FIMDIBKGMEE___c_TypeDefinitionIndex = 31991;

	class FIMDIBKGMEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMDIBKGMEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDIBKGMEE___C_CTOR_OFFSET))(this);
		}

		::FIMDIBKGMEE* __cctor_b__28_0()
		{
			return ((::FIMDIBKGMEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMDIBKGMEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
