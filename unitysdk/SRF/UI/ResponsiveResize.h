#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveBase.h"
namespace System { class Object; }

#define SRF_UI_RESPONSIVERESIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED532C0)
#define SRF_UI_RESPONSIVERESIZE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1ED52F70)

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveResize_TypeDefinitionIndex = 35387;

	class ResponsiveResize : public ::SRF::UI::ResponsiveBase
	{
	public:
		::Il2CppArray<::System::Object*>* Elements; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVERESIZE_CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVERESIZE_REFRESH_OFFSET))(this);
		}

	};
}
