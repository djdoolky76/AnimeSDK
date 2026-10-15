#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
class BOGCBDLBHFK;

#define LPDODJBIDAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C922D50)
#define LPDODJBIDAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C921A20)
#define LPDODJBIDAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C921A30)
#define LPDODJBIDAH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C921AE0)
#define LPDODJBIDAH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C9227F0)

	class LPDODJBIDAH : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* LHLOGDGCOHK; // 0x18
		::System::Single OBJJIELNFLP; // 0x20
		::System::Single FNNLDNCIIKI; // 0x24
		static ::System::Int32* StaticGet_CFPDLJNJNJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x12F80);
		}

		static ::System::Int32* StaticGet_OGPJNMKBNOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x12F84);
		}

		static ::System::Int32* StaticGet_NICCHCOPMAD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x12F88);
		}

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDODJBIDAH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPDODJBIDAH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDODJBIDAH_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDODJBIDAH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDODJBIDAH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
