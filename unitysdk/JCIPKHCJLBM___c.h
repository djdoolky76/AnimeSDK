#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCIPKHCJLBM;
namespace System { class Object; }

#define JCIPKHCJLBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3F30)
#define JCIPKHCJLBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3F70)
#define JCIPKHCJLBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6D3F80)

inline static constexpr unsigned int JCIPKHCJLBM___c_TypeDefinitionIndex = 30743;

	class JCIPKHCJLBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C_CTOR_OFFSET))(this);
		}

		::JCIPKHCJLBM* __cctor_b__23_0()
		{
			return ((::JCIPKHCJLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
