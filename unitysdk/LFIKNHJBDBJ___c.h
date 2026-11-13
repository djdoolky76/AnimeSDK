#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFIKNHJBDBJ;
namespace System { class Object; }

#define LFIKNHJBDBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAAAED0)
#define LFIKNHJBDBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAAF10)
#define LFIKNHJBDBJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FAAAF20)

inline static constexpr unsigned int LFIKNHJBDBJ___c_TypeDefinitionIndex = 26511;

	class LFIKNHJBDBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFIKNHJBDBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIKNHJBDBJ___C_CTOR_OFFSET))(this);
		}

		::LFIKNHJBDBJ* __cctor_b__53_0()
		{
			return ((::LFIKNHJBDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIKNHJBDBJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
