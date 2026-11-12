#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNIHNLACOK;
namespace System { class Object; }

#define ALNIHNLACOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7CF820)
#define ALNIHNLACOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CF860)
#define ALNIHNLACOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7CF870)

inline static constexpr unsigned int ALNIHNLACOK___c_TypeDefinitionIndex = 32896;

	class ALNIHNLACOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNIHNLACOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK___C_CTOR_OFFSET))(this);
		}

		::ALNIHNLACOK* __cctor_b__28_0()
		{
			return ((::ALNIHNLACOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
