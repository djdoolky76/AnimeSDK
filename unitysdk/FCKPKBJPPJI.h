#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileStream; }

#define FCKPKBJPPJI_CLIGAFFECKA_OFFSET UNITYSDK_OFFSET(0x1E5EBA70)
#define FCKPKBJPPJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5EBFE0)
#define FCKPKBJPPJI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1E5EC150)
#define FCKPKBJPPJI_GDJBCHGCANH_OFFSET UNITYSDK_OFFSET(0x1E5EBDE0)
#define FCKPKBJPPJI_JAFCBOHBCII_OFFSET UNITYSDK_OFFSET(0x1E5EBC10)
#define FCKPKBJPPJI_MGNEBCEJFPL_OFFSET UNITYSDK_OFFSET(0x1E5EBB70)
#define FCKPKBJPPJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5EC0E0)
#define FCKPKBJPPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB9B0)

inline static constexpr unsigned int FCKPKBJPPJI_TypeDefinitionIndex = 34042;

class FCKPKBJPPJI : public ::System::Object
{
public:
	::System::IO::FileStream* GMOAJJMPIFN; // 0x10
	::System::String* HILLALJFMMA; // 0x18
	::System::Boolean IFHPNDPONAL; // 0x20
	::System::Boolean OILHCEKCODN; // 0x21

	::System::Void _ctor(::System::IO::FileStream* DGIKMCCHNAM, ::System::String* CJBJONJDOLI, ::System::Boolean INJMLNPLFHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::FileStream*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCKPKBJPPJI__CTOR_OFFSET))(this, DGIKMCCHNAM, CJBJONJDOLI, INJMLNPLFHP);
	}

	::System::Boolean CLIGAFFECKA(::System::Int64 EFMNDLNEHNB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_CLIGAFFECKA_OFFSET))(this, EFMNDLNEHNB);
	}

	::System::Boolean JAFCBOHBCII(::Il2CppArray<::System::Byte>* OIHEMDFHGPH, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_JAFCBOHBCII_OFFSET))(this, OIHEMDFHGPH, BOGPAHGJOJK, JHFKDGBCOBA);
	}

	::System::Boolean GDJBCHGCANH(::Il2CppArray<::System::Byte>* OIHEMDFHGPH, ::System::Int32 BOGPAHGJOJK, ::System::Int32 JHFKDGBCOBA, ::System::Int64 ALLDMBDDNIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_GDJBCHGCANH_OFFSET))(this, OIHEMDFHGPH, BOGPAHGJOJK, JHFKDGBCOBA, ALLDMBDDNIG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_TOSTRING_OFFSET))(this);
	}

	::System::Void MGNEBCEJFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_MGNEBCEJFPL_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKPKBJPPJI_DPIHOJBBGLA_OFFSET))(this);
	}
};
