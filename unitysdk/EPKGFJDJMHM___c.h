#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKGFJDJMHM;
namespace System { class Object; }

#define EPKGFJDJMHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E316B80)
#define EPKGFJDJMHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E316BC0)
#define EPKGFJDJMHM___C___CCTOR_B__136_0_OFFSET UNITYSDK_OFFSET(0x1E316BD0)

inline static constexpr unsigned int EPKGFJDJMHM___c_TypeDefinitionIndex = 31787;

	class EPKGFJDJMHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPKGFJDJMHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKGFJDJMHM___C_CTOR_OFFSET))(this);
		}

		::EPKGFJDJMHM* __cctor_b__136_0()
		{
			return ((::EPKGFJDJMHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKGFJDJMHM___C___CCTOR_B__136_0_OFFSET))(this);
		}

	};
