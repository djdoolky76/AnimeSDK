#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBDIPICABB;
namespace System { class Object; }

#define MLBDIPICABB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA52240)
#define MLBDIPICABB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA52280)
#define MLBDIPICABB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA52290)

inline static constexpr unsigned int MLBDIPICABB___c_TypeDefinitionIndex = 29985;

	class MLBDIPICABB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBDIPICABB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB___C_CTOR_OFFSET))(this);
		}

		::MLBDIPICABB* __cctor_b__28_0()
		{
			return ((::MLBDIPICABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDIPICABB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
