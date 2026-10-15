#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
class EONDIOOGHIA;
class MNBCPGLOMIE;
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MNBCPGLOMIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E2780)
#define MNBCPGLOMIE_GET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0xB9E2690)
#define MNBCPGLOMIE_GET_SUPPORTINGAVATARS_OFFSET UNITYSDK_OFFSET(0xB9E26B0)
#define MNBCPGLOMIE_GKPODKAJMKN_OFFSET UNITYSDK_OFFSET(0xB9E26D0)
#define MNBCPGLOMIE_HGMGBIMFOFN_OFFSET UNITYSDK_OFFSET(0xB9E2790)
#define MNBCPGLOMIE_SET_LEADINGROLEID_OFFSET UNITYSDK_OFFSET(0xB9E26A0)
#define MNBCPGLOMIE_SET_SUPPORTINGAVATARS_OFFSET UNITYSDK_OFFSET(0xB9E26C0)

inline static constexpr unsigned int MNBCPGLOMIE_TypeDefinitionIndex = 82097;

	class MNBCPGLOMIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>* _SupportingAvatars_k__BackingField; // 0x10
		::System::UInt32 _LeadingRoleID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LeadingRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_GET_LEADINGROLEID_OFFSET))(this);
		}

		::System::Void set_LeadingRoleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_SET_LEADINGROLEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>* get_SupportingAvatars()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_GET_SUPPORTINGAVATARS_OFFSET))(this);
		}

		::System::Void set_SupportingAvatars(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple*>*))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_SET_SUPPORTINGAVATARS_OFFSET))(this, a1);
		}

		static ::MNBCPGLOMIE* GKPODKAJMKN(::System::UInt32 a1)
		{
			return ((::MNBCPGLOMIE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_GKPODKAJMKN_OFFSET))(a1);
		}

		static ::MNBCPGLOMIE* HGMGBIMFOFN(::System::UInt32 a1, ::EONDIOOGHIA* a2)
		{
			return ((::MNBCPGLOMIE*(*)(::System::UInt32, ::EONDIOOGHIA*))((::PBYTE)hIl2Cpp + MNBCPGLOMIE_HGMGBIMFOFN_OFFSET))(a1, a2);
		}

	};
