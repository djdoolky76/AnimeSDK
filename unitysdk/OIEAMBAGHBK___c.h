#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIEAMBAGHBK;
namespace System { class Object; }

#define OIEAMBAGHBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3E690)
#define OIEAMBAGHBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3E6D0)
#define OIEAMBAGHBK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE3E6E0)

inline static constexpr unsigned int OIEAMBAGHBK___c_TypeDefinitionIndex = 26577;

	class OIEAMBAGHBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A4D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIEAMBAGHBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK___C_CTOR_OFFSET))(this);
		}

		::OIEAMBAGHBK* __cctor_b__33_0()
		{
			return ((::OIEAMBAGHBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAMBAGHBK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
