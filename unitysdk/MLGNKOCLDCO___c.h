#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLGNKOCLDCO;
namespace System { class Object; }

#define MLGNKOCLDCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB7780)
#define MLGNKOCLDCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB77C0)
#define MLGNKOCLDCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDB77D0)

inline static constexpr unsigned int MLGNKOCLDCO___c_TypeDefinitionIndex = 29765;

	class MLGNKOCLDCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLGNKOCLDCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLGNKOCLDCO___C_CTOR_OFFSET))(this);
		}

		::MLGNKOCLDCO* __cctor_b__33_0()
		{
			return ((::MLGNKOCLDCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLGNKOCLDCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
