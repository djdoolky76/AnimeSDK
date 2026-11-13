#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABFMGPNOIG;
namespace System { class Object; }

#define BABFMGPNOIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2056F2F0)
#define BABFMGPNOIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2056F330)
#define BABFMGPNOIG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2056F340)

inline static constexpr unsigned int BABFMGPNOIG___c_TypeDefinitionIndex = 30861;

	class BABFMGPNOIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABFMGPNOIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG___C_CTOR_OFFSET))(this);
		}

		::BABFMGPNOIG* __cctor_b__28_0()
		{
			return ((::BABFMGPNOIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABFMGPNOIG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
