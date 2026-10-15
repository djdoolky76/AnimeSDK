#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
class BOGCBDLBHFK;

#define LPDODJBIDAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8F4930)
#define LPDODJBIDAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F3600)
#define LPDODJBIDAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8F3610)
#define LPDODJBIDAH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C8F36C0)
#define LPDODJBIDAH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8F43D0)

inline static constexpr unsigned int LPDODJBIDAH_TypeDefinitionIndex = 42470;

	class LPDODJBIDAH : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* LHLOGDGCOHK; // 0x18
		::System::Single OBJJIELNFLP; // 0x20
		::System::Single FNNLDNCIIKI; // 0x24
		static ::System::Int32* StaticGet_OGPJNMKBNOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x124D0);
		}

		static ::System::Int32* StaticGet_NICCHCOPMAD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x124D4);
		}

		static ::System::Int32* StaticGet_CFPDLJNJNJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPDODJBIDAH")->GetStaticField(0x124D8);
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
