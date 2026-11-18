#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOPPBECEADK.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/NCJLKIIGPIC.h"

class OJADFPNKBHN;
class PPCPILBOAEI;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBIACNHOOOG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x17312250)
#define PBIACNHOOOG_EOIHJPBHJFE_OFFSET UNITYSDK_OFFSET(0x173105F0)
#define PBIACNHOOOG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17312070)
#define PBIACNHOOOG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17312290)
#define PBIACNHOOOG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x173121C0)
#define PBIACNHOOOG_MGEKAHDEAMG_OFFSET UNITYSDK_OFFSET(0x17312150)
#define PBIACNHOOOG_OJJJKMLBCIB_OFFSET UNITYSDK_OFFSET(0x17310D30)
#define PBIACNHOOOG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17311380)
#define PBIACNHOOOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17311480)
#define PBIACNHOOOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x173120C0)
#define PBIACNHOOOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17312140)

inline static constexpr unsigned int PBIACNHOOOG_TypeDefinitionIndex = 77173;

class PBIACNHOOOG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xCA; // 0x0
	::System::Action_1<::PBIACNHOOOG*>* DJHGBGAPHCI; // 0x48
	::System::Collections::Generic::List_1<::NCJLKIIGPIC>* HJPNDNKLJKI; // 0x50
	::OJADFPNKBHN* JHIJPCJBOCJ; // 0x58
	::System::Collections::Generic::Dictionary_2<::FOPPBECEADK, ::System::Single>* FKNMALHNMHN; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIACNHOOOG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG__CTOR_OFFSET))(this);
	}

	::System::Boolean EOIHJPBHJFE(::PPCPILBOAEI*& PAAKENELHJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPCPILBOAEI*&))((::PBYTE)hIl2Cpp + PBIACNHOOOG_EOIHJPBHJFE_OFFSET))(this, PAAKENELHJL);
	}

	::System::Boolean OJJJKMLBCIB(::PPCPILBOAEI* PAAKENELHJL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPCPILBOAEI*))((::PBYTE)hIl2Cpp + PBIACNHOOOG_OJJJKMLBCIB_OFFSET))(this, PAAKENELHJL);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG_GETCLASSID_OFFSET))(this);
	}

	::System::Void MGEKAHDEAMG(::System::Collections::Generic::Dictionary_2<::FOPPBECEADK, ::System::Single>* JFPDJGAMELP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::FOPPBECEADK, ::System::Single>*))((::PBYTE)hIl2Cpp + PBIACNHOOOG_MGEKAHDEAMG_OFFSET))(this, JFPDJGAMELP);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACNHOOOG_DPIHOJBBGLA_OFFSET))(this);
	}

	static ::PBIACNHOOOG* JFDOOELFAOA()
	{
		return ((::PBIACNHOOOG*(*)())((::PBYTE)hIl2Cpp + PBIACNHOOOG_JFDOOELFAOA_OFFSET))();
	}
};
