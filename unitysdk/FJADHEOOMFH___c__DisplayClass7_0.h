#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCABGHHMOB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJADHEOOMFH___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x157B5E70)
#define FJADHEOOMFH___C__DISPLAYCLASS7_0__FINDNEARPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x157B6190)

inline static constexpr unsigned int FJADHEOOMFH___c__DisplayClass7_0_TypeDefinitionIndex = 52108;

	class FJADHEOOMFH___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Single>* distMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJADHEOOMFH___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _FindNearPoints_b__0(::IKCABGHHMOB* a1, ::IKCABGHHMOB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IKCABGHHMOB*, ::IKCABGHHMOB*))((::PBYTE)hIl2Cpp + FJADHEOOMFH___C__DISPLAYCLASS7_0__FINDNEARPOINTS_B__0_OFFSET))(this, a1, a2);
		}

	};
