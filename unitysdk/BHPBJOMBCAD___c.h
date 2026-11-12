#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHPBJOMBCAD;
namespace System { class Object; }

#define BHPBJOMBCAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F00C970)
#define BHPBJOMBCAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F00C9A0)
#define BHPBJOMBCAD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F00C9B0)

inline static constexpr unsigned int BHPBJOMBCAD___c_TypeDefinitionIndex = 34359;

	class BHPBJOMBCAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x497A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C_CTOR_OFFSET))(this);
		}

		::BHPBJOMBCAD* __cctor_b__33_0()
		{
			return ((::BHPBJOMBCAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
