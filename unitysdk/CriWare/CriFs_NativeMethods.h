#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETMAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1FFB7AD0)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x1FFB7A40)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x1FFB79B0)
#define CRIWARE_CRIFS_NATIVEMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB7B50)

namespace CriWare
{
	inline static constexpr unsigned int CriFs_NativeMethods_TypeDefinitionIndex = 34501;

	class CriFs_NativeMethods : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& curNum, ::System::Int32& maxNum, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDLOADERS_OFFSET))(curNum, maxNum, limit);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& curNum, ::System::Int32& maxNum, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(curNum, maxNum, limit);
		}

		static ::System::Int32 criFs_GetMaxPathLength(::System::Int32& length)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETMAXPATHLENGTH_OFFSET))(length);
		}
	};
}
