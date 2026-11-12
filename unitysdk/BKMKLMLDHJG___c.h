#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKMKLMLDHJG;
namespace System { class Object; }

#define BKMKLMLDHJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B45B0)
#define BKMKLMLDHJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B45F0)
#define BKMKLMLDHJG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F2B4600)

inline static constexpr unsigned int BKMKLMLDHJG___c_TypeDefinitionIndex = 28571;

	class BKMKLMLDHJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C_CTOR_OFFSET))(this);
		}

		::BKMKLMLDHJG* __cctor_b__33_0()
		{
			return ((::BKMKLMLDHJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMKLMLDHJG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
