#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDDDLLMIIBD.h"

class HOBANNFKKIL;
class JBCOJHKMJMO;
class LJBBJODGAEG;
class MJOLOHCFCHO;
class PKPCAPOLHGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define PBANCGBBFDB_AMEGEDPPGMO_OFFSET UNITYSDK_OFFSET(0x1F313600)
#define PBANCGBBFDB_BNCBANJKEHG_OFFSET UNITYSDK_OFFSET(0x1F313540)
#define PBANCGBBFDB_EEEBOMFEMFH_OFFSET UNITYSDK_OFFSET(0x1F312CF0)
#define PBANCGBBFDB_INBFCBCENCB_OFFSET UNITYSDK_OFFSET(0x1F3136F0)
#define PBANCGBBFDB_JNDAJLMDEPA_OFFSET UNITYSDK_OFFSET(0x1F311AB0)
#define PBANCGBBFDB_KEGCGDNHJHA_OFFSET UNITYSDK_OFFSET(0x1F30BCF0)
#define PBANCGBBFDB_LMKBDPGJCCJ_OFFSET UNITYSDK_OFFSET(0x1F312880)
#define PBANCGBBFDB_NFPIELAJEAO_OFFSET UNITYSDK_OFFSET(0x1F313410)
#define PBANCGBBFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F30BC60)

inline static constexpr unsigned int PBANCGBBFDB_TypeDefinitionIndex = 28844;

class PBANCGBBFDB : public ::KDDDLLMIIBD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::HOBANNFKKIL*>* GANCCFNAPAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBANCGBBFDB__CTOR_OFFSET))(this);
	}

	::System::Boolean JNDAJLMDEPA(::System::String* KGDKDMDEOCK, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*& KACGCJKBOIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*&))((::PBYTE)hIl2Cpp + PBANCGBBFDB_JNDAJLMDEPA_OFFSET))(this, KGDKDMDEOCK, KACGCJKBOIC);
	}

	::System::Int32 NFPIELAJEAO(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_NFPIELAJEAO_OFFSET))(this, KACGCJKBOIC);
	}

	::System::Boolean BNCBANJKEHG(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_BNCBANJKEHG_OFFSET))(this, KACGCJKBOIC);
	}

	::System::Int32 LMKBDPGJCCJ(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC, ::System::Collections::Generic::Stack_1<::System::Int32>* GLMBHAKKNHC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*, ::System::Collections::Generic::Stack_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_LMKBDPGJCCJ_OFFSET))(this, KACGCJKBOIC, GLMBHAKKNHC);
	}

	static ::System::String* INBFCBCENCB(::PKPCAPOLHGN* AAOCANGHBDG, ::System::String* AIOBDECBPOK, ::System::String* ONKFJCKLMKG)
	{
		return ((::System::String*(*)(::PKPCAPOLHGN*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_INBFCBCENCB_OFFSET))(AAOCANGHBDG, AIOBDECBPOK, ONKFJCKLMKG);
	}

	::System::Void EEEBOMFEMFH(::System::String* KGDKDMDEOCK, ::System::Int32& HBJOLKHGGDD, ::System::String*& LDILCLLBPAP, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::String*&, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_EEEBOMFEMFH_OFFSET))(this, KGDKDMDEOCK, HBJOLKHGGDD, LDILCLLBPAP, KACGCJKBOIC);
	}

	::LJBBJODGAEG* AMEGEDPPGMO(::System::Collections::Generic::List_1<::JBCOJHKMJMO*>* KACGCJKBOIC)
	{
		return ((::LJBBJODGAEG*(*)(::PVOID, ::System::Collections::Generic::List_1<::JBCOJHKMJMO*>*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_AMEGEDPPGMO_OFFSET))(this, KACGCJKBOIC);
	}

	::System::Void KEGCGDNHJHA(::System::String* JDDNNCHHGOK, ::MJOLOHCFCHO* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MJOLOHCFCHO*))((::PBYTE)hIl2Cpp + PBANCGBBFDB_KEGCGDNHJHA_OFFSET))(this, JDDNNCHHGOK, FJDOCPKEACA);
	}
};
