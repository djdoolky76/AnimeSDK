#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFOEBJMEFKG_GGECKMOOEAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15F245B0)
#define IFOEBJMEFKG_GGECKMOOEAJ_GET_SHOULDPAUSE_OFFSET UNITYSDK_OFFSET(0x15F24590)
#define IFOEBJMEFKG_GGECKMOOEAJ_SET_SHOULDPAUSE_OFFSET UNITYSDK_OFFSET(0x15F245A0)

inline static constexpr unsigned int IFOEBJMEFKG_GGECKMOOEAJ_TypeDefinitionIndex = 79443;

	class IFOEBJMEFKG_GGECKMOOEAJ : public ::System::Object
	{
	public:
		::System::Boolean _ShouldPause_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_GGECKMOOEAJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_GGECKMOOEAJ_GET_SHOULDPAUSE_OFFSET))(this);
		}

		::System::Void set_ShouldPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_GGECKMOOEAJ_SET_SHOULDPAUSE_OFFSET))(this, a1);
		}

	};
