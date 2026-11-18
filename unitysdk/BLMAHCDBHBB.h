#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDBHJCMHEGC.h"

class MEFGCJDBFHN;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLMAHCDBHBB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x115FA810)
#define BLMAHCDBHBB_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x115F9F30)
#define BLMAHCDBHBB_HEHLKHOJJHM_OFFSET UNITYSDK_OFFSET(0x115FA850)
#define BLMAHCDBHBB_JEBEEDFHCGD_OFFSET UNITYSDK_OFFSET(0x115FA1E0)
#define BLMAHCDBHBB_NAFFLEOMCDM_OFFSET UNITYSDK_OFFSET(0x115FA670)
#define BLMAHCDBHBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x115FA190)
#define BLMAHCDBHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x115F9850)

inline static constexpr unsigned int BLMAHCDBHBB_TypeDefinitionIndex = 65425;

class BLMAHCDBHBB : public ::DDBHJCMHEGC
{
public:
	::System::String* ACKPJGHNEAH; // 0x10
	::System::String* JEPOICNEINJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DDBHJCMHEGC*>* PFDMCIKIJCJ; // 0x20
	::System::Boolean JEBMNIKPPIO; // 0x28

	::System::Void _ctor(::System::String* LCEGOBBEECM, ::System::Func_2<::System::String*, ::System::Double>* FDCAOKLPPOL, ::System::Func_2<::System::String*, ::System::String*>* AACLMIEHCNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_2<::System::String*, ::System::Double>*, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + BLMAHCDBHBB__CTOR_OFFSET))(this, LCEGOBBEECM, FDCAOKLPPOL, AACLMIEHCNJ);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_HBDAKDMFDAK_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* JEBEEDFHCGD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_JEBEEDFHCGD_OFFSET))(this);
	}

	::System::Void NAFFLEOMCDM(::MEFGCJDBFHN* FLNKOLPAGNM)
	{
		return ((::System::Void(*)(::PVOID, ::MEFGCJDBFHN*))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_NAFFLEOMCDM_OFFSET))(this, FLNKOLPAGNM);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::String* HEHLKHOJJHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMAHCDBHBB_HEHLKHOJJHM_OFFSET))(this);
	}
};
