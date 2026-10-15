#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLBHACNKKFC;
namespace System { class Object; }

#define BLBHACNKKFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5D130)
#define BLBHACNKKFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5D170)
#define BLBHACNKKFC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF5D180)

inline static constexpr unsigned int BLBHACNKKFC___c_TypeDefinitionIndex = 27919;

	class BLBHACNKKFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLBHACNKKFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC___C_CTOR_OFFSET))(this);
		}

		::BLBHACNKKFC* __cctor_b__43_0()
		{
			return ((::BLBHACNKKFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBHACNKKFC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
