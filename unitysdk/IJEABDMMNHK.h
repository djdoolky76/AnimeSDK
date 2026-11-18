#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJEABDMMNHK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEBDFFC0)
#define IJEABDMMNHK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xEBE0270)
#define IJEABDMMNHK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xEBE01E0)
#define IJEABDMMNHK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEBDFE10)
#define IJEABDMMNHK__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBE0010)
#define IJEABDMMNHK__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE0090)

inline static constexpr unsigned int IJEABDMMNHK_TypeDefinitionIndex = 68587;

class IJEABDMMNHK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD4; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* NOKJMHNCHAP; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* FHKLAIJJHKF; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* LHIJJIJEOGA; // 0x58
	::System::Collections::Generic::HashSet_1<::System::Int32>* LLDGBDHMKDH; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* MJAJAFJEMJP; // 0x68
	::System::Collections::Generic::List_1<::System::Object*>* GMLLHOBPMMF; // 0x70
	::System::Boolean OOLHBKLAKGP; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJEABDMMNHK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEABDMMNHK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEABDMMNHK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEABDMMNHK_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEABDMMNHK_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::IJEABDMMNHK* JFDOOELFAOA()
	{
		return ((::IJEABDMMNHK*(*)())((::PBYTE)hIl2Cpp + IJEABDMMNHK_JFDOOELFAOA_OFFSET))();
	}
};
