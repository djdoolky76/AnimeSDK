#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"

class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace System { class Object; }
template <typename T> class JIOLFCAGOFH_1;

#define OIGKEOIKPEN_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0xF194800)
#define OIGKEOIKPEN_BGOFNMEMEGA_OFFSET UNITYSDK_OFFSET(0xF194860)
#define OIGKEOIKPEN_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xF194540)
#define OIGKEOIKPEN_GHFHLAPICDF_OFFSET UNITYSDK_OFFSET(0xF1945E0)
#define OIGKEOIKPEN_ILHBMCMGJFN_OFFSET UNITYSDK_OFFSET(0xF1952E0)
#define OIGKEOIKPEN__CTOR_OFFSET UNITYSDK_OFFSET(0xF194590)

inline static constexpr unsigned int OIGKEOIKPEN_TypeDefinitionIndex = 89324;

class OIGKEOIKPEN : public ::PBJOCICFNGK
{
public:
	::LGINJIKKBJA* OGKFPDCPHON; // 0x50
	::JIOLFCAGOFH_1<::System::Object*>* LJBPECKCCEA; // 0x58
	::MoleMole::MonoGamepadModule* MLOGBJPPCKD; // 0x60
	::INOEOEPKMJL DEJHFDPEJKH; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKEOIKPEN__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + OIGKEOIKPEN_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void GHFHLAPICDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKEOIKPEN_GHFHLAPICDF_OFFSET))(this);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGKEOIKPEN_BCMBLHMKGMA_OFFSET))(this);
	}

	::System::Void BGOFNMEMEGA(::JIOLFCAGOFH_1<::System::Object*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OIGKEOIKPEN_BGOFNMEMEGA_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void ILHBMCMGJFN(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + OIGKEOIKPEN_ILHBMCMGJFN_OFFSET))(this, NFFNEFLKPDG);
	}
};
