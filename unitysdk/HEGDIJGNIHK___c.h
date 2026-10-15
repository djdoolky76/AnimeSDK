#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGDIJGNIHK;
namespace System { class Object; }

#define HEGDIJGNIHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E558F90)
#define HEGDIJGNIHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E558FD0)
#define HEGDIJGNIHK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E558FE0)

inline static constexpr unsigned int HEGDIJGNIHK___c_TypeDefinitionIndex = 31530;

	class HEGDIJGNIHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x330E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGDIJGNIHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGDIJGNIHK___C_CTOR_OFFSET))(this);
		}

		::HEGDIJGNIHK* __cctor_b__33_0()
		{
			return ((::HEGDIJGNIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGDIJGNIHK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
