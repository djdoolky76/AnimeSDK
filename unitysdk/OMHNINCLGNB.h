#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class FMHDMLBDIJC;
class MonoUITableScrollV2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define OMHNINCLGNB_IPOJENALILF_OFFSET UNITYSDK_OFFSET(0x16C1E620)
#define OMHNINCLGNB_NPNPJHOFPIP_OFFSET UNITYSDK_OFFSET(0x16C1EAC0)

inline static constexpr unsigned int OMHNINCLGNB_TypeDefinitionIndex = 85375;

class OMHNINCLGNB : public ::System::Object
{
public:
	static ::System::Boolean IPOJENALILF(::MonoUITableScrollV2* FAMGIABLFPH, ::System::Int32 KNJOHKJLEGO, ::System::Action* EPKKNJMIADC, ::System::Action* OGDNFIIBKIK, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* LHKMEKNLOMA, ::System::Action*& GJDHJFMDIOD, ::System::Nullable_1<::System::Int32> KPBGGCDMDAA, ::System::Nullable_1<::OFDKEANKAIL> MAOCFFFKJCF)
	{
		return ((::System::Boolean(*)(::MonoUITableScrollV2*, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>*, ::System::Action*&, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::OFDKEANKAIL>))((::PBYTE)hIl2Cpp + OMHNINCLGNB_IPOJENALILF_OFFSET))(FAMGIABLFPH, KNJOHKJLEGO, EPKKNJMIADC, OGDNFIIBKIK, LHKMEKNLOMA, GJDHJFMDIOD, KPBGGCDMDAA, MAOCFFFKJCF);
	}

	static ::System::Boolean NPNPJHOFPIP(::UnityEngine::Vector2 MKHLBMMKCJL, ::MonoUITableScrollV2* FAMGIABLFPH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + OMHNINCLGNB_NPNPJHOFPIP_OFFSET))(MKHLBMMKCJL, FAMGIABLFPH);
	}
};
