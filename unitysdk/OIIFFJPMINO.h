#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Tween/Ease.h"
#include "unitysdk/System/Object.h"
class MNCLEOJGFEO;
class NJFANBADGMB;

#define OIIFFJPMINO_AOMLLDOPEMI_OFFSET UNITYSDK_OFFSET(0xBE97D20)
#define OIIFFJPMINO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE99770)
#define OIIFFJPMINO_JKPBHIIBCCO_OFFSET UNITYSDK_OFFSET(0xBE962D0)
#define OIIFFJPMINO_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBE95720)

	class OIIFFJPMINO : public ::System::Object
	{
	public:
		// static const ::System::Object OMDIOCBJPPE; // 0x0
		// static const ::System::Object JDPALOBIAKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIFFJPMINO_CTOR_OFFSET))(this);
		}

		static ::System::Single KFGJEKJHIMB(::RPG::Client::Tween::Ease a1, ::System::Single a2, ::System::Single a3, ::MNCLEOJGFEO* a4)
		{
			return ((::System::Single(*)(::RPG::Client::Tween::Ease, ::System::Single, ::System::Single, ::MNCLEOJGFEO*))((::PBYTE)hIl2Cpp + OIIFFJPMINO_KFGJEKJHIMB_OFFSET))(a1, a2, a3, a4);
		}

		static ::MNCLEOJGFEO* JKPBHIIBCCO(::RPG::Client::Tween::Ease a1)
		{
			return ((::MNCLEOJGFEO*(*)(::RPG::Client::Tween::Ease))((::PBYTE)hIl2Cpp + OIIFFJPMINO_JKPBHIIBCCO_OFFSET))(a1);
		}

		static ::NJFANBADGMB* AOMLLDOPEMI(::RPG::Client::Tween::Ease a1)
		{
			return ((::NJFANBADGMB*(*)(::RPG::Client::Tween::Ease))((::PBYTE)hIl2Cpp + OIIFFJPMINO_AOMLLDOPEMI_OFFSET))(a1);
		}

	};
