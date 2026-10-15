#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFKJNDCNILF;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JEHPCNCCGFE_CTOR_OFFSET UNITYSDK_OFFSET(0x166189A0)
#define JEHPCNCCGFE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16618A20)
#define JEHPCNCCGFE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16619020)

inline static constexpr unsigned int JEHPCNCCGFE_TypeDefinitionIndex = 62091;

	class JEHPCNCCGFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EFKJNDCNILF*>* IKFBPCMKDEL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPCNCCGFE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + JEHPCNCCGFE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHPCNCCGFE_PJPFIHFAHGO_OFFSET))(this);
		}

	};
