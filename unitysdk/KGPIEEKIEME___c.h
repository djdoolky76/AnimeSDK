#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPIEEKIEME;
namespace System { class Object; }

#define KGPIEEKIEME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E811910)
#define KGPIEEKIEME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E811940)
#define KGPIEEKIEME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E811950)

inline static constexpr unsigned int KGPIEEKIEME___c_TypeDefinitionIndex = 33847;

	class KGPIEEKIEME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGPIEEKIEME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME___C_CTOR_OFFSET))(this);
		}

		::KGPIEEKIEME* __cctor_b__28_0()
		{
			return ((::KGPIEEKIEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPIEEKIEME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
