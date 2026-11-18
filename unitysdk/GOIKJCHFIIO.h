#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Sprite; }

#define GOIKJCHFIIO_BPGFLKJMNPL_OFFSET UNITYSDK_OFFSET(0x14D07C40)
#define GOIKJCHFIIO_DJJCINEHGAA_OFFSET UNITYSDK_OFFSET(0x14D080B0)
#define GOIKJCHFIIO_PEFGDNLEMEG_OFFSET UNITYSDK_OFFSET(0x14D07CA0)
#define GOIKJCHFIIO__CTOR_OFFSET UNITYSDK_OFFSET(0x14D07B40)

inline static constexpr unsigned int GOIKJCHFIIO_TypeDefinitionIndex = 42116;

class GOIKJCHFIIO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Sprite*>* EPGFPGNBDBF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* LNNBMJJGLPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIKJCHFIIO__CTOR_OFFSET))(this);
	}

	::System::Void BPGFLKJMNPL(::MoleMole::TextureSheetData* EFGEGMCCODE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + GOIKJCHFIIO_BPGFLKJMNPL_OFFSET))(this, EFGEGMCCODE);
	}

	::System::Void DJJCINEHGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIKJCHFIIO_DJJCINEHGAA_OFFSET))(this);
	}

	::UnityEngine::Sprite* PEFGDNLEMEG(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOIKJCHFIIO_PEFGDNLEMEG_OFFSET))(this, CJBJONJDOLI);
	}
};
