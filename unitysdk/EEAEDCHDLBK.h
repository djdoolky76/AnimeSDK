#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FJIJIKNMOOJ;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define EEAEDCHDLBK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xF9BE8B0)
#define EEAEDCHDLBK_EAFKOMFPOCC_OFFSET UNITYSDK_OFFSET(0xF9BE8F0)
#define EEAEDCHDLBK_FHNLOBJNFBP_OFFSET UNITYSDK_OFFSET(0xF9BE5D0)
#define EEAEDCHDLBK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF9BDC60)
#define EEAEDCHDLBK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF9BDA20)
#define EEAEDCHDLBK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF9BDCC0)
#define EEAEDCHDLBK_LHMFFPFMKFF_OFFSET UNITYSDK_OFFSET(0xF9BEAC0)
#define EEAEDCHDLBK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0xF9BE0F0)
#define EEAEDCHDLBK_PAMHGEAPNLK_OFFSET UNITYSDK_OFFSET(0xF9BE980)
#define EEAEDCHDLBK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF9BDAA0)
#define EEAEDCHDLBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF9BDE70)
#define EEAEDCHDLBK__CTOR_OFFSET UNITYSDK_OFFSET(0xF9BE0E0)

inline static constexpr unsigned int EEAEDCHDLBK_TypeDefinitionIndex = 72184;

class EEAEDCHDLBK : public ::System::Object
{
public:
	// static const ::System::String* MBDCMLBKGGD; // 0x0
	::Il2CppArray<::FJIJIKNMOOJ*>* NDPMKMKCJAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAEDCHDLBK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_TOSTRING_OFFSET))(this);
	}

	static ::EEAEDCHDLBK* LNFENFDLMIG(::System::String* CEKNHIDPNNA)
	{
		return ((::EEAEDCHDLBK*(*)(::System::String*))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_LNFENFDLMIG_OFFSET))(CEKNHIDPNNA);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_DPIHOJBBGLA_OFFSET))(this);
	}

	static ::System::String* EAFKOMFPOCC()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EEAEDCHDLBK_EAFKOMFPOCC_OFFSET))();
	}

	::System::Collections::Generic::List_1<::System::String*>* PAMHGEAPNLK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_PAMHGEAPNLK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void LHMFFPFMKFF(::System::String* EHOBGNBEKIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_LHMFFPFMKFF_OFFSET))(this, EHOBGNBEKIJ);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::Il2CppArray<::System::Byte>* FHNLOBJNFBP(::System::IO::Stream* CPKODGLINAO)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + EEAEDCHDLBK_FHNLOBJNFBP_OFFSET))(CPKODGLINAO);
	}
};
