#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDDPJOEDCF;
namespace System { class Object; }

#define MFDDPJOEDCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD62090)
#define MFDDPJOEDCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD620D0)
#define MFDDPJOEDCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD620E0)

inline static constexpr unsigned int MFDDPJOEDCF___c_TypeDefinitionIndex = 35576;

	class MFDDPJOEDCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C_CTOR_OFFSET))(this);
		}

		::MFDDPJOEDCF* __cctor_b__28_0()
		{
			return ((::MFDDPJOEDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
