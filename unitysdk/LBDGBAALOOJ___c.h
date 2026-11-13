#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBDGBAALOOJ;
namespace System { class Object; }

#define LBDGBAALOOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F63B0)
#define LBDGBAALOOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F63F0)
#define LBDGBAALOOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8F6400)

inline static constexpr unsigned int LBDGBAALOOJ___c_TypeDefinitionIndex = 31961;

	class LBDGBAALOOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x293B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBDGBAALOOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ___C_CTOR_OFFSET))(this);
		}

		::LBDGBAALOOJ* __cctor_b__23_0()
		{
			return ((::LBDGBAALOOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDGBAALOOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
