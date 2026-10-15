#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEHCMIGCNC;
namespace System { class Object; }

#define FCEHCMIGCNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3171C0)
#define FCEHCMIGCNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317200)
#define FCEHCMIGCNC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E317210)

inline static constexpr unsigned int FCEHCMIGCNC___c_TypeDefinitionIndex = 30419;

	class FCEHCMIGCNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEHCMIGCNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC___C_CTOR_OFFSET))(this);
		}

		::FCEHCMIGCNC* __cctor_b__33_0()
		{
			return ((::FCEHCMIGCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEHCMIGCNC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
