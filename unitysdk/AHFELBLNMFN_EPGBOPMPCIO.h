#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AHFELBLNMFN_EPGBOPMPCIO_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x135E2AB0)
#define AHFELBLNMFN_EPGBOPMPCIO__CTOR_OFFSET UNITYSDK_OFFSET(0x135E28C0)

inline static constexpr unsigned int AHFELBLNMFN_EPGBOPMPCIO_TypeDefinitionIndex = 67278;

class AHFELBLNMFN_EPGBOPMPCIO : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFELBLNMFN_EPGBOPMPCIO__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFELBLNMFN_EPGBOPMPCIO_PNGOHNLELDJ_OFFSET))(this);
	}
};
