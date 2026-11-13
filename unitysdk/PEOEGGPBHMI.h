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

#define PEOEGGPBHMI_AFDNFDMHENK_OFFSET UNITYSDK_OFFSET(0x14543690)
#define PEOEGGPBHMI_BGAIGCGLKEL_OFFSET UNITYSDK_OFFSET(0x14543590)
#define PEOEGGPBHMI_CTOR_OFFSET UNITYSDK_OFFSET(0x14541E10)
#define PEOEGGPBHMI_DHOFLOEPGHH_OFFSET UNITYSDK_OFFSET(0x145421A0)
#define PEOEGGPBHMI_EHPBFFPCHAL_OFFSET UNITYSDK_OFFSET(0x14543470)
#define PEOEGGPBHMI_IDBEFAHLDLP_OFFSET UNITYSDK_OFFSET(0x145435F0)
#define PEOEGGPBHMI_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0x14541FF0)
#define PEOEGGPBHMI_KCDPKNLCIDI_OFFSET UNITYSDK_OFFSET(0x145433C0)
#define PEOEGGPBHMI_START_OFFSET UNITYSDK_OFFSET(0x14541E60)
#define PEOEGGPBHMI_STOP_OFFSET UNITYSDK_OFFSET(0x14542110)

inline static constexpr unsigned int PEOEGGPBHMI_TypeDefinitionIndex = 83018;

	class PEOEGGPBHMI : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::POIDGGOOMHO* DEMEBGGDHEH; // 0x18
		::KCJNGDLDKFG* JGJPOOFDENC; // 0x20
		::EABFLAJLMHM* JDNJLANNING; // 0x28
		::EJCLAFODBMD* KDBNLBFFHDB; // 0x30
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x38
		::AMFNPJFKAOH* BDLGFMBOOGC; // 0x40
		::LHPLBIEGIGG* FHLAOJJDHJH; // 0x48
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
