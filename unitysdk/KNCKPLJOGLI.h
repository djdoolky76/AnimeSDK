#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define KNCKPLJOGLI_MBIFPONOBEI_OFFSET UNITYSDK_OFFSET(0x13C85CB0)

inline static constexpr unsigned int KNCKPLJOGLI_TypeDefinitionIndex = 90966;

class KNCKPLJOGLI : public ::System::Object
{
public:
	static ::MoleMole::BlendTextureSheetData* MBIFPONOBEI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + KNCKPLJOGLI_MBIFPONOBEI_OFFSET))(MCOHLHMKLIP);
	}
};
