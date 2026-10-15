#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPNAONKOHBO;
namespace System { class Object; }

#define EPNAONKOHBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EBCA0)
#define EPNAONKOHBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EBCD0)
#define EPNAONKOHBO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2EBCE0)

inline static constexpr unsigned int EPNAONKOHBO___c_TypeDefinitionIndex = 25454;

	class EPNAONKOHBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPNAONKOHBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO___C_CTOR_OFFSET))(this);
		}

		::EPNAONKOHBO* __cctor_b__33_0()
		{
			return ((::EPNAONKOHBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNAONKOHBO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
