#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class BPMGPHLMPJI;
class CJPPNKFGIPB;
class GHMAIBOFHML;
class IOMOMHHNBNC;
class OHJNEEKHFEM;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCIFKICBDKO_FEFBAOJEDGN_OFFSET UNITYSDK_OFFSET(0xFB509A0)
#define OCIFKICBDKO_GOMHHBFJKLK_OFFSET UNITYSDK_OFFSET(0xFB50260)
#define OCIFKICBDKO_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0xFB50210)
#define OCIFKICBDKO_LFHDLECMOEF_OFFSET UNITYSDK_OFFSET(0xFB50800)
#define OCIFKICBDKO_NGOOHDIPMDC_OFFSET UNITYSDK_OFFSET(0xFB504F0)
#define OCIFKICBDKO_OIGBONLNAJC_OFFSET UNITYSDK_OFFSET(0xFB50B40)
#define OCIFKICBDKO_ONSTART_OFFSET UNITYSDK_OFFSET(0xFB501D0)
#define OCIFKICBDKO__CTOR_OFFSET UNITYSDK_OFFSET(0xFB50250)

inline static constexpr unsigned int OCIFKICBDKO_TypeDefinitionIndex = 47828;

class OCIFKICBDKO : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void GOMHHBFJKLK(::System::Int32 KCJHDEGPBNI, ::System::Action_1<::BPMGPHLMPJI*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::BPMGPHLMPJI*>*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_GOMHHBFJKLK_OFFSET))(this, KCJHDEGPBNI, EJGDHCIBCJH);
	}

	::System::Void NGOOHDIPMDC(::System::Int32 CAAMAPMNIEF, ::System::Collections::Generic::List_1<::System::Int32>* FNGBEJKAECI, ::System::Action_1<::CJPPNKFGIPB*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::CJPPNKFGIPB*>*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_NGOOHDIPMDC_OFFSET))(this, CAAMAPMNIEF, FNGBEJKAECI, EJGDHCIBCJH);
	}

	::System::Void LFHDLECMOEF(::System::Int32 CAAMAPMNIEF, ::System::Action_1<::OHJNEEKHFEM*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::OHJNEEKHFEM*>*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_LFHDLECMOEF_OFFSET))(this, CAAMAPMNIEF, EJGDHCIBCJH);
	}

	::System::Void FEFBAOJEDGN(::System::Int32 CAAMAPMNIEF, ::System::Action_1<::IOMOMHHNBNC*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::IOMOMHHNBNC*>*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_FEFBAOJEDGN_OFFSET))(this, CAAMAPMNIEF, EJGDHCIBCJH);
	}

	::System::Void OIGBONLNAJC(::System::Int32 CAAMAPMNIEF, ::System::Int32 HAHAJFAPNHA, ::System::Action_1<::GHMAIBOFHML*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_1<::GHMAIBOFHML*>*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_OIGBONLNAJC_OFFSET))(this, CAAMAPMNIEF, HAHAJFAPNHA, EJGDHCIBCJH);
	}
};
