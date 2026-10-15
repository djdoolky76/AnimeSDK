#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGHBOPEOBHA;
namespace System { class Object; }

#define PGHBOPEOBHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF035E0)
#define PGHBOPEOBHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF03620)
#define PGHBOPEOBHA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF03630)

inline static constexpr unsigned int PGHBOPEOBHA___c_TypeDefinitionIndex = 27768;

	class PGHBOPEOBHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C_CTOR_OFFSET))(this);
		}

		::PGHBOPEOBHA* __cctor_b__33_0()
		{
			return ((::PGHBOPEOBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
