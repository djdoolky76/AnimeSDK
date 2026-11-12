#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBLPDPEOBCB;
namespace System { class Object; }

#define PBLPDPEOBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1C3820)
#define PBLPDPEOBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C3860)
#define PBLPDPEOBCB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F1C3870)

inline static constexpr unsigned int PBLPDPEOBCB___c_TypeDefinitionIndex = 28342;

	class PBLPDPEOBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBLPDPEOBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB___C_CTOR_OFFSET))(this);
		}

		::PBLPDPEOBCB* __cctor_b__33_0()
		{
			return ((::PBLPDPEOBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLPDPEOBCB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
