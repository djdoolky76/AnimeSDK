#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_GraphSaveDataBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class JCADHFOKIHK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMAKNBFDMBE_AHJCKHIDPDG_OFFSET UNITYSDK_OFFSET(0x151A6E10)
#define LMAKNBFDMBE_AKDODNIIEEH_OFFSET UNITYSDK_OFFSET(0x151A7110)
#define LMAKNBFDMBE_FINISH_OFFSET UNITYSDK_OFFSET(0x151A6DC0)
#define LMAKNBFDMBE_KMHOKFENABH_1_OFFSET UNITYSDK_OFFSET(0x151A7980)
#define LMAKNBFDMBE_KMHOKFENABH_OFFSET UNITYSDK_OFFSET(0x151A6F90)
#define LMAKNBFDMBE_MNBFDAHMDDH_OFFSET UNITYSDK_OFFSET(0x151A7720)
#define LMAKNBFDMBE_NEJABFNFKIN_OFFSET UNITYSDK_OFFSET(0x151A78F0)
#define LMAKNBFDMBE__CTOR_OFFSET UNITYSDK_OFFSET(0x151A6CD0)

inline static constexpr unsigned int LMAKNBFDMBE_TypeDefinitionIndex = 47475;

class LMAKNBFDMBE : public ::MoleMole::VOPerformSubSystem_GraphSaveDataBase
{
public:
	::System::Collections::Generic::List_1<::System::String*>* MDHOLNGAHOK; // 0x20
	::System::String* LPKNPKCPABG; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* INPDJKEPHMK; // 0x30
	::JCADHFOKIHK* GGPHKDPMJCL; // 0x38
	::System::String* HOLFNBBCFIN; // 0x40
	::System::String* JBNFBGMMKJI; // 0x48
	::System::String* EGPJJGBPLOP; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* CFBLEJEPELP; // 0x58
	::System::Boolean POGMLILJLHF; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::FairyTextUpdateType NLFODOPIBLN; // 0x64
	::MoleMole::BubbleType AFEPBMMCGDM; // 0x68

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::UInt32 KMMGKJPAOMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + LMAKNBFDMBE__CTOR_OFFSET))(this, AELLPLBJELA, KMMGKJPAOMF);
	}

	::System::Void Finish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_FINISH_OFFSET))(this);
	}

	::System::Int32 KMHOKFENABH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_KMHOKFENABH_OFFSET))(this);
	}

	::System::Void AHJCKHIDPDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_AHJCKHIDPDG_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType> AKDODNIIEEH()
	{
		return ((::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_AKDODNIIEEH_OFFSET))(this);
	}

	::System::Void MNBFDAHMDDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_MNBFDAHMDDH_OFFSET))(this);
	}

	::System::Void NEJABFNFKIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_NEJABFNFKIN_OFFSET))(this);
	}

	::System::Int32 KMHOKFENABH_1(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMAKNBFDMBE_KMHOKFENABH_1_OFFSET))(this, MCOHLHMKLIP);
	}
};
