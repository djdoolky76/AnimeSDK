#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveBase.h"
namespace System { class Object; }

#define SRF_UI_RESPONSIVEENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52F30)
#define SRF_UI_RESPONSIVEENABLE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1ED52CB0)

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveEnable_TypeDefinitionIndex = 35384;

	class ResponsiveEnable : public ::SRF::UI::ResponsiveBase
	{
	public:
		::Il2CppArray<::System::Object*>* Entries; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEENABLE_CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_RESPONSIVEENABLE_REFRESH_OFFSET))(this);
		}

	};
}
