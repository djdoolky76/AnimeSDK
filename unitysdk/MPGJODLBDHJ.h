#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBODHPNNLJJ;
class JBCOJHKMJMO;
class KDDDLLMIIBD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MPGJODLBDHJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1FB12C40)
#define MPGJODLBDHJ_BGGOJCALDLN_OFFSET UNITYSDK_OFFSET(0x1FB12C90)
#define MPGJODLBDHJ_CPDAMIIGGOF_OFFSET UNITYSDK_OFFSET(0x1FB13BC0)
#define MPGJODLBDHJ_GBIGELIKMGF_OFFSET UNITYSDK_OFFSET(0x1FB13720)
#define MPGJODLBDHJ_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0x1FB13BD0)
#define MPGJODLBDHJ_JLGJMKHMOGH_OFFSET UNITYSDK_OFFSET(0x1FB13050)
#define MPGJODLBDHJ_OHBNLIBINGL_OFFSET UNITYSDK_OFFSET(0x1FB125A0)
#define MPGJODLBDHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB12590)

inline static constexpr unsigned int MPGJODLBDHJ_TypeDefinitionIndex = 29065;

class MPGJODLBDHJ : public ::System::Object
{
public:
	::KDDDLLMIIBD* IBIDNCPKFBO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGJODLBDHJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OHBNLIBINGL(::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>* BBLAKILBDKC, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_OHBNLIBINGL_OFFSET))(this, BBLAKILBDKC, LGODAHPHAAN);
	}

	::System::Void BBOMJDBNHIC(::KDDDLLMIIBD* IBIDNCPKFBO)
	{
		return ((::System::Void(*)(::PVOID, ::KDDDLLMIIBD*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_BBOMJDBNHIC_OFFSET))(this, IBIDNCPKFBO);
	}

	::System::Boolean BGGOJCALDLN(::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>* BBLAKILBDKC, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_BGGOJCALDLN_OFFSET))(this, BBLAKILBDKC, LGODAHPHAAN);
	}

	::System::Boolean JLGJMKHMOGH(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_JLGJMKHMOGH_OFFSET))(this, KACGCJKBOIC, LGODAHPHAAN);
	}

	::System::Boolean GBIGELIKMGF(::JBCOJHKMJMO* DCNDEPCBEAF, ::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>* BBLAKILBDKC, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* LGODAHPHAAN)
	{
		return ((::System::Boolean(*)(::PVOID, ::JBCOJHKMJMO*, ::System::Collections::Generic::Stack_1<::JBCOJHKMJMO*>*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_GBIGELIKMGF_OFFSET))(this, DCNDEPCBEAF, BBLAKILBDKC, LGODAHPHAAN);
	}

	::KDDDLLMIIBD* CPDAMIIGGOF()
	{
		return ((::KDDDLLMIIBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_CPDAMIIGGOF_OFFSET))(this);
	}

	::GBODHPNNLJJ* JKHFEJJKJCC(::System::String* KGDKDMDEOCK)
	{
		return ((::GBODHPNNLJJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MPGJODLBDHJ_JKHFEJJKJCC_OFFSET))(this, KGDKDMDEOCK);
	}
};
