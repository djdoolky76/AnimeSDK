#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMFDDFOICF;
namespace System { class Object; }

#define KDMFDDFOICF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7130)
#define KDMFDDFOICF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7170)
#define KDMFDDFOICF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7D7180)

inline static constexpr unsigned int KDMFDDFOICF___c_TypeDefinitionIndex = 26913;

	class KDMFDDFOICF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMFDDFOICF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF___C_CTOR_OFFSET))(this);
		}

		::KDMFDDFOICF* __cctor_b__28_0()
		{
			return ((::KDMFDDFOICF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMFDDFOICF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
