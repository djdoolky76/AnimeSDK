#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACEKIEKJFPA;
namespace System { class Object; }

#define ACEKIEKJFPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9D00)
#define ACEKIEKJFPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9D40)
#define ACEKIEKJFPA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDD9D50)

inline static constexpr unsigned int ACEKIEKJFPA___c_TypeDefinitionIndex = 29806;

	class ACEKIEKJFPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACEKIEKJFPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKIEKJFPA___C_CTOR_OFFSET))(this);
		}

		::ACEKIEKJFPA* __cctor_b__33_0()
		{
			return ((::ACEKIEKJFPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEKIEKJFPA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
