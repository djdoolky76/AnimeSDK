#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGINCKKGOME;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEJPIHHIAFI_ANCFKKICFAA_OFFSET UNITYSDK_OFFSET(0x152062F0)
#define KEJPIHHIAFI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15205FE0)
#define KEJPIHHIAFI_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15206B90)
#define KEJPIHHIAFI_DEFBDIHJIKD_OFFSET UNITYSDK_OFFSET(0x15205E30)
#define KEJPIHHIAFI_ELIGAFHEFLG_OFFSET UNITYSDK_OFFSET(0x15206610)
#define KEJPIHHIAFI_EOKELMAPLMO_OFFSET UNITYSDK_OFFSET(0x152063D0)
#define KEJPIHHIAFI_HIDCBHNMIAK_OFFSET UNITYSDK_OFFSET(0x15206890)
#define KEJPIHHIAFI_IBIDMGEDBFC_OFFSET UNITYSDK_OFFSET(0x15205ED0)
#define KEJPIHHIAFI_IFCNFBBEEFL_OFFSET UNITYSDK_OFFSET(0x15205E80)
#define KEJPIHHIAFI_NOFLMHOKHMI_OFFSET UNITYSDK_OFFSET(0x15206950)
#define KEJPIHHIAFI_OANFNOAHOJK_OFFSET UNITYSDK_OFFSET(0x152060B0)
#define KEJPIHHIAFI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x15206020)
#define KEJPIHHIAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15205E20)

inline static constexpr unsigned int KEJPIHHIAFI_TypeDefinitionIndex = 82315;

class KEJPIHHIAFI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* FHLGJJAGJKE; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DFIFIDBHCOP; // 0x18
	::BGINCKKGOME* KGONNDCPJGB; // 0x20
	::System::Single DODPODLMJGI; // 0x28
	::System::Int32 HCNCOBKAGIO; // 0x2C
	::System::Int32 ENLIDMEDFFK; // 0x30
	::System::Int32 EAHOJINMEIK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJPIHHIAFI__CTOR_OFFSET))(this);
	}

	::System::Void DEFBDIHJIKD(::BGINCKKGOME* EKOHIAJDIEC)
	{
		return ((::System::Void(*)(::PVOID, ::BGINCKKGOME*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_DEFBDIHJIKD_OFFSET))(this, EKOHIAJDIEC);
	}

	::System::Void IFCNFBBEEFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_IFCNFBBEEFL_OFFSET))(this);
	}

	::System::Boolean IBIDMGEDBFC(::System::String* EMHNJNFGGPC, ::System::UInt32& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32&))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_IBIDMGEDBFC_OFFSET))(this, EMHNJNFGGPC, PHHDHIBOCKA);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void OANFNOAHOJK(::System::String* EMHNJNFGGPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_OANFNOAHOJK_OFFSET))(this, EMHNJNFGGPC);
	}

	::System::Void ANCFKKICFAA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_ANCFKKICFAA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void EOKELMAPLMO(::System::String* EMHNJNFGGPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_EOKELMAPLMO_OFFSET))(this, EMHNJNFGGPC);
	}

	::System::Void ELIGAFHEFLG(::System::String* EMHNJNFGGPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_ELIGAFHEFLG_OFFSET))(this, EMHNJNFGGPC);
	}

	::System::Void HIDCBHNMIAK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_HIDCBHNMIAK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NOFLMHOKHMI(::System::String* EMHNJNFGGPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_NOFLMHOKHMI_OFFSET))(this, EMHNJNFGGPC);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJPIHHIAFI_BJANDJKKNCD_OFFSET))(this);
	}
};
