#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_TECHART_MONOSKINNEDCRYSTALCENTER_A6434E258636C5DD_OFFSET UNITYSDK_OFFSET(0x28CC940)
#define ABC_TECHART_MONOSKINNEDCRYSTALCENTER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define ABC_TECHART_MONOSKINNEDCRYSTALCENTER_FF9E4D72EC51AD01_OFFSET UNITYSDK_OFFSET(0x28CC810)
#define ABC_TECHART_MONOSKINNEDCRYSTALCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x28CC8B0)

namespace ABC::TechArt
{
	inline static constexpr unsigned int MonoSkinnedCrystalCenter_TypeDefinitionIndex = 16351;

	class MonoSkinnedCrystalCenter
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Configs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_MONOSKINNEDCRYSTALCENTER__CTOR_OFFSET))(this);
		}

		::System::Void FF9E4D72EC51AD01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_MONOSKINNEDCRYSTALCENTER_FF9E4D72EC51AD01_OFFSET))(this);
		}

		::System::Boolean A6434E258636C5DD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_MONOSKINNEDCRYSTALCENTER_A6434E258636C5DD_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_MONOSKINNEDCRYSTALCENTER_AD970635A668CF89_OFFSET))(this);
		}
	};
}
