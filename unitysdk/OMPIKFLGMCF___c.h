#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPIKFLGMCF;
namespace System { class Object; }

#define OMPIKFLGMCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE923F0)
#define OMPIKFLGMCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE92430)
#define OMPIKFLGMCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE92440)

inline static constexpr unsigned int OMPIKFLGMCF___c_TypeDefinitionIndex = 27706;

	class OMPIKFLGMCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPIKFLGMCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF___C_CTOR_OFFSET))(this);
		}

		::OMPIKFLGMCF* __cctor_b__28_0()
		{
			return ((::OMPIKFLGMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
