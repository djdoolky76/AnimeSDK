#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KIJDCAAPBLM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFGPEHMCHDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC207AB0)
#define PFGPEHMCHDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC207A10)

inline static constexpr unsigned int PFGPEHMCHDK_TypeDefinitionIndex = 54192;

	class PFGPEHMCHDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KIJDCAAPBLM*>* JONGMMPJEIA; // 0x10
		::System::String* ONOAKCNFMBC; // 0x18
		::System::Single CDJLMJDEPJA; // 0x20
		::System::Int32 NOIIIOKMIIN; // 0x24
		::System::Single GJGKKECHEHH; // 0x28
		::System::Boolean PPFBBBJIODA; // 0x2C
		::System::Boolean JJOMBGLMEBL; // 0x2D
		::System::Boolean KPHIFEFPPDD; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single PIMDCJGDHMG; // 0x30
		::UnityEngine::Vector3 DCJFFIAPJME; // 0x34
		::System::Single CNHMBFIHLPC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGPEHMCHDK_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGPEHMCHDK_PJPFIHFAHGO_OFFSET))(this);
		}

	};
