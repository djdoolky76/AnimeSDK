#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBBPDLPAIPL;
namespace System { class Object; }

#define CBBPDLPAIPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0357B0)
#define CBBPDLPAIPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0357F0)
#define CBBPDLPAIPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E035800)

inline static constexpr unsigned int CBBPDLPAIPL___c_TypeDefinitionIndex = 26213;

	class CBBPDLPAIPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBBPDLPAIPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL___C_CTOR_OFFSET))(this);
		}

		::CBBPDLPAIPL* __cctor_b__28_0()
		{
			return ((::CBBPDLPAIPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBPDLPAIPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
