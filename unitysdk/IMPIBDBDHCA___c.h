#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMPIBDBDHCA;
namespace System { class Object; }

#define IMPIBDBDHCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C2260)
#define IMPIBDBDHCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206C22A0)
#define IMPIBDBDHCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206C22B0)

inline static constexpr unsigned int IMPIBDBDHCA___c_TypeDefinitionIndex = 34910;

	class IMPIBDBDHCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMPIBDBDHCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA___C_CTOR_OFFSET))(this);
		}

		::IMPIBDBDHCA* __cctor_b__23_0()
		{
			return ((::IMPIBDBDHCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPIBDBDHCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
