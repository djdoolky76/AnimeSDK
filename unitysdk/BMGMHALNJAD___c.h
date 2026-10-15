#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGMHALNJAD;
namespace System { class Object; }

#define BMGMHALNJAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E027480)
#define BMGMHALNJAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0274B0)
#define BMGMHALNJAD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0274C0)

inline static constexpr unsigned int BMGMHALNJAD___c_TypeDefinitionIndex = 26877;

	class BMGMHALNJAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGMHALNJAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD___C_CTOR_OFFSET))(this);
		}

		::BMGMHALNJAD* __cctor_b__38_0()
		{
			return ((::BMGMHALNJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
