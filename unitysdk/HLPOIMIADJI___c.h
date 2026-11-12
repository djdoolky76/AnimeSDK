#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLPOIMIADJI;
namespace System { class Object; }

#define HLPOIMIADJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C4470)
#define HLPOIMIADJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C44A0)
#define HLPOIMIADJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8C44B0)

inline static constexpr unsigned int HLPOIMIADJI___c_TypeDefinitionIndex = 31289;

	class HLPOIMIADJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPOIMIADJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI___C_CTOR_OFFSET))(this);
		}

		::HLPOIMIADJI* __cctor_b__28_0()
		{
			return ((::HLPOIMIADJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPOIMIADJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
