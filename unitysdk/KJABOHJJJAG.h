#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define KJABOHJJJAG_APKAPIKJDOA_OFFSET UNITYSDK_OFFSET(0xB434460)
#define KJABOHJJJAG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4351C0)
#define KJABOHJJJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4351B0)

inline static constexpr unsigned int KJABOHJJJAG_TypeDefinitionIndex = 65306;

	class KJABOHJJJAG : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_GLLBJLJJJIO()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "KJABOHJJJAG")->GetStaticField(0x50170);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_LCKDHILMCLE()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "KJABOHJJJAG")->GetStaticField(0x50178);
		}

		// static const ::System::String* ANOLLKPBNIJ; // 0x0
		// static const ::System::String* BMMMHANDLGP; // 0x0
		// static const ::System::String* KHGNJEBBDGI; // 0x0
		// static const ::System::String* GLECCDMCNII; // 0x0
		// static const ::System::String* PBPMLJPCFID; // 0x0
		// static const ::System::String* HGGABKCHDDJ; // 0x0
		// static const ::System::String* FANFGIJGIEM; // 0x0
		// static const ::System::String* FCJEFNHKENG; // 0x0
		// static const ::System::String* JFCAPNCLLLA; // 0x0
		// static const ::System::String* FHJFCHMCOLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOHJJJAG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJABOHJJJAG_CCTOR_OFFSET))();
		}

		static ::System::String* APKAPIKJDOA(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + KJABOHJJJAG_APKAPIKJDOA_OFFSET))(a1, a2);
		}

	};
