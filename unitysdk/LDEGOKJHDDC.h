#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEFEPIDGKB;
class HNLKNLJBHDD;
class OBPMHOLHOHG;
class ODCELNBAEIB;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDEGOKJHDDC_BFJMACFPMNK_OFFSET UNITYSDK_OFFSET(0xB61DF70)
#define LDEGOKJHDDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB61DE00)
#define LDEGOKJHDDC_FBCGBFGLGOB_OFFSET UNITYSDK_OFFSET(0xB61E280)
#define LDEGOKJHDDC_GET_CURRENTAICONTROLLER_OFFSET UNITYSDK_OFFSET(0xB61E820)
#define LDEGOKJHDDC_GET_CURRENTAIUID_OFFSET UNITYSDK_OFFSET(0xB61E840)
#define LDEGOKJHDDC_HJJAJKHBAFL_OFFSET UNITYSDK_OFFSET(0xB61E610)
#define LDEGOKJHDDC_NNAOMIKAIKN_OFFSET UNITYSDK_OFFSET(0xB61E500)
#define LDEGOKJHDDC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB61DEC0)
#define LDEGOKJHDDC_SET_CURRENTAICONTROLLER_OFFSET UNITYSDK_OFFSET(0xB61E830)
#define LDEGOKJHDDC_SET_CURRENTAIUID_OFFSET UNITYSDK_OFFSET(0xB61E850)

	class LDEGOKJHDDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OHKFMKFGHNI; // 0x10
		::OBPMHOLHOHG* PDOOIGCLKIB; // 0x18
		::ODCELNBAEIB* HOADGOKCPDG; // 0x20
		::CFEFEPIDGKB* _CurrentAIController_k__BackingField; // 0x28
		::System::UInt32 _CurrentAIUid_k__BackingField; // 0x30
		::System::Void _ctor(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_CTOR_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void BFJMACFPMNK(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_BFJMACFPMNK_OFFSET))(this, a1);
		}

		::System::UInt32 FBCGBFGLGOB(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_FBCGBFGLGOB_OFFSET))(this, a1);
		}

		::System::Void NNAOMIKAIKN(::RPG::GameCore::GameEntity* a1, ::HNLKNLJBHDD* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::HNLKNLJBHDD*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_NNAOMIKAIKN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HJJAJKHBAFL(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_HJJAJKHBAFL_OFFSET))(this, a1);
		}

		::CFEFEPIDGKB* get_CurrentAIController()
		{
			return ((::CFEFEPIDGKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_GET_CURRENTAICONTROLLER_OFFSET))(this);
		}

		::System::Void set_CurrentAIController(::CFEFEPIDGKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEFEPIDGKB*))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_SET_CURRENTAICONTROLLER_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentAIUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_GET_CURRENTAIUID_OFFSET))(this);
		}

		::System::Void set_CurrentAIUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDEGOKJHDDC_SET_CURRENTAIUID_OFFSET))(this, a1);
		}

	};
