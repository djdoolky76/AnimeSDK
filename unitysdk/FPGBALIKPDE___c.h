#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPGBALIKPDE;
namespace System { class Object; }

#define FPGBALIKPDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4091A0)
#define FPGBALIKPDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4091E0)
#define FPGBALIKPDE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4091F0)

inline static constexpr unsigned int FPGBALIKPDE___c_TypeDefinitionIndex = 34967;

	class FPGBALIKPDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPGBALIKPDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE___C_CTOR_OFFSET))(this);
		}

		::FPGBALIKPDE* __cctor_b__23_0()
		{
			return ((::FPGBALIKPDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGBALIKPDE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
