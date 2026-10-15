#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDCOJJANCCK;

#define FAAEINLBPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1564E6E0)
#define FAAEINLBPAK_EJPHOCLCAIC_OFFSET UNITYSDK_OFFSET(0x1564E630)
#define FAAEINLBPAK_GAPCBNFPHAL_OFFSET UNITYSDK_OFFSET(0x1564E580)
#define FAAEINLBPAK_GET_CLOSEREQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1564E560)
#define FAAEINLBPAK_GET_SHOWRULESREQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1564E540)
#define FAAEINLBPAK_KDNKFMMCBFL_OFFSET UNITYSDK_OFFSET(0x1564E690)
#define FAAEINLBPAK_SET_CLOSEREQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1564E570)
#define FAAEINLBPAK_SET_SHOWRULESREQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1564E550)

inline static constexpr unsigned int FAAEINLBPAK_TypeDefinitionIndex = 81974;

	class FAAEINLBPAK : public ::System::Object
	{
	public:
		::System::Int32 _CloseRequestCount_k__BackingField; // 0x10
		::System::Int32 _ShowRulesRequestCount_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ShowRulesRequestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_GET_SHOWRULESREQUESTCOUNT_OFFSET))(this);
		}

		::System::Void set_ShowRulesRequestCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAAEINLBPAK_SET_SHOWRULESREQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CloseRequestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_GET_CLOSEREQUESTCOUNT_OFFSET))(this);
		}

		::System::Void set_CloseRequestCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAAEINLBPAK_SET_CLOSEREQUESTCOUNT_OFFSET))(this, a1);
		}

		::IDCOJJANCCK* GAPCBNFPHAL()
		{
			return ((::IDCOJJANCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_GAPCBNFPHAL_OFFSET))(this);
		}

		::System::Void EJPHOCLCAIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_EJPHOCLCAIC_OFFSET))(this);
		}

		::System::Void KDNKFMMCBFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEINLBPAK_KDNKFMMCBFL_OFFSET))(this);
		}

	};
