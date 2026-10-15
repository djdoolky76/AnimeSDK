#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFMHKGDLGJN;
namespace System { class Object; }

#define EFMHKGDLGJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E263720)
#define EFMHKGDLGJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E263760)
#define EFMHKGDLGJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E263770)

inline static constexpr unsigned int EFMHKGDLGJN___c_TypeDefinitionIndex = 26473;

	class EFMHKGDLGJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFMHKGDLGJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN___C_CTOR_OFFSET))(this);
		}

		::EFMHKGDLGJN* __cctor_b__28_0()
		{
			return ((::EFMHKGDLGJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMHKGDLGJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
