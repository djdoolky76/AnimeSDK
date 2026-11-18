#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDNHAPJKJAF;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFLOAIKPPPG_DKCLHKEHNHI_IGFDEPLAJFC_OFFSET UNITYSDK_OFFSET(0x110133B0)
#define HFLOAIKPPPG_DKCLHKEHNHI__CTOR_OFFSET UNITYSDK_OFFSET(0x110133A0)

inline static constexpr unsigned int HFLOAIKPPPG_DKCLHKEHNHI_TypeDefinitionIndex = 42521;

class HFLOAIKPPPG_DKCLHKEHNHI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::NDNHAPJKJAF*>* KMCCGHFBHND; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLOAIKPPPG_DKCLHKEHNHI__CTOR_OFFSET))(this);
	}

	::System::Void IGFDEPLAJFC(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HFLOAIKPPPG_DKCLHKEHNHI_IGFDEPLAJFC_OFFSET))(this, DJCNCELJPOM);
	}
};
