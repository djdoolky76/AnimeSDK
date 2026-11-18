#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLIIKLOIMCJ;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BFBNECFGJGA_CJCICKIDDLH_OFFSET UNITYSDK_OFFSET(0x1DCD83D0)
#define BFBNECFGJGA_DBFOLGOBKLK_OFFSET UNITYSDK_OFFSET(0x1DCD8ED0)
#define BFBNECFGJGA_DEGDCGLGMNG_OFFSET UNITYSDK_OFFSET(0x1DCD7C50)
#define BFBNECFGJGA_LDLFMFDGPCO_OFFSET UNITYSDK_OFFSET(0x1DCD8B80)
#define BFBNECFGJGA_NGGADBBJPDJ_OFFSET UNITYSDK_OFFSET(0x1DCD8030)
#define BFBNECFGJGA_NJCCEHLGMEJ_OFFSET UNITYSDK_OFFSET(0x1DCD88C0)
#define BFBNECFGJGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD7C40)

inline static constexpr unsigned int BFBNECFGJGA_TypeDefinitionIndex = 94903;

class BFBNECFGJGA : public ::System::Object
{
public:
	::DLIIKLOIMCJ* DICPEDGFHBH; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* DFIJHPKOBJE; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* GFCGENOCAHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBNECFGJGA__CTOR_OFFSET))(this);
	}

	::System::Void DEGDCGLGMNG(::DLIIKLOIMCJ* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DLIIKLOIMCJ*))((::PBYTE)hIl2Cpp + BFBNECFGJGA_DEGDCGLGMNG_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void NGGADBBJPDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBNECFGJGA_NGGADBBJPDJ_OFFSET))(this);
	}

	::System::Void CJCICKIDDLH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBNECFGJGA_CJCICKIDDLH_OFFSET))(this);
	}

	::System::Void NJCCEHLGMEJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BFBNECFGJGA_NJCCEHLGMEJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LDLFMFDGPCO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BFBNECFGJGA_LDLFMFDGPCO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DBFOLGOBKLK(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BFBNECFGJGA_DBFOLGOBKLK_OFFSET))(this, MNDIBLLFAJI);
	}
};
