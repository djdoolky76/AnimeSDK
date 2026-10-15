#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHFNFINKJKP;
namespace System { class Object; }

#define MHFNFINKJKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA01910)
#define MHFNFINKJKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA01950)
#define MHFNFINKJKP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA01960)

inline static constexpr unsigned int MHFNFINKJKP___c_TypeDefinitionIndex = 25519;

	class MHFNFINKJKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHFNFINKJKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFNFINKJKP___C_CTOR_OFFSET))(this);
		}

		::MHFNFINKJKP* __cctor_b__38_0()
		{
			return ((::MHFNFINKJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFNFINKJKP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
