#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B588F8DDEB6347E8_F796AE6B0FA1F291.h"
#include "unitysdk/System/Object.h"

class FD58DF262776449E;
namespace System { class String; }

#define CRIWARE_CRIATOMCUESHEET_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x2A96F00)
#define CRIWARE_CRIATOMCUESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x2A96E70)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomCueSheet_TypeDefinitionIndex = 19078;

	class CriAtomCueSheet : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* acbFile; // 0x18
		::System::String* awbFile; // 0x20
		::FD58DF262776449E* acb; // 0x28
		::B588F8DDEB6347E8_F796AE6B0FA1F291 loaderStatus; // 0x30

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCUESHEET_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCUESHEET__CTOR_OFFSET))(this);
		}
	};
}
