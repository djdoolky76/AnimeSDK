#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPGLNCGCLLG;
namespace System { class Object; }

#define GPGLNCGCLLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CC380)
#define GPGLNCGCLLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CC3C0)
#define GPGLNCGCLLG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4CC3D0)

inline static constexpr unsigned int GPGLNCGCLLG___c_TypeDefinitionIndex = 25059;

	class GPGLNCGCLLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPGLNCGCLLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG___C_CTOR_OFFSET))(this);
		}

		::GPGLNCGCLLG* __cctor_b__38_0()
		{
			return ((::GPGLNCGCLLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGLNCGCLLG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
