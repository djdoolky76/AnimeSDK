#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHKEAKHADOO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHDMKBEAJAI_BNDGGOHLHEM_OFFSET UNITYSDK_OFFSET(0x7FB8BE0)
#define DHDMKBEAJAI_CKKGHBGILGA_OFFSET UNITYSDK_OFFSET(0x7FB8D40)
#define DHDMKBEAJAI_FELENCPDFAH_OFFSET UNITYSDK_OFFSET(0x7FB8C50)
#define DHDMKBEAJAI_LENHEEKCJKG_OFFSET UNITYSDK_OFFSET(0x7FB8D20)
#define DHDMKBEAJAI_MIDGGHFFHPB_OFFSET UNITYSDK_OFFSET(0x7FB8F70)
#define DHDMKBEAJAI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7FB8B50)
#define DHDMKBEAJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x7FB8AB0)

inline static constexpr unsigned int DHDMKBEAJAI_TypeDefinitionIndex = 68998;

class DHDMKBEAJAI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::EHKEAKHADOO*>* DIPAPBBBDAA; // 0x10
	::System::Int32 LFJNHOJOOPB; // 0x18
	::System::Int32 KMEJLLPKDMO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDMKBEAJAI__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BNDGGOHLHEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_BNDGGOHLHEM_OFFSET))(this);
	}

	::System::Void FELENCPDFAH(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_FELENCPDFAH_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Int32 LENHEEKCJKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_LENHEEKCJKG_OFFSET))(this);
	}

	::System::Int32 CKKGHBGILGA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_CKKGHBGILGA_OFFSET))(this);
	}

	::System::Boolean MIDGGHFFHPB(::EHKEAKHADOO* EOOPMPNJAAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::EHKEAKHADOO*))((::PBYTE)hIl2Cpp + DHDMKBEAJAI_MIDGGHFFHPB_OFFSET))(this, EOOPMPNJAAI);
	}
};
