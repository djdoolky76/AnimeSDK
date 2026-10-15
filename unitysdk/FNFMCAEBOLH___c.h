#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNFMCAEBOLH;
namespace System { class Object; }

#define FNFMCAEBOLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2630)
#define FNFMCAEBOLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C2670)
#define FNFMCAEBOLH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C2680)

inline static constexpr unsigned int FNFMCAEBOLH___c_TypeDefinitionIndex = 25312;

	class FNFMCAEBOLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNFMCAEBOLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH___C_CTOR_OFFSET))(this);
		}

		::FNFMCAEBOLH* __cctor_b__28_0()
		{
			return ((::FNFMCAEBOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFMCAEBOLH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
