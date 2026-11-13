#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/RPG/AvatarSystem/SeriesSkillsBuffedAvatarDisplayData.h"
#include "unitysdk/System/Nullable_1.h"
class AJHEFPNNKKC;
class EPAAAILJEKE;
class HEJLOAOKDGE;
class NNDKMMANHEA;
class PBFBEGDNFFB;

#define LEABOMCMOPJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1ACA5360)
#define LEABOMCMOPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACA5760)
#define LEABOMCMOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA5260)
#define LEABOMCMOPJ_FDNAPGPNDFB_OFFSET UNITYSDK_OFFSET(0x1ACA5550)

inline static constexpr unsigned int LEABOMCMOPJ_TypeDefinitionIndex = 64045;

	class LEABOMCMOPJ : public ::System::Object
	{
	public:
		::EPAAAILJEKE* HPNDAEDOHNN; // 0x10
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x18
		::HEJLOAOKDGE* KAMLEMCONJK; // 0x20
		::NNDKMMANHEA* JDANNEMAPJK; // 0x28
		static ::DNFDBKCPBNM* StaticGet_EHMDBIIIEJF()
		{
			return (::DNFDBKCPBNM*)UnitySDK::FromName("", "LEABOMCMOPJ")->GetStaticField(0x12DC0);
		}

		::System::Void _ctor(::NNDKMMANHEA* a1, ::AJHEFPNNKKC* a2, ::EPAAAILJEKE* a3, ::HEJLOAOKDGE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NNDKMMANHEA*, ::AJHEFPNNKKC*, ::EPAAAILJEKE*, ::HEJLOAOKDGE*))((::PBYTE)hIl2Cpp + LEABOMCMOPJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEABOMCMOPJ_CCTOR_OFFSET))();
		}

		::PBFBEGDNFFB* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::PBFBEGDNFFB*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LEABOMCMOPJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData> FDNAPGPNDFB(::DNFDBKCPBNM a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Nullable_1<::RPG::AvatarSystem::SeriesSkillsBuffedAvatarDisplayData>(*)(::PVOID, ::DNFDBKCPBNM, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + LEABOMCMOPJ_FDNAPGPNDFB_OFFSET))(this, a1, a2);
		}

	};
