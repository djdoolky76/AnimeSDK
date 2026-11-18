#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;
class IJFKMLMENIL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJFKMLMENIL_KLENBCBKLMB_HJCCGMHPMIH_OFFSET UNITYSDK_OFFSET(0xF8765F0)
#define IJFKMLMENIL_KLENBCBKLMB__CTOR_OFFSET UNITYSDK_OFFSET(0xF8765E0)

inline static constexpr unsigned int IJFKMLMENIL_KLENBCBKLMB_TypeDefinitionIndex = 49432;

class IJFKMLMENIL_KLENBCBKLMB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::IEHMCPFFJLG*>* GHLJAIMNCFD; // 0x18
	::IJFKMLMENIL* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFKMLMENIL_KLENBCBKLMB__CTOR_OFFSET))(this);
	}

	::System::Void HJCCGMHPMIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFKMLMENIL_KLENBCBKLMB_HJCCGMHPMIH_OFFSET))(this);
	}
};
