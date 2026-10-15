#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
class ODLKDMDPHAI;

#define ODLKDMDPHAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEC760)
#define ODLKDMDPHAI_FJKBDIAAHOE_OFFSET UNITYSDK_OFFSET(0xBDEC6A0)
#define ODLKDMDPHAI_GPHEHDDOPPG_OFFSET UNITYSDK_OFFSET(0xBDEC520)
#define ODLKDMDPHAI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBDEC640)
#define ODLKDMDPHAI_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBDEC4C0)
#define ODLKDMDPHAI_LEICGLBOIDL_OFFSET UNITYSDK_OFFSET(0xBDEC570)
#define ODLKDMDPHAI_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBDEC5C0)

inline static constexpr unsigned int ODLKDMDPHAI_TypeDefinitionIndex = 57261;

	class ODLKDMDPHAI : public ::System::Object
	{
	public:
		::System::UInt32 ACCPEGBMFCB; // 0x10
		::System::Int32 EAJBNHGHPNM; // 0x14
		::System::Boolean BNIMJJNOLAI; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GAEEJFJEGKA; // 0x1C
		::System::Single ECBOJPEECMB; // 0x20
		::System::Int32 KOCGGNKJDEL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_CTOR_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean GPHEHDDOPPG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_GPHEHDDOPPG_OFFSET))(this, a1);
		}

		::System::Boolean LEICGLBOIDL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_LEICGLBOIDL_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::ODLKDMDPHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODLKDMDPHAI*))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FJKBDIAAHOE(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + ODLKDMDPHAI_FJKBDIAAHOE_OFFSET))(this, a1, a2);
		}

	};
