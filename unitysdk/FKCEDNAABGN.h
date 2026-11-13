#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHEFPNNKKC;
class GIDHOABFFFP;
class IPFNLCFACJH;
class MGLBNNIPDMC;
class NNOALJAEMCG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKCEDNAABGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA90DC0)
#define FKCEDNAABGN_EOLELOKHKHG_OFFSET UNITYSDK_OFFSET(0x1AA915E0)
#define FKCEDNAABGN_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0x1AA90F40)
#define FKCEDNAABGN_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0x1AA91200)
#define FKCEDNAABGN_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1AA91260)
#define FKCEDNAABGN_OBOJEIPJBBJ_OFFSET UNITYSDK_OFFSET(0x1AA91080)
#define FKCEDNAABGN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1AA912C0)

inline static constexpr unsigned int FKCEDNAABGN_TypeDefinitionIndex = 65840;

	class FKCEDNAABGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>* KMDPIALJFHP; // 0x10
		::GIDHOABFFFP* FAGBIGDLJGA; // 0x18
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x20
		::IPFNLCFACJH* DCJCONLGILD; // 0x28
		::MGLBNNIPDMC* HEJEGOGBFMP; // 0x30
		::System::Void _ctor(::MGLBNNIPDMC* a1, ::GIDHOABFFFP* a2, ::AJHEFPNNKKC* a3, ::IPFNLCFACJH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MGLBNNIPDMC*, ::GIDHOABFFFP*, ::AJHEFPNNKKC*, ::IPFNLCFACJH*))((::PBYTE)hIl2Cpp + FKCEDNAABGN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::IAvatar* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKCEDNAABGN_GKKDODPDBLA_OFFSET))(this, a1);
		}

		::System::Boolean IAONPECOKLB(::System::UInt32 a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + FKCEDNAABGN_IAONPECOKLB_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCJMKJPECAP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKCEDNAABGN_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCEDNAABGN_PJPFIHFAHGO_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* OBOJEIPJBBJ(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKCEDNAABGN_OBOJEIPJBBJ_OFFSET))(this, a1);
		}

		::NNOALJAEMCG* EOLELOKHKHG()
		{
			return ((::NNOALJAEMCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCEDNAABGN_EOLELOKHKHG_OFFSET))(this);
		}

	};
