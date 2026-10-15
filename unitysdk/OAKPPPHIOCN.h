#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAKPPPHIOCN_DeformMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
class OAKPPPHIOCN_ItemData;

#define OAKPPPHIOCN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD23C90)
#define OAKPPPHIOCN_FMJAACKGFKJ_OFFSET UNITYSDK_OFFSET(0xBD22CF0)
#define OAKPPPHIOCN_IIDAMBPJIFG_OFFSET UNITYSDK_OFFSET(0xBD23BE0)
#define OAKPPPHIOCN_JHLKOCHCPMC_OFFSET UNITYSDK_OFFSET(0xBD22D70)
#define OAKPPPHIOCN_OAHDHIIHIDK_OFFSET UNITYSDK_OFFSET(0xBD22960)

inline static constexpr unsigned int OAKPPPHIOCN_TypeDefinitionIndex = 48865;

	class OAKPPPHIOCN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_CTOR_OFFSET))(this);
		}

		static ::OAKPPPHIOCN_ItemData* OAHDHIIHIDK(::UnityEngine::Vector4 a1, ::OAKPPPHIOCN_DeformMode a2)
		{
			return ((::OAKPPPHIOCN_ItemData*(*)(::UnityEngine::Vector4, ::OAKPPPHIOCN_DeformMode))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_OAHDHIIHIDK_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 JHLKOCHCPMC(::OAKPPPHIOCN_ItemData* a1, ::OAKPPPHIOCN_DeformMode a2)
		{
			return ((::UnityEngine::Vector4(*)(::OAKPPPHIOCN_ItemData*, ::OAKPPPHIOCN_DeformMode))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_JHLKOCHCPMC_OFFSET))(a1, a2);
		}

		static ::System::Single FMJAACKGFKJ(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_FMJAACKGFKJ_OFFSET))(a1);
		}

		static ::System::UInt32 IIDAMBPJIFG(::System::Single a1)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + OAKPPPHIOCN_IIDAMBPJIFG_OFFSET))(a1);
		}

	};
