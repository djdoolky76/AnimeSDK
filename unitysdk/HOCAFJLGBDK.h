#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMPIEAPOJBJ;
class JANDIGIAGOJ;

#define HOCAFJLGBDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A387690)
#define HOCAFJLGBDK_EBCOFEJPMCJ_OFFSET UNITYSDK_OFFSET(0x1A387480)
#define HOCAFJLGBDK_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x1A387380)
#define HOCAFJLGBDK_FJJNDAKPNAH_OFFSET UNITYSDK_OFFSET(0x1A386F20)
#define HOCAFJLGBDK_IKICPEIDOHB_OFFSET UNITYSDK_OFFSET(0x1A387170)
#define HOCAFJLGBDK_INHBJHGKPGP_OFFSET UNITYSDK_OFFSET(0x1A386D10)

inline static constexpr unsigned int HOCAFJLGBDK_TypeDefinitionIndex = 75389;

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
