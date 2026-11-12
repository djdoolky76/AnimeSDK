#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDDMCOJNM;
namespace System { class Object; }

#define ECPDDMCOJNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F556840)
#define ECPDDMCOJNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F556870)
#define ECPDDMCOJNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F556880)

inline static constexpr unsigned int ECPDDMCOJNM___c_TypeDefinitionIndex = 34862;

	class ECPDDMCOJNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPDDMCOJNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM___C_CTOR_OFFSET))(this);
		}

		::ECPDDMCOJNM* __cctor_b__28_0()
		{
			return ((::ECPDDMCOJNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDDMCOJNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
