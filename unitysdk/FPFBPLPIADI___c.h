#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPFBPLPIADI;
namespace System { class Object; }

#define FPFBPLPIADI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB2E0)
#define FPFBPLPIADI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DB320)
#define FPFBPLPIADI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3DB330)

inline static constexpr unsigned int FPFBPLPIADI___c_TypeDefinitionIndex = 27340;

	class FPFBPLPIADI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPFBPLPIADI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI___C_CTOR_OFFSET))(this);
		}

		::FPFBPLPIADI* __cctor_b__28_0()
		{
			return ((::FPFBPLPIADI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFBPLPIADI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
