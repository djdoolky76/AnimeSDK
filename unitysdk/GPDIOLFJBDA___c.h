#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPDIOLFJBDA;
namespace System { class Object; }

#define GPDIOLFJBDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6D70)
#define GPDIOLFJBDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F6DB0)
#define GPDIOLFJBDA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4F6DC0)

inline static constexpr unsigned int GPDIOLFJBDA___c_TypeDefinitionIndex = 35019;

	class GPDIOLFJBDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDIOLFJBDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA___C_CTOR_OFFSET))(this);
		}

		::GPDIOLFJBDA* __cctor_b__33_0()
		{
			return ((::GPDIOLFJBDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDIOLFJBDA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
