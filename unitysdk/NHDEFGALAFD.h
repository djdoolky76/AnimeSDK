#pragma once
#include "unitysdk/unitysdk.h"

namespace BinaryTracingCore::Source::TracingTools { class LogChannel; }
namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace System { class String; }
namespace System::IO { class FileStream; }

#define NHDEFGALAFD_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x12102C00)
#define NHDEFGALAFD_CGPNGGPKJPG_OFFSET UNITYSDK_OFFSET(0x12102ED0)
#define NHDEFGALAFD_DKMPFNKEEEN_OFFSET UNITYSDK_OFFSET(0x12102E90)
#define NHDEFGALAFD_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x12102C40)
#define NHDEFGALAFD_FGLOLEJJLDJ_OFFSET UNITYSDK_OFFSET(0x12102F50)
#define NHDEFGALAFD_IFJPECMIGME_OFFSET UNITYSDK_OFFSET(0x12102BA0)
#define NHDEFGALAFD_KOBNNFDJGHP_OFFSET UNITYSDK_OFFSET(0x12102F90)
#define NHDEFGALAFD_OCFMBJAJCKE_OFFSET UNITYSDK_OFFSET(0x12103040)
#define NHDEFGALAFD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x121029D0)
#define NHDEFGALAFD_OOHIPBNFOKO_OFFSET UNITYSDK_OFFSET(0x12102F10)
#define NHDEFGALAFD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12102A10)
#define NHDEFGALAFD_UPDATE_OFFSET UNITYSDK_OFFSET(0x12102C80)
#define NHDEFGALAFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12102D00)
#define NHDEFGALAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x12102CE0)

inline static constexpr unsigned int NHDEFGALAFD_TypeDefinitionIndex = 89727;

class NHDEFGALAFD
{
public:
	static ::System::String** StaticGet_HGHJINOPPFA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NHDEFGALAFD_TypeDefinitionIndex)->GetStaticField(0x52290);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogChannel** StaticGet_KBIFCBACFLM()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogChannel**)Il2CppClass::FromTypeDefinitionIndex(NHDEFGALAFD_TypeDefinitionIndex)->GetStaticField(0x52298);
	}
	static ::System::String** StaticGet_NGDMOEDMEPE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NHDEFGALAFD_TypeDefinitionIndex)->GetStaticField(0x522A0);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_LKOPBAALBGF()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NHDEFGALAFD_TypeDefinitionIndex)->GetStaticField(0x522A8);
	}
	::System::IO::FileStream* FDDEMMPCGAC; // 0x10
	::BinaryTracingCore::Source::TracingTools::TracingSystem* PAJFDFILCKM; // 0x18
	::System::Boolean KAKAKNHMELE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDEFGALAFD__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_ONCREATE_OFFSET))(this);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Update(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHDEFGALAFD_UPDATE_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void DKMPFNKEEEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_DKMPFNKEEEN_OFFSET))(this);
	}

	::System::Void CGPNGGPKJPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_CGPNGGPKJPG_OFFSET))(this);
	}

	::System::Void OOHIPBNFOKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_OOHIPBNFOKO_OFFSET))(this);
	}

	::System::Void FGLOLEJJLDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_FGLOLEJJLDJ_OFFSET))(this);
	}

	::System::Void IFJPECMIGME(::System::String* GCMEHHGNGOF, ::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NHDEFGALAFD_IFJPECMIGME_OFFSET))(this, GCMEHHGNGOF, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Void KOBNNFDJGHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_KOBNNFDJGHP_OFFSET))(this);
	}

	::System::Void OCFMBJAJCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEFGALAFD_OCFMBJAJCKE_OFFSET))(this);
	}
};
