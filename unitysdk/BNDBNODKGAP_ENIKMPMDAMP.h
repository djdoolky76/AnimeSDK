#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP_GEJMMOILJIA;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define BNDBNODKGAP_ENIKMPMDAMP_CHHEHELGHPE_OFFSET UNITYSDK_OFFSET(0x113FBE40)
#define BNDBNODKGAP_ENIKMPMDAMP_EAEDKPIKGDH_OFFSET UNITYSDK_OFFSET(0x113FBEE0)
#define BNDBNODKGAP_ENIKMPMDAMP_NNHNOBFIJNO_OFFSET UNITYSDK_OFFSET(0x113FBE90)
#define BNDBNODKGAP_ENIKMPMDAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x113FBE30)

inline static constexpr unsigned int BNDBNODKGAP_ENIKMPMDAMP_TypeDefinitionIndex = 78414;

class BNDBNODKGAP_ENIKMPMDAMP : public ::System::Object
{
public:
	::BNDBNODKGAP_GEJMMOILJIA* FOBKJGCBGKP; // 0x10
	::System::String* FOOJFGGHMAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ENIKMPMDAMP__CTOR_OFFSET))(this);
	}

	::System::Void CHHEHELGHPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ENIKMPMDAMP_CHHEHELGHPE_OFFSET))(this);
	}

	::System::Collections::IEnumerator* NNHNOBFIJNO()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ENIKMPMDAMP_NNHNOBFIJNO_OFFSET))(this);
	}

	::System::Collections::IEnumerator* EAEDKPIKGDH()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_ENIKMPMDAMP_EAEDKPIKGDH_OFFSET))(this);
	}
};
