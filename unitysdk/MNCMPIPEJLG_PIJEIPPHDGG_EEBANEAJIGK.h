#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLEPPGBBILH;
class LLCABFILHMP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_JOAMMCBBPAO_OFFSET UNITYSDK_OFFSET(0x12743230)
#define MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_NJNKBMMBKEP_OFFSET UNITYSDK_OFFSET(0x127433F0)
#define MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_ONDGGDIKNNC_OFFSET UNITYSDK_OFFSET(0x12743310)
#define MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x12742860)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_TypeDefinitionIndex = 46698;

class MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::System::Int32, ::LLCABFILHMP*>* BKDDADABCPE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::DLEPPGBBILH*>*>* OPBIJPELMIB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LLCABFILHMP*>* JOAMMCBBPAO(::System::Int32 FPBJKINKGDG)
	{
		return ((::System::Collections::Generic::List_1<::LLCABFILHMP*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_JOAMMCBBPAO_OFFSET))(this, FPBJKINKGDG);
	}

	::System::Collections::Generic::List_1<::DLEPPGBBILH*>* ONDGGDIKNNC(::System::Int32 FPBJKINKGDG)
	{
		return ((::System::Collections::Generic::List_1<::DLEPPGBBILH*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_ONDGGDIKNNC_OFFSET))(this, FPBJKINKGDG);
	}

	::LLCABFILHMP* NJNKBMMBKEP(::System::Int32 KMMGKJPAOMF)
	{
		return ((::LLCABFILHMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_EEBANEAJIGK_NJNKBMMBKEP_OFFSET))(this, KMMGKJPAOMF);
	}
};
