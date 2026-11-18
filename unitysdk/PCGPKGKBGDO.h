#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define PCGPKGKBGDO_ALBOHMGGBGJ_OFFSET UNITYSDK_OFFSET(0x19497100)
#define PCGPKGKBGDO_BKCIAMMGNKD_OFFSET UNITYSDK_OFFSET(0x19496940)
#define PCGPKGKBGDO_DJOPMMMHDJF_OFFSET UNITYSDK_OFFSET(0x194979E0)
#define PCGPKGKBGDO_GAEBKELFJNB_OFFSET UNITYSDK_OFFSET(0x19496E80)
#define PCGPKGKBGDO_GHKFOBOACAO_OFFSET UNITYSDK_OFFSET(0x19496380)
#define PCGPKGKBGDO_GPDEFOMHPGL_OFFSET UNITYSDK_OFFSET(0x19496BE0)
#define PCGPKGKBGDO_HAGEJABCMIP_OFFSET UNITYSDK_OFFSET(0x194965B0)
#define PCGPKGKBGDO_HCHAFKIKPPL_OFFSET UNITYSDK_OFFSET(0x194969F0)
#define PCGPKGKBGDO_HKJLMOFMMJH_OFFSET UNITYSDK_OFFSET(0x19497080)
#define PCGPKGKBGDO_IGCICDKAILN_OFFSET UNITYSDK_OFFSET(0x19497960)
#define PCGPKGKBGDO_JOPDKFGBOEJ_OFFSET UNITYSDK_OFFSET(0x19496C60)
#define PCGPKGKBGDO_LFCPCKDKGJB_OFFSET UNITYSDK_OFFSET(0x194977C0)
#define PCGPKGKBGDO_MABFHFIBJNH_OFFSET UNITYSDK_OFFSET(0x19497560)
#define PCGPKGKBGDO_MKGBGFAEDNN_OFFSET UNITYSDK_OFFSET(0x194972B0)
#define PCGPKGKBGDO_OAMCPHKODMM_OFFSET UNITYSDK_OFFSET(0x194961D0)
#define PCGPKGKBGDO_PBGCCMEFFMJ_OFFSET UNITYSDK_OFFSET(0x19496D00)

inline static constexpr unsigned int PCGPKGKBGDO_TypeDefinitionIndex = 58851;

class PCGPKGKBGDO : public ::System::Object
{
public:
	static ::System::Action** StaticGet_DOKNMOIPKHE()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PCGPKGKBGDO_TypeDefinitionIndex)->GetStaticField(0x39CB0);
	}
	static ::System::Action** StaticGet_KHMNGPMHGNI()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PCGPKGKBGDO_TypeDefinitionIndex)->GetStaticField(0x39CB8);
	}
	static ::System::Action** StaticGet_CMELDNOCEDP()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PCGPKGKBGDO_TypeDefinitionIndex)->GetStaticField(0x39CC0);
	}
	// static const ::System::String* GDHHMGIGLKE; // 0x0

	static ::System::String* OAMCPHKODMM(::System::String* FGDDNCDCNNO)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_OAMCPHKODMM_OFFSET))(FGDDNCDCNNO);
	}

	static ::System::Boolean BKCIAMMGNKD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_BKCIAMMGNKD_OFFSET))();
	}

	static ::System::String* HAGEJABCMIP()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_HAGEJABCMIP_OFFSET))();
	}

	static ::System::Boolean HCHAFKIKPPL(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::String* CEKNHIDPNNA)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_HCHAFKIKPPL_OFFSET))(AOADDGCDELC, CEKNHIDPNNA);
	}

	static ::System::String* GPDEFOMHPGL()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_GPDEFOMHPGL_OFFSET))();
	}

	static ::System::Void JOPDKFGBOEJ(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::String* CEKNHIDPNNA)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_JOPDKFGBOEJ_OFFSET))(AOADDGCDELC, CEKNHIDPNNA);
	}

	static ::System::String* HKJLMOFMMJH()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_HKJLMOFMMJH_OFFSET))();
	}

	static ::System::Void PBGCCMEFFMJ(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::String* CEKNHIDPNNA)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_PBGCCMEFFMJ_OFFSET))(AOADDGCDELC, CEKNHIDPNNA);
	}

	static ::System::String* ALBOHMGGBGJ()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_ALBOHMGGBGJ_OFFSET))();
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> MKGBGFAEDNN()
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_MKGBGFAEDNN_OFFSET))();
	}

	static ::UnityEngine::Texture2D* MABFHFIBJNH(::UnityEngine::RenderTexture* FJEEKLKBFHN)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_MABFHFIBJNH_OFFSET))(FJEEKLKBFHN);
	}

	static ::System::String* GHKFOBOACAO(::System::String* LILFGGDFGBP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_GHKFOBOACAO_OFFSET))(LILFGGDFGBP);
	}

	static ::System::Void GAEBKELFJNB(::Il2CppArray<::System::Byte>* AOADDGCDELC, ::System::String* CEKNHIDPNNA)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_GAEBKELFJNB_OFFSET))(AOADDGCDELC, CEKNHIDPNNA);
	}

	static ::System::String* DJOPMMMHDJF(::System::String* LILFGGDFGBP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_DJOPMMMHDJF_OFFSET))(LILFGGDFGBP);
	}

	static ::System::String* IGCICDKAILN()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PCGPKGKBGDO_IGCICDKAILN_OFFSET))();
	}

	static ::System::String* LFCPCKDKGJB(::System::String* FNIOPKPHDEH, ::System::String* LILFGGDFGBP)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PCGPKGKBGDO_LFCPCKDKGJB_OFFSET))(FNIOPKPHDEH, LILFGGDFGBP);
	}
};
