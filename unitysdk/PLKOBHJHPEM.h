#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/NoteNotifyType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
class NEKAOEFLAMO;
namespace RPG::GameCore { class NoteNotifyConfig; }

#define PLKOBHJHPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3023F0)
#define PLKOBHJHPEM_CTOR_OFFSET UNITYSDK_OFFSET(0xC3010E0)
#define PLKOBHJHPEM_GET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0xC3023D0)
#define PLKOBHJHPEM_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xC3023B0)
#define PLKOBHJHPEM_LHOPBHMPAPE_OFFSET UNITYSDK_OFFSET(0xC301240)
#define PLKOBHJHPEM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC301120)
#define PLKOBHJHPEM_OEKNFFJPKKI_OFFSET UNITYSDK_OFFSET(0xC301180)
#define PLKOBHJHPEM_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0xC302230)
#define PLKOBHJHPEM_SET_NOTIFYTIME_OFFSET UNITYSDK_OFFSET(0xC3023E0)
#define PLKOBHJHPEM_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xC3023C0)

inline static constexpr unsigned int PLKOBHJHPEM_TypeDefinitionIndex = 60177;

	class PLKOBHJHPEM : public ::System::Object
	{
	public:
		::NEKAOEFLAMO* BHJDJDPLCLP; // 0x10
		::RPG::GameCore::NoteNotifyConfig* AKIDAFEICFI; // 0x18
		::RPG::GameCore::NoteNotifyType _NotifyType_k__BackingField; // 0x20
		::System::Single _NotifyTime_k__BackingField; // 0x24
		::System::Boolean ODDIAKBMNEL; // 0x28
		static ::System::Int32* StaticGet_AGMDBEONDCO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PLKOBHJHPEM")->GetStaticField(0x15C50);
		}

		::System::Void _ctor(::NEKAOEFLAMO* a1, ::System::Single a2, ::RPG::GameCore::NoteNotifyConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NEKAOEFLAMO*, ::System::Single, ::RPG::GameCore::NoteNotifyConfig*))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLKOBHJHPEM_CCTOR_OFFSET))();
		}

		::System::Void LJBCDJNNBJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Boolean OEKNFFJPKKI(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_OEKNFFJPKKI_OFFSET))(this, a1);
		}

		::System::Void LHOPBHMPAPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_LHOPBHMPAPE_OFFSET))(this);
		}

		::System::Void OLEHFIFCLIN(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_OLEHFIFCLIN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::NoteNotifyType get_NotifyType()
		{
			return ((::RPG::GameCore::NoteNotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_GET_NOTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_NotifyType(::RPG::GameCore::NoteNotifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NoteNotifyType))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_SET_NOTIFYTYPE_OFFSET))(this, a1);
		}

		::System::Single get_NotifyTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_GET_NOTIFYTIME_OFFSET))(this);
		}

		::System::Void set_NotifyTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLKOBHJHPEM_SET_NOTIFYTIME_OFFSET))(this, a1);
		}

	};
