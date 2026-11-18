#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define MEKLFHEOCDC_BDGAPCLJAOK_OFFSET UNITYSDK_OFFSET(0x1852CED0)
#define MEKLFHEOCDC_CGFAAMDBNHH_OFFSET UNITYSDK_OFFSET(0x1852D980)
#define MEKLFHEOCDC_CHPNHFIKOIP_OFFSET UNITYSDK_OFFSET(0x1852D770)
#define MEKLFHEOCDC_DLNGBFPOPBK_OFFSET UNITYSDK_OFFSET(0x1852DA50)
#define MEKLFHEOCDC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1852D680)
#define MEKLFHEOCDC_FLEBBDACDDG_OFFSET UNITYSDK_OFFSET(0x1852D6C0)
#define MEKLFHEOCDC_GMDADPCFEPI_OFFSET UNITYSDK_OFFSET(0x1852E050)
#define MEKLFHEOCDC_JFOBPIPAAPB_OFFSET UNITYSDK_OFFSET(0x1852D2A0)
#define MEKLFHEOCDC_JNGICGBLOAJ_OFFSET UNITYSDK_OFFSET(0x1852C7B0)
#define MEKLFHEOCDC_OHELINJBOGJ_OFFSET UNITYSDK_OFFSET(0x1852DAA0)
#define MEKLFHEOCDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1852C680)
#define MEKLFHEOCDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852C760)
#define MEKLFHEOCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1852C700)

inline static constexpr unsigned int MEKLFHEOCDC_TypeDefinitionIndex = 51048;

class MEKLFHEOCDC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt64>** StaticGet_KOKGOJPFDEP()
	{
		return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(MEKLFHEOCDC_TypeDefinitionIndex)->GetStaticField(0x4BF70);
	}
	static ::System::Single* StaticGet_GCPLFJNKCAP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MEKLFHEOCDC_TypeDefinitionIndex)->GetStaticField(0x11960);
	}
	static ::System::Single* StaticGet_DGFPIGLCFME()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MEKLFHEOCDC_TypeDefinitionIndex)->GetStaticField(0x11964);
	}
	static ::System::Single* StaticGet_GALHJCFFAOO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MEKLFHEOCDC_TypeDefinitionIndex)->GetStaticField(0x11968);
	}
	static ::System::Single* StaticGet_IOLMIENLFKJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MEKLFHEOCDC_TypeDefinitionIndex)->GetStaticField(0x1196C);
	}
	::System::String* ICLBMJJKAPN; // 0x10
	::System::String* BEGGKPBDKCI; // 0x18
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* CCPJPFDOOAA; // 0x20
	::System::Int32 INACDIMEFOK; // 0x28
	::System::Single ENGIJPHEFPK; // 0x2C
	::System::Int32 ENIHEFGAHLL; // 0x30
	::System::Int32 CFNHKJCDOKC; // 0x34
	::System::Int32 FPPMOKPGKOF; // 0x38
	::System::Single DKOGOMLLABG; // 0x3C
	::System::Int32 HBIHLKHJKGF; // 0x40
	::System::Int32 DAFDFKHGOHE; // 0x44
	::System::Single GKMGMAAAIBD; // 0x48
	::System::Single HNMCGCEJOPD; // 0x4C
	::System::Int32 KADLMNHOJDI; // 0x50
	::System::Int32 FIPGOEKLDOE; // 0x54
	::System::Int32 GEMIFAPKIEL; // 0x58
	::System::Byte _padding0[0x4];
	::System::Int64 LPIOBDOFPCO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKLFHEOCDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_TOSTRING_OFFSET))(this);
	}

	static ::System::ValueTuple_5<::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32> JNGICGBLOAJ()
	{
		return ((::System::ValueTuple_5<::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC_JNGICGBLOAJ_OFFSET))();
	}

	static ::System::String* BDGAPCLJAOK()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC_BDGAPCLJAOK_OFFSET))();
	}

	static ::System::Single JFOBPIPAAPB()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC_JFOBPIPAAPB_OFFSET))();
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_DPIHOJBBGLA_OFFSET))(this);
	}

	static ::System::Int32 FLEBBDACDDG(::Il2CppArray<::UnityEngine::ParticleSystem*>* OMLGMJACMAB)
	{
		return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_FLEBBDACDDG_OFFSET))(OMLGMJACMAB);
	}

	static ::MEKLFHEOCDC* CHPNHFIKOIP()
	{
		return ((::MEKLFHEOCDC*(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC_CHPNHFIKOIP_OFFSET))();
	}

	::System::Void DLNGBFPOPBK(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_DLNGBFPOPBK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void OHELINJBOGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_OHELINJBOGJ_OFFSET))(this);
	}

	static ::System::Int32 CGFAAMDBNHH(::Il2CppArray<::UnityEngine::ParticleSystem*>* OMLGMJACMAB)
	{
		return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MEKLFHEOCDC_CGFAAMDBNHH_OFFSET))(OMLGMJACMAB);
	}

	static ::System::String* GMDADPCFEPI()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEKLFHEOCDC_GMDADPCFEPI_OFFSET))();
	}
};
