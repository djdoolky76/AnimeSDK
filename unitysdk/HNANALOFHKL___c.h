#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNANALOFHKL;
namespace System { class Object; }

#define HNANALOFHKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7A30)
#define HNANALOFHKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7A70)
#define HNANALOFHKL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5D7A80)

inline static constexpr unsigned int HNANALOFHKL___c_TypeDefinitionIndex = 34446;

	class HNANALOFHKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNANALOFHKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL___C_CTOR_OFFSET))(this);
		}

		::HNANALOFHKL* __cctor_b__18_0()
		{
			return ((::HNANALOFHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNANALOFHKL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
