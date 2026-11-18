#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::Config { class SceneConfigRuntimeData; }

#define AFMODCGMEOJ_MJJHFGLNNNC_OFFSET UNITYSDK_OFFSET(0x1434F430)

inline static constexpr unsigned int AFMODCGMEOJ_TypeDefinitionIndex = 86154;

class AFMODCGMEOJ : public ::System::Object
{
public:
	// static const ::System::String* FAMEPKDNLPJ; // 0x0
	// static const ::System::String* PKNDHAICBED; // 0x0

	static ::System::Boolean MJJHFGLNNNC(::Foundation::AssetPath PJNJFACFJHP, ::MoleMole::Config::SceneConfigRuntimeData*& JKLGCCAKCBE)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::MoleMole::Config::SceneConfigRuntimeData*&))((::PBYTE)hIl2Cpp + AFMODCGMEOJ_MJJHFGLNNNC_OFFSET))(PJNJFACFJHP, JKLGCCAKCBE);
	}
};
