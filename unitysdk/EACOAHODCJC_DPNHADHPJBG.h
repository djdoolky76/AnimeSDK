#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class IBENDELLLAO;
namespace System { class String; }

#define EACOAHODCJC_DPNHADHPJBG_HBOEGKFBHBJ_OFFSET UNITYSDK_OFFSET(0x723290)
#define EACOAHODCJC_DPNHADHPJBG_IPCJHJJJHBA_OFFSET UNITYSDK_OFFSET(0x723300)
#define EACOAHODCJC_DPNHADHPJBG_KDDMOKOHBJA_OFFSET UNITYSDK_OFFSET(0x7232A0)
#define EACOAHODCJC_DPNHADHPJBG_LIEGIPPNGDK_OFFSET UNITYSDK_OFFSET(0x723280)
#define EACOAHODCJC_DPNHADHPJBG__CTOR_OFFSET UNITYSDK_OFFSET(0x723250)

inline static constexpr unsigned int EACOAHODCJC_DPNHADHPJBG_TypeDefinitionIndex = 78259;

struct alignas(8) EACOAHODCJC_DPNHADHPJBG
{
	::System::Int32 IPAJGFIBABM; // 0x10
	::System::Int32 HDCOGNIILJH; // 0x14
	::System::String* MGEDBKBHJPM; // 0x18
	::System::String* BAOBIBPKOEK; // 0x20
	::Il2CppArray<::System::Int32>* EFIADMJNCBH; // 0x28
	::Il2CppArray<::System::Int32>* HOAFIOAKGMF; // 0x30
	::System::Int32 LHJHFEEGFGB; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* OFLBJAHDEIF; // 0x40

	::System::Void _ctor(::System::Int32 LDMLDJEOJHE, ::System::Int32 NPAKMAGBOCH, ::System::String* HIAIKHDFCLN, ::System::String* CGJEBPGPIHO, ::Il2CppArray<::System::Int32>* GEOGLFJOOHC, ::Il2CppArray<::System::Int32>* KNCFJMHELDK, ::System::Int32 EHAFHMMNIIE, ::System::String* KJEGMBNFHGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EACOAHODCJC_DPNHADHPJBG__CTOR_OFFSET))(this, LDMLDJEOJHE, NPAKMAGBOCH, HIAIKHDFCLN, CGJEBPGPIHO, GEOGLFJOOHC, KNCFJMHELDK, EHAFHMMNIIE, KJEGMBNFHGE);
	}

	::System::Void LIEGIPPNGDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DPNHADHPJBG_LIEGIPPNGDK_OFFSET))(this);
	}

	::System::Void HBOEGKFBHBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DPNHADHPJBG_HBOEGKFBHBJ_OFFSET))(this);
	}

	::System::Boolean KDDMOKOHBJA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DPNHADHPJBG_KDDMOKOHBJA_OFFSET))(this);
	}

	::IBENDELLLAO* IPCJHJJJHBA()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EACOAHODCJC_DPNHADHPJBG_IPCJHJJJHBA_OFFSET))(this);
	}
};
