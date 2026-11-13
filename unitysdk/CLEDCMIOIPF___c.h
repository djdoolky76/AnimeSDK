#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLEDCMIOIPF;
namespace System { class Object; }

#define CLEDCMIOIPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205DD700)
#define CLEDCMIOIPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205DD730)
#define CLEDCMIOIPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205DD740)

inline static constexpr unsigned int CLEDCMIOIPF___c_TypeDefinitionIndex = 30454;

	class CLEDCMIOIPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x141B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLEDCMIOIPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF___C_CTOR_OFFSET))(this);
		}

		::CLEDCMIOIPF* __cctor_b__28_0()
		{
			return ((::CLEDCMIOIPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
