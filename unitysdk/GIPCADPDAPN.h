#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDBNONPKCBC.h"
#include "unitysdk/FLPFOHKGOIJ.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }

#define GIPCADPDAPN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x18143B00)
#define GIPCADPDAPN_POLISH_OFFSET UNITYSDK_OFFSET(0x18143A00)
#define GIPCADPDAPN_RECYCLE_OFFSET UNITYSDK_OFFSET(0x18143A60)
#define GIPCADPDAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x18143AF0)

inline static constexpr unsigned int GIPCADPDAPN_TypeDefinitionIndex = 73588;

class GIPCADPDAPN : public ::System::Object
{
public:
	::System::Action* CHCGMACMJLD; // 0x10
	::DDBNONPKCBC BLKNPKNOHIO; // 0x18
	::System::Func_1<::System::Boolean>* FBEOFGOOIKJ; // 0x28
	::System::String* CKFNPDOKNJO; // 0x30
	::UnityEngine::GameObject* IMLMPHGIKIP; // 0x38
	::System::Collections::Generic::IList_1<::System::String*>* FLEEHHNGAKG; // 0x40
	::FLPFOHKGOIJ JJPEDAMOOLA; // 0x48
	::System::Single NMMCKDHAHHH; // 0x4C
	::System::Boolean PBFBICMFFFN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCADPDAPN__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCADPDAPN_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCADPDAPN_RECYCLE_OFFSET))(this);
	}

	static ::GIPCADPDAPN* COKNIICCODC()
	{
		return ((::GIPCADPDAPN*(*)())((::PBYTE)hIl2Cpp + GIPCADPDAPN_COKNIICCODC_OFFSET))();
	}
};
