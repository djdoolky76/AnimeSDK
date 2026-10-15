#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPNMBONIFEB;
namespace System { class Object; }

#define FPNMBONIFEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4102B0)
#define FPNMBONIFEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4102F0)
#define FPNMBONIFEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E410300)

inline static constexpr unsigned int FPNMBONIFEB___c_TypeDefinitionIndex = 33336;

	class FPNMBONIFEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPNMBONIFEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNMBONIFEB___C_CTOR_OFFSET))(this);
		}

		::FPNMBONIFEB* __cctor_b__33_0()
		{
			return ((::FPNMBONIFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNMBONIFEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
