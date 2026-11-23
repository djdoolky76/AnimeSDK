#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define B9F04DBA37F5DE5F_BF47044E6CF3B34E_OFFSET UNITYSDK_OFFSET(0x22D7850)
#define B9F04DBA37F5DE5F_ED55F0074C338ACB_OFFSET UNITYSDK_OFFSET(0x22D78D0)
#define B9F04DBA37F5DE5F_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x22D7720)
#define B9F04DBA37F5DE5F__CTOR_OFFSET UNITYSDK_OFFSET(0x22C8360)

inline static constexpr unsigned int B9F04DBA37F5DE5F_TypeDefinitionIndex = 7260;

class B9F04DBA37F5DE5F : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::UI::Image* B5AE96FC2A425DE7; // 0x88
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x90

	::System::Void ED55F0074C338ACB(::System::String* BE56AEB6DCC4BFB7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B9F04DBA37F5DE5F_ED55F0074C338ACB_OFFSET))(this, BE56AEB6DCC4BFB7);
	}

	::System::Void BF47044E6CF3B34E(::E865F6F8B8B44C1E E7102EB4CD1D28DD)
	{
		return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E))((::PBYTE)hIl2Cpp + B9F04DBA37F5DE5F_BF47044E6CF3B34E_OFFSET))(this, E7102EB4CD1D28DD);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9F04DBA37F5DE5F_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9F04DBA37F5DE5F__CTOR_OFFSET))(this);
	}
};
