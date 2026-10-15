#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGNCJOINEMP;
namespace System { class Object; }

#define JGNCJOINEMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73DF30)
#define JGNCJOINEMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73DF70)
#define JGNCJOINEMP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E73DF80)

inline static constexpr unsigned int JGNCJOINEMP___c_TypeDefinitionIndex = 28604;

	class JGNCJOINEMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNCJOINEMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP___C_CTOR_OFFSET))(this);
		}

		::JGNCJOINEMP* __cctor_b__43_0()
		{
			return ((::JGNCJOINEMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCJOINEMP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
