#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoUIAutoView; }
namespace ABC::UI { class MonoVideoPlayer; }
namespace CriWare { class CriManaMovieControllerForUI; }
namespace UnityEngine::UI { class Image; }

#define A766F1BB19C45563_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x2262510)
#define A766F1BB19C45563_BB2051716F9915F8_OFFSET UNITYSDK_OFFSET(0x1B96BE0)
#define A766F1BB19C45563_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x2262700)
#define A766F1BB19C45563__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A766F1BB19C45563_TypeDefinitionIndex = 6914;

class A766F1BB19C45563 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoVideoPlayer* F027798F36E260E5; // 0x80
	::CriWare::CriManaMovieControllerForUI* A9177E0FB44A3A68; // 0x88
	::UnityEngine::UI::Image* F3AD4997E5CDE299; // 0x90

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A766F1BB19C45563_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A766F1BB19C45563_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A766F1BB19C45563__CTOR_OFFSET))(this);
	}

	::ABC::UI::MonoVideoPlayer* BB2051716F9915F8()
	{
		return ((::ABC::UI::MonoVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + A766F1BB19C45563_BB2051716F9915F8_OFFSET))(this);
	}
};
