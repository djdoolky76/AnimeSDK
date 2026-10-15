#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLHFCKAHEFO_CTOR_OFFSET UNITYSDK_OFFSET(0x15832170)
#define FLHFCKAHEFO_DKDPGNFGBNK_1_OFFSET UNITYSDK_OFFSET(0x15831DD0)
#define FLHFCKAHEFO_DKDPGNFGBNK_OFFSET UNITYSDK_OFFSET(0x158318D0)
#define FLHFCKAHEFO_FCJBOOPAEFD_1_OFFSET UNITYSDK_OFFSET(0x15831B60)
#define FLHFCKAHEFO_FCJBOOPAEFD_OFFSET UNITYSDK_OFFSET(0x15831770)
#define FLHFCKAHEFO_KNJCAJDNOFC_1_OFFSET UNITYSDK_OFFSET(0x15831F00)
#define FLHFCKAHEFO_KNJCAJDNOFC_OFFSET UNITYSDK_OFFSET(0x158319E0)
#define FLHFCKAHEFO_LEPFCBKKCAB_OFFSET UNITYSDK_OFFSET(0x15831CC0)

	class FLHFCKAHEFO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_CTOR_OFFSET))(this);
		}

		static ::System::Single FCJBOOPAEFD(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_FCJBOOPAEFD_OFFSET))(a1, a2);
		}

		static ::System::Single DKDPGNFGBNK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_DKDPGNFGBNK_OFFSET))(a1, a2);
		}

		static ::System::Single KNJCAJDNOFC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_KNJCAJDNOFC_OFFSET))(a1, a2);
		}

		static ::System::Single FCJBOOPAEFD_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_FCJBOOPAEFD_1_OFFSET))(a1);
		}

		static ::System::Single DKDPGNFGBNK_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_DKDPGNFGBNK_1_OFFSET))(a1);
		}

		static ::System::Single KNJCAJDNOFC_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_KNJCAJDNOFC_1_OFFSET))(a1);
		}

		static ::System::Single LEPFCBKKCAB(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLHFCKAHEFO_LEPFCBKKCAB_OFFSET))(a1);
		}

	};
