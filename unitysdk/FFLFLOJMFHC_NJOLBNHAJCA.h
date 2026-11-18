#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FFLFLOJMFHC_NJOLBNHAJCA_KHEOIAHANGI_OFFSET UNITYSDK_OFFSET(0x11D73960)
#define FFLFLOJMFHC_NJOLBNHAJCA_OFMFIMCFAPK_OFFSET UNITYSDK_OFFSET(0x11D73970)
#define FFLFLOJMFHC_NJOLBNHAJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D73950)

inline static constexpr unsigned int FFLFLOJMFHC_NJOLBNHAJCA_TypeDefinitionIndex = 91506;

class FFLFLOJMFHC_NJOLBNHAJCA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* IOLCMHKHKGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_NJOLBNHAJCA__CTOR_OFFSET))(this);
	}

	::System::Void KHEOIAHANGI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_NJOLBNHAJCA_KHEOIAHANGI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OFMFIMCFAPK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FFLFLOJMFHC_NJOLBNHAJCA_OFMFIMCFAPK_OFFSET))(this, PIIPCLCCOIG);
	}
};
