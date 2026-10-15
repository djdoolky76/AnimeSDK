#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFNPJFKAOH;
class BFDLNILKJIM;
class EABFLAJLMHM;
class EJCLAFODBMD;
class EOKPKNLFICD;
class FJFNJCPHFDM;
class GHGAFIIFPEC;
class GKEPCDFBABH;
class KCJNGDLDKFG;
class LHPLBIEGIGG;
class OBJANKHLNGO;
class POIDGGOOMHO;
namespace System { class Object; }

#define PEOEGGPBHMI_AFDNFDMHENK_OFFSET UNITYSDK_OFFSET(0xC1F5450)
#define PEOEGGPBHMI_BGAIGCGLKEL_OFFSET UNITYSDK_OFFSET(0xC1F5350)
#define PEOEGGPBHMI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F3BD0)
#define PEOEGGPBHMI_DHOFLOEPGHH_OFFSET UNITYSDK_OFFSET(0xC1F3F60)
#define PEOEGGPBHMI_EHPBFFPCHAL_OFFSET UNITYSDK_OFFSET(0xC1F5230)
#define PEOEGGPBHMI_IDBEFAHLDLP_OFFSET UNITYSDK_OFFSET(0xC1F53B0)
#define PEOEGGPBHMI_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xC1F3DB0)
#define PEOEGGPBHMI_KCDPKNLCIDI_OFFSET UNITYSDK_OFFSET(0xC1F5180)
#define PEOEGGPBHMI_START_OFFSET UNITYSDK_OFFSET(0xC1F3C20)
#define PEOEGGPBHMI_STOP_OFFSET UNITYSDK_OFFSET(0xC1F3ED0)

inline static constexpr unsigned int PEOEGGPBHMI_TypeDefinitionIndex = 80242;

	class PEOEGGPBHMI : public ::System::Object
	{
	public:
		::EJCLAFODBMD* KDBNLBFFHDB; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::POIDGGOOMHO* DEMEBGGDHEH; // 0x20
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x28
		::LHPLBIEGIGG* FHLAOJJDHJH; // 0x30
		::AMFNPJFKAOH* BDLGFMBOOGC; // 0x38
		::EABFLAJLMHM* JDNJLANNING; // 0x40
		::KCJNGDLDKFG* JGJPOOFDENC; // 0x48
		::GHGAFIIFPEC* GAPACBAEBHJ; // 0x50
		::System::Void _ctor(::OBJANKHLNGO* a1, ::FJFNJCPHFDM* a2, ::AMFNPJFKAOH* a3, ::GHGAFIIFPEC* a4, ::KCJNGDLDKFG* a5, ::EJCLAFODBMD* a6, ::EABFLAJLMHM* a7, ::POIDGGOOMHO* a8, ::LHPLBIEGIGG* a9)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::FJFNJCPHFDM*, ::AMFNPJFKAOH*, ::GHGAFIIFPEC*, ::KCJNGDLDKFG*, ::EJCLAFODBMD*, ::EABFLAJLMHM*, ::POIDGGOOMHO*, ::LHPLBIEGIGG*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_STOP_OFFSET))(this);
		}

		::System::Void DHOFLOEPGHH(::EOKPKNLFICD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKPKNLFICD*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_DHOFLOEPGHH_OFFSET))(this, a1);
		}

		::System::Void KCDPKNLCIDI(::GKEPCDFBABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKEPCDFBABH*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_KCDPKNLCIDI_OFFSET))(this, a1);
		}

		::System::Void EHPBFFPCHAL(::BFDLNILKJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFDLNILKJIM*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_EHPBFFPCHAL_OFFSET))(this, a1);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void BGAIGCGLKEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_BGAIGCGLKEL_OFFSET))(this, a1);
		}

		::System::Void IDBEFAHLDLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_IDBEFAHLDLP_OFFSET))(this, a1);
		}

		::System::Void AFDNFDMHENK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEOEGGPBHMI_AFDNFDMHENK_OFFSET))(this, a1);
		}

	};
