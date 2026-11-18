#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define BMDJJNLHBIF_CEEHNHCAKGM_LJGAIBEDAEO_OFFSET UNITYSDK_OFFSET(0xFF8D640)
#define BMDJJNLHBIF_CEEHNHCAKGM__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8D630)

inline static constexpr unsigned int BMDJJNLHBIF_CEEHNHCAKGM_TypeDefinitionIndex = 75419;

class BMDJJNLHBIF_CEEHNHCAKGM : public ::System::Object
{
public:
	::System::Action_1<::Foundation::AssetRequestHandle>* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_CEEHNHCAKGM__CTOR_OFFSET))(this);
	}

	::System::Void LJGAIBEDAEO(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_CEEHNHCAKGM_LJGAIBEDAEO_OFFSET))(this, NGLKIKLLLFL, FCEIKAIDHPM);
	}
};
