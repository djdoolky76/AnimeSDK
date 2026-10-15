#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOJCKAGKGBM;
namespace System { class Object; }

#define EOJCKAGKGBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FDAA0)
#define EOJCKAGKGBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FDAD0)
#define EOJCKAGKGBM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E2FDAE0)

inline static constexpr unsigned int EOJCKAGKGBM___c_TypeDefinitionIndex = 34507;

	class EOJCKAGKGBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOJCKAGKGBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJCKAGKGBM___C_CTOR_OFFSET))(this);
		}

		::EOJCKAGKGBM* __cctor_b__48_0()
		{
			return ((::EOJCKAGKGBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJCKAGKGBM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
