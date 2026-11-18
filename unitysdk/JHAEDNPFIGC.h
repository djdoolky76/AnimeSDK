#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class FLDPBAPLICI;
class HLGHMFKACOB;
class JGALJALGFFC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHAEDNPFIGC_BMHMALGGOEP_OFFSET UNITYSDK_OFFSET(0x165A9A40)
#define JHAEDNPFIGC_EDJHGADCEPG_OFFSET UNITYSDK_OFFSET(0x165A9BE0)
#define JHAEDNPFIGC_EHDLDAAJFKC_OFFSET UNITYSDK_OFFSET(0x165A9440)
#define JHAEDNPFIGC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165A8E50)
#define JHAEDNPFIGC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165A8780)
#define JHAEDNPFIGC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x165A8EB0)
#define JHAEDNPFIGC_IMAEHPDFJNC_OFFSET UNITYSDK_OFFSET(0x165A98A0)
#define JHAEDNPFIGC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x165A8800)
#define JHAEDNPFIGC__CTOR_OFFSET UNITYSDK_OFFSET(0x165A91C0)

inline static constexpr unsigned int JHAEDNPFIGC_TypeDefinitionIndex = 52195;

class JHAEDNPFIGC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::JGALJALGFFC*>* GEBOFPCEOFL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LLOAGBJLBAI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ALIAIPICFMK; // 0x20
	::System::Collections::Generic::List_1<::HLGHMFKACOB*>* LNDAGBCLBHE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* NMKKAIKPJAE; // 0x30
	::System::String* LOAAMHLEIOD; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HOAKKBILIGK; // 0x40
	::System::Collections::Generic::List_1<::FLDPBAPLICI*>* MKLICPGCAMP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAEDNPFIGC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean EHDLDAAJFKC(::System::String* IMOAKEGINJP, ::System::Collections::Generic::List_1<::HLGHMFKACOB*>* PILELGPBCLL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::HLGHMFKACOB*>*))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_EHDLDAAJFKC_OFFSET))(this, IMOAKEGINJP, PILELGPBCLL);
	}

	::System::Boolean IMAEHPDFJNC(::System::Int32 FALJABIBPNH, ::JGALJALGFFC*& GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGALJALGFFC*&))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_IMAEHPDFJNC_OFFSET))(this, FALJABIBPNH, GEEHGDABNJF);
	}

	::System::Boolean BMHMALGGOEP(::System::Int32 DELLECJFHGA, ::FLDPBAPLICI*& EAPIEMGDDMM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLDPBAPLICI*&))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_BMHMALGGOEP_OFFSET))(this, DELLECJFHGA, EAPIEMGDDMM);
	}

	::System::Boolean EDJHGADCEPG(::System::Int32 IHDCGPLNEBJ, ::HLGHMFKACOB*& DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLGHMFKACOB*&))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_EDJHGADCEPG_OFFSET))(this, IHDCGPLNEBJ, DEKJDEPKKLH);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JHAEDNPFIGC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
