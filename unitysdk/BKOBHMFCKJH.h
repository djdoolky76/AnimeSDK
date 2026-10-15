#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFFANHAGFG;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class KKFCPPDPNJF;
class LMJPODEEGKK;
class MDHIBNLFCFL;
class MGEHMMODJHE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKOBHMFCKJH_AGKANLMIFDJ_OFFSET UNITYSDK_OFFSET(0xBA615A0)
#define BKOBHMFCKJH_COBDNLCNDED_OFFSET UNITYSDK_OFFSET(0xBA60F00)
#define BKOBHMFCKJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA60E30)
#define BKOBHMFCKJH_DBOHAABFDOP_OFFSET UNITYSDK_OFFSET(0xBA61680)
#define BKOBHMFCKJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA60EB0)
#define BKOBHMFCKJH_LFLIHDKDEJA_OFFSET UNITYSDK_OFFSET(0xBA610F0)

	class BKOBHMFCKJH : public ::System::Object
	{
	public:
		::MDHIBNLFCFL* CEFLLELKFOP; // 0x10
		::HAJDFCHFBGN* BJGGFKFAJMA; // 0x18
		::LMJPODEEGKK* FKINCGODJEP; // 0x20
		::KKFCPPDPNJF* KHANHFOFLMP; // 0x28
		::System::Void _ctor(::LMJPODEEGKK* a1, ::MDHIBNLFCFL* a2, ::HAJDFCHFBGN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::MDHIBNLFCFL*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_DISPOSE_OFFSET))(this);
		}

		::System::Void COBDNLCNDED(::MGEHMMODJHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGEHMMODJHE*))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_COBDNLCNDED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* LFLIHDKDEJA(::BEFFANHAGFG* a1, ::MGEHMMODJHE* a2)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::BEFFANHAGFG*, ::MGEHMMODJHE*))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_LFLIHDKDEJA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::KAKADGHNMFK*>* AGKANLMIFDJ()
		{
			return ((::Il2CppArray<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_AGKANLMIFDJ_OFFSET))(this);
		}

		::System::Void DBOHAABFDOP(::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a1, ::MGEHMMODJHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::MGEHMMODJHE*))((::PBYTE)hIl2Cpp + BKOBHMFCKJH_DBOHAABFDOP_OFFSET))(this, a1, a2);
		}

	};
