#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/DGMNKINFKFH.h"
class IPFNLCFACJH;
class MBNOPGANNDG;
namespace RPG::AvatarSystem { class AvatarExEidolon; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLDNCFGJNKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B916160)
#define MLDNCFGJNKA_EGDJJCHOOCK_OFFSET UNITYSDK_OFFSET(0x1B916550)
#define MLDNCFGJNKA_FGIJHEGAHHF_OFFSET UNITYSDK_OFFSET(0x1B916330)
#define MLDNCFGJNKA_JCPLMKPABNJ_OFFSET UNITYSDK_OFFSET(0x1B916640)
#define MLDNCFGJNKA_JGNPNOCNOEN_OFFSET UNITYSDK_OFFSET(0x1B916290)
#define MLDNCFGJNKA_LCLIGENKFEH_OFFSET UNITYSDK_OFFSET(0x1B916210)
#define MLDNCFGJNKA_NHLNAGDPEMO_OFFSET UNITYSDK_OFFSET(0x1B9165F0)

inline static constexpr unsigned int MLDNCFGJNKA_TypeDefinitionIndex = 63988;

	class MLDNCFGJNKA : public ::System::Object
	{
	public:
		::IPFNLCFACJH* DCJCONLGILD; // 0x10
		::MBNOPGANNDG* POBCNHEICMH; // 0x18
		::System::Void _ctor(::IPFNLCFACJH* a1, ::MBNOPGANNDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPFNLCFACJH*, ::MBNOPGANNDG*))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::AvatarExEidolon* LCLIGENKFEH(::DGMNKINFKFH a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_LCLIGENKFEH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* JGNPNOCNOEN(::APCGKBOPGJL a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_JGNPNOCNOEN_OFFSET))(this, a1);
		}

		::System::Void FGIJHEGAHHF(::APCGKBOPGJL a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_FGIJHEGAHHF_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::AvatarExEidolon* EGDJJCHOOCK(::DGMNKINFKFH a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_EGDJJCHOOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* NHLNAGDPEMO(::APCGKBOPGJL a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_NHLNAGDPEMO_OFFSET))(this, a1);
		}

		::System::Void JCPLMKPABNJ(::APCGKBOPGJL a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarExEidolon*>*))((::PBYTE)hIl2Cpp + MLDNCFGJNKA_JCPLMKPABNJ_OFFSET))(this, a1, a2);
		}

	};
