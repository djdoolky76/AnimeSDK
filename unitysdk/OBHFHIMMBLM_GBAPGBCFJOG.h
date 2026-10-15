#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class DEBEAKKOHLN;
class OBHFHIMMBLM;
namespace System { class String; }
namespace UnityEngine { class Material; }

#define OBHFHIMMBLM_GBAPGBCFJOG_BCAOPBJBDMB_OFFSET UNITYSDK_OFFSET(0xBD3F8A0)
#define OBHFHIMMBLM_GBAPGBCFJOG_BENNOFCJKPH_OFFSET UNITYSDK_OFFSET(0xBD3F690)
#define OBHFHIMMBLM_GBAPGBCFJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD3FD90)
#define OBHFHIMMBLM_GBAPGBCFJOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD3FC40)
#define OBHFHIMMBLM_GBAPGBCFJOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD3FC60)
#define OBHFHIMMBLM_GBAPGBCFJOG_EGLKDKFFLBN_OFFSET UNITYSDK_OFFSET(0xBD3F270)
#define OBHFHIMMBLM_GBAPGBCFJOG_FAPBFOGHOEG_OFFSET UNITYSDK_OFFSET(0xBD3F9E0)
#define OBHFHIMMBLM_GBAPGBCFJOG_FNAKHGBPHLE_OFFSET UNITYSDK_OFFSET(0xBD3F780)
#define OBHFHIMMBLM_GBAPGBCFJOG_FPAFHCDOEAG_OFFSET UNITYSDK_OFFSET(0xBD3FCB0)
#define OBHFHIMMBLM_GBAPGBCFJOG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBD3F400)
#define OBHFHIMMBLM_GBAPGBCFJOG_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xBD3EF70)

inline static constexpr unsigned int OBHFHIMMBLM_GBAPGBCFJOG_TypeDefinitionIndex = 57468;

	class OBHFHIMMBLM_GBAPGBCFJOG : public ::System::Object
	{
	public:
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x10
		::System::String* JLMMOLCLMHK; // 0x18
		::UnityEngine::Material* BLLINICNOJF; // 0x20
		::OBHFHIMMBLM* CFKHNPGEAJA; // 0x28
		::System::Boolean HCDEGNCGOML; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single HCEILGGKHDK; // 0x34
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Single NPNELIJFMLK; // 0x3C
		::UnityEngine::Color NHFPGLCLOMO; // 0x40
		::System::Single HBDJCFFDGDD; // 0x50
		::System::Single NDFEPODIHOH; // 0x54
		static ::System::Int32* StaticGet_KMLBIOAMCOH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GBAPGBCFJOG")->GetStaticField(0x138E0);
		}

		::System::Void _ctor(::OBHFHIMMBLM* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBHFHIMMBLM*, ::System::String*))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_DISPOSE_OFFSET))(this);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void EGLKDKFFLBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_EGLKDKFFLBN_OFFSET))(this);
		}

		::System::Void BENNOFCJKPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_BENNOFCJKPH_OFFSET))(this);
		}

		::System::Void FNAKHGBPHLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_FNAKHGBPHLE_OFFSET))(this);
		}

		::System::Void BCAOPBJBDMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_BCAOPBJBDMB_OFFSET))(this, a1);
		}

		::System::Void FAPBFOGHOEG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_FAPBFOGHOEG_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FPAFHCDOEAG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBHFHIMMBLM_GBAPGBCFJOG_FPAFHCDOEAG_OFFSET))(this, a1);
		}

	};
