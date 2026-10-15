#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGFNKFGOG;
namespace System { class Object; }

#define FHEGFNKFGOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E389EF0)
#define FHEGFNKFGOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E389F30)
#define FHEGFNKFGOG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E389F40)

inline static constexpr unsigned int FHEGFNKFGOG___c_TypeDefinitionIndex = 35076;

	class FHEGFNKFGOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHEGFNKFGOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGFNKFGOG___C_CTOR_OFFSET))(this);
		}

		::FHEGFNKFGOG* __cctor_b__33_0()
		{
			return ((::FHEGFNKFGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGFNKFGOG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
