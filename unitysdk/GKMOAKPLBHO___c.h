#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMOAKPLBHO;
namespace System { class Object; }

#define GKMOAKPLBHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA376F0)
#define GKMOAKPLBHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA37730)
#define GKMOAKPLBHO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA37740)

inline static constexpr unsigned int GKMOAKPLBHO___c_TypeDefinitionIndex = 34471;

	class GKMOAKPLBHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMOAKPLBHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO___C_CTOR_OFFSET))(this);
		}

		::GKMOAKPLBHO* __cctor_b__33_0()
		{
			return ((::GKMOAKPLBHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
