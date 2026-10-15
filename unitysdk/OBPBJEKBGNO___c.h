#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBPBJEKBGNO;
namespace System { class Object; }

#define OBPBJEKBGNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB88220)
#define OBPBJEKBGNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB88260)
#define OBPBJEKBGNO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB88270)

inline static constexpr unsigned int OBPBJEKBGNO___c_TypeDefinitionIndex = 34165;

	class OBPBJEKBGNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPBJEKBGNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO___C_CTOR_OFFSET))(this);
		}

		::OBPBJEKBGNO* __cctor_b__28_0()
		{
			return ((::OBPBJEKBGNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPBJEKBGNO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
