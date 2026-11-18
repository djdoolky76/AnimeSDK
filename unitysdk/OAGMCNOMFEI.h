#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class LOAEANBOJJD;
class OLJJEDCMDJM;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OAGMCNOMFEI_ALIHCHKHLPH_OFFSET UNITYSDK_OFFSET(0xEEC8260)
#define OAGMCNOMFEI_ANPGEJGJFAD_OFFSET UNITYSDK_OFFSET(0xEEC8170)
#define OAGMCNOMFEI_APJMEDLEPAP_OFFSET UNITYSDK_OFFSET(0xEEC89D0)
#define OAGMCNOMFEI_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0xEEC8940)
#define OAGMCNOMFEI_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0xEEC81D0)
#define OAGMCNOMFEI_EFAHHGCBLHL_OFFSET UNITYSDK_OFFSET(0xEEC8BC0)
#define OAGMCNOMFEI_JBLHPNDGNAG_OFFSET UNITYSDK_OFFSET(0xEEC8110)
#define OAGMCNOMFEI_MNHMFAGGFFJ_OFFSET UNITYSDK_OFFSET(0xEEC8870)
#define OAGMCNOMFEI_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0xEEC8000)
#define OAGMCNOMFEI_ONSTART_OFFSET UNITYSDK_OFFSET(0xEEC7FA0)
#define OAGMCNOMFEI_PGJBNHOMDBL_OFFSET UNITYSDK_OFFSET(0xEEC8490)
#define OAGMCNOMFEI__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC8090)

inline static constexpr unsigned int OAGMCNOMFEI_TypeDefinitionIndex = 57939;

class OAGMCNOMFEI : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* FIFEBIEMDNJ; // 0x18
	::System::Int32 OLNAPGPEABM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void JBLHPNDGNAG(::LOAEANBOJJD* GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::LOAEANBOJJD*))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_JBLHPNDGNAG_OFFSET))(this, GDINHGLCODO);
	}

	::System::Void ANPGEJGJFAD(::OLJJEDCMDJM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OLJJEDCMDJM*))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_ANPGEJGJFAD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void ALIHCHKHLPH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_ALIHCHKHLPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGJBNHOMDBL(::System::Int32 KIJHAOJIHOC, ::System::Action_1<::System::Action*>* EJGDHCIBCJH, ::System::Boolean KBCCKFFCMDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Action*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_PGJBNHOMDBL_OFFSET))(this, KIJHAOJIHOC, EJGDHCIBCJH, KBCCKFFCMDK);
	}

	::System::Int32 MNHMFAGGFFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_MNHMFAGGFFJ_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void APJMEDLEPAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_APJMEDLEPAP_OFFSET))(this);
	}

	::System::Void EFAHHGCBLHL(::System::Collections::Generic::List_1<::System::Int32>* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_EFAHHGCBLHL_OFFSET))(this, AELLPLBJELA);
	}
};
