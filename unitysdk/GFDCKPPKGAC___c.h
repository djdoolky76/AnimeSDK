#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDCKPPKGAC;
namespace System { class Object; }

#define GFDCKPPKGAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4630F0)
#define GFDCKPPKGAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E463120)
#define GFDCKPPKGAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E463130)

inline static constexpr unsigned int GFDCKPPKGAC___c_TypeDefinitionIndex = 32117;

	class GFDCKPPKGAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDCKPPKGAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC___C_CTOR_OFFSET))(this);
		}

		::GFDCKPPKGAC* __cctor_b__28_0()
		{
			return ((::GFDCKPPKGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDCKPPKGAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
