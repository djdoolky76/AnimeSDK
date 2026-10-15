#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KIJDCAAPBLM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFGPEHMCHDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC20F010)
#define PFGPEHMCHDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC20EF70)

inline static constexpr unsigned int PFGPEHMCHDK_TypeDefinitionIndex = 54192;

	class PFGPEHMCHDK : public ::System::Object
	{
	public:
		::System::String* ONOAKCNFMBC; // 0x10
		::System::Collections::Generic::List_1<::KIJDCAAPBLM*>* JONGMMPJEIA; // 0x18
		::UnityEngine::Vector3 DCJFFIAPJME; // 0x20
		::System::Single CNHMBFIHLPC; // 0x2C
		::System::Single CDJLMJDEPJA; // 0x30
		::System::Single PIMDCJGDHMG; // 0x34
		::System::Single GJGKKECHEHH; // 0x38
		::System::Boolean PPFBBBJIODA; // 0x3C
		::System::Boolean KPHIFEFPPDD; // 0x3D
		::System::Boolean JJOMBGLMEBL; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Int32 NOIIIOKMIIN; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGPEHMCHDK_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGPEHMCHDK_PJPFIHFAHGO_OFFSET))(this);
		}

	};
