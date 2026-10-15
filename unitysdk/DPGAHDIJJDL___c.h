#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGAHDIJJDL;
namespace System { class Object; }

#define DPGAHDIJJDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0FC0)
#define DPGAHDIJJDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0FF0)
#define DPGAHDIJJDL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1E1000)

inline static constexpr unsigned int DPGAHDIJJDL___c_TypeDefinitionIndex = 30173;

	class DPGAHDIJJDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGAHDIJJDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL___C_CTOR_OFFSET))(this);
		}

		::DPGAHDIJJDL* __cctor_b__28_0()
		{
			return ((::DPGAHDIJJDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGAHDIJJDL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
