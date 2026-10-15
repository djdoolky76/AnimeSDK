#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEINLELLFLF;
namespace System { class Object; }

#define CEINLELLFLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E067180)
#define CEINLELLFLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0671C0)
#define CEINLELLFLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0671D0)

inline static constexpr unsigned int CEINLELLFLF___c_TypeDefinitionIndex = 32256;

	class CEINLELLFLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEINLELLFLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF___C_CTOR_OFFSET))(this);
		}

		::CEINLELLFLF* __cctor_b__28_0()
		{
			return ((::CEINLELLFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEINLELLFLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
