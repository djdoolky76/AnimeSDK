#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKENAGKIECB;
namespace System { class Object; }

#define PKENAGKIECB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF894F0)
#define PKENAGKIECB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF89520)
#define PKENAGKIECB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF89530)

inline static constexpr unsigned int PKENAGKIECB___c_TypeDefinitionIndex = 27880;

	class PKENAGKIECB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKENAGKIECB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB___C_CTOR_OFFSET))(this);
		}

		::PKENAGKIECB* __cctor_b__28_0()
		{
			return ((::PKENAGKIECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKENAGKIECB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
