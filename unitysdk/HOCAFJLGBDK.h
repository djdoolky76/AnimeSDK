#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMPIEAPOJBJ;
class JANDIGIAGOJ;

#define HOCAFJLGBDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA3B60)
#define HOCAFJLGBDK_EBCOFEJPMCJ_OFFSET UNITYSDK_OFFSET(0x15DA3950)
#define HOCAFJLGBDK_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x15DA3850)
#define HOCAFJLGBDK_FJJNDAKPNAH_OFFSET UNITYSDK_OFFSET(0x15DA33F0)
#define HOCAFJLGBDK_IKICPEIDOHB_OFFSET UNITYSDK_OFFSET(0x15DA3640)
#define HOCAFJLGBDK_INHBJHGKPGP_OFFSET UNITYSDK_OFFSET(0x15DA31E0)

inline static constexpr unsigned int HOCAFJLGBDK_TypeDefinitionIndex = 73273;

	class HOCAFJLGBDK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_CTOR_OFFSET))(this);
		}

		static ::System::Void INHBJHGKPGP(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_INHBJHGKPGP_OFFSET))(a1, a2);
		}

		static ::System::Void EMMGHDLIPOH(::JANDIGIAGOJ* a1)
		{
			return ((::System::Void(*)(::JANDIGIAGOJ*))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_EMMGHDLIPOH_OFFSET))(a1);
		}

		static ::JANDIGIAGOJ* FJJNDAKPNAH(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::JANDIGIAGOJ*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_FJJNDAKPNAH_OFFSET))(a1, a2);
		}

		static ::BMPIEAPOJBJ* IKICPEIDOHB(::JANDIGIAGOJ* a1)
		{
			return ((::BMPIEAPOJBJ*(*)(::JANDIGIAGOJ*))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_IKICPEIDOHB_OFFSET))(a1);
		}

		static ::BMPIEAPOJBJ* EBCOFEJPMCJ(::JANDIGIAGOJ* a1)
		{
			return ((::BMPIEAPOJBJ*(*)(::JANDIGIAGOJ*))((::PBYTE)hIl2Cpp + HOCAFJLGBDK_EBCOFEJPMCJ_OFFSET))(a1);
		}

	};
